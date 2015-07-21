#include "libusb_api.h"
#include "utpm_api.h"
#include "utils.h"
#include <time.h>

int Dongle_Open() {
    char v9[0x41C] = {};
    char v6[3];
    srand(time(0));
    int i;
    for (i = 0; i < 64; i++) {
        v9[12+i] = rand() % 255;
    }
    
    sub_4037F0(v9+8, v6, v9+8, 128, byte_417E80);

    char v9_head[] = {
        0x00, 0x10, 0x00, 0x00,
        0x00, 0x00, 0x80, 0x00
    };
    memcpy(v9, v9_head, sizeof(v9_head));

    char send_buffer1[0x41] = {
        0x02, 0x00, 0x88, 0x00,
        0x00, 0x00, 0x3A
    };
    char send_buffer2[0x41] = {
        0x02, 0x00, 0x88, 0x00,
        0x3A, 0x00, 0x3A
    };
    char send_buffer3[0x41] = {
        0x02, 0x00, 0x88, 0x00,
        0x74, 0x00, 0x14
    };

    memcpy(send_buffer1+7, v9, 58);
    memcpy(send_buffer2+7, v9+58, 58);
    memcpy(send_buffer3+7, send_buffer2+7, sizeof(send_buffer2)-7);
    memcpy(send_buffer3+7, v9+116, 20);

    /*
    printf("send_buffer1 is: \n");
    printf_buffer(send_buffer1, sizeof(send_buffer1));
    printf("send_buffer2 is: \n");
    printf_buffer(send_buffer2, sizeof(send_buffer2));
    printf("send_buffer3 is: \n");
    printf_buffer(send_buffer3, sizeof(send_buffer3));
    */
    
   if (write_to_ukey(send_buffer1, sizeof(send_buffer1)) < 0 || write_to_ukey(send_buffer2, sizeof(send_buffer2)) < 0 || write_to_ukey(send_buffer3, sizeof(send_buffer3)) < 0) {
        printf("write_to_ukey() failed.\n");
        return -1;
    }
    char receive_buffer1[0x41];
    char receive_buffer2[0x41];
    char receive_buffer3[0x41];
    if (read_from_key(receive_buffer1, sizeof(receive_buffer1)) < 0 || read_from_key(receive_buffer2, sizeof(receive_buffer2)) < 0 || read_from_key(receive_buffer3, sizeof(receive_buffer3)) < 0) {
    printf("read_from_key() failed.\n");
    return -1;
    }
    /*
    printf("receive_buffer1 is: \n");
    printf_buffer(receive_buffer1, sizeof(receive_buffer1));
    printf("receive_buffer2 is: \n");
    printf_buffer(receive_buffer2, sizeof(receive_buffer2));
    printf("receive_buffer3 is: \n");
    printf_buffer(receive_buffer3, sizeof(receive_buffer3));
    */

    memcpy(v9+8, receive_buffer1+7, 0xe * 4);
    memcpy(v9+64, receive_buffer1+63, 0x2);

    memcpy(v9+66, receive_buffer2+7, 0xe * 4);
    memcpy(v9+122, receive_buffer2+63, 0x2);

    memcpy(v9+124, receive_buffer3+7, 0x3 * 4);
    memcpy(v9+136, receive_buffer3+19, 0x2);

    sub_4037F0(v9+8, v6, v9+8, 128, byte_417E80);

    memcpy(byte_417888, v9+76, 8);

    /*
    printf("byte_417888 is:\n");
    printf_buffer(byte_417888, 8);
    */
    return 0;
    
}
int Dongle_LEDControl() {
    char pbSendBuffer[0x41C] = {
       0x00, 0x12, 0x02, 0x00
    };

    sub_401E70(pbSendBuffer, pbSendBuffer, byte_417888, 0x08);

    char send_buffer[0x41] = {
        0x02, 0x00, 0x08, 0x00,
        0x00, 0x00, 0x08
    };
    char receive_buffer[0x41];

    memcpy(send_buffer+7,pbSendBuffer, 8);
    /*
    printf("send_buffer is:\n");
    printf_buffer(send_buffer, 0x41);
    */
   if (write_to_ukey(send_buffer, sizeof(send_buffer)) < 0) {
        printf("write_to_ukey() failed.\n");
        return -1;
    }
    if (read_from_key(receive_buffer, sizeof(receive_buffer)) < 0) {
        printf("read_from_key() failed.\n");
        return -1;
    }
    /*
    printf("receive_buffer is: \n");
    printf_buffer(receive_buffer, sizeof(receive_buffer));
    */
    return 0;
}

int Dongle_RunExeFile(short fielid, char *inoutbuf, short len) {
    char pbSendBuffer[0x41C] = {0x00, 0x4A, 0x00, 0x00};
    memcpy(pbSendBuffer+4, &fielid, 2);
    memcpy(pbSendBuffer+6, &len, 2);
    memcpy(pbSendBuffer+8, inoutbuf, len);
    

    sub_401E70(pbSendBuffer, pbSendBuffer, byte_417888, 0x408);

    char send_buffer[0x41] = {0x02, 0x04, 0x08};
    int to_send = sizeof(pbSendBuffer) - 20;
    int remaining = to_send;
    short max_load = 58;
    while(remaining > 0 ) {
        short index;
        short bytes;
        if (remaining < max_load) {
            bytes = remaining;
        }
        else {
            bytes = max_load;
        }
        index = to_send - remaining;

        memcpy(send_buffer+4, &index, 1);
        memcpy(send_buffer+3, (void *)&index + 1, 1);
        memcpy(send_buffer+6, &bytes, 1);
        memcpy(send_buffer+5, (void *)&bytes + 1, 1);
        memcpy(send_buffer+7, pbSendBuffer+index, bytes);
        remaining -= max_load;

        if (write_to_ukey(send_buffer, sizeof(send_buffer)) < 0) {
            printf("write_to_key() failed.\n");
            return -1;
        }
    }
    char receive_buffer[0x41];
    int i;
    for (i = 0; i < 18; i++) {
        if (read_from_key(receive_buffer, sizeof(receive_buffer)) < 0) {
            printf("read_from_key() failed.\n");
            return -1;
        }
        short index;
        short bytes;
        memcpy((void *)&index, receive_buffer+4, 1);
        memcpy((void *)&index+1, receive_buffer+3, 1);
        memcpy((void *)&bytes, receive_buffer+6, 1);
        memcpy((void *)&bytes+1, receive_buffer+5, 1);
        memcpy(pbSendBuffer+8+index, receive_buffer+7, bytes);
    }

    sub_401EE0(pbSendBuffer+8, pbSendBuffer+8, byte_417888, 0x400);
    /*
    printf("pbSendBuffer is:\n");
    printf_buffer(pbSendBuffer, sizeof(pbSendBuffer));
    */
    memcpy(inoutbuf, pbSendBuffer+8, len);
    return 0;

}

int utpm_pcr_extend(short pcrnum, char *digest) {
    if (setup_ukey_context() != 0) {
        printf("setup_ukey_context() failed.\n");
        return -1;
    }
    if (Dongle_Open() !=0) {
        printf("Dongle_Open() failed.\n");
        return -1;
    }
    
    short fielid = 0x1;
    char inoutbuf[1020] = {
        0x22, 0x00, 0x00, 0x00, 0x00, 0xc1, 0x00, 0x00,   
        0x00, 0x22, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00,
        0x00, 0x07, 0xff, 0xff, 0xff, 0x23, 0xff, 0xff,   
        0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0xaf, 0x01, 0x34, 0x33
    };
    memcpy(inoutbuf+16, (void *)&pcrnum + 1, 1);
    memcpy(inoutbuf+17, (void *)&pcrnum, 1);
    memcpy(inoutbuf+18, digest, 20);
    /*
    printf("inoutbuf before :\n");
    printf_buffer(inoutbuf, 1020);
    */
    Dongle_RunExeFile(fielid, inoutbuf, 1020);
    memcpy(digest, inoutbuf+18, 20);

    /*
    printf("inoutbuf after :\n");
    printf_buffer(inoutbuf, 1020);
    */

    close_ukey_context();

    return 0;

}

int utpm_pcr_read(short pcrnum, char *digest) {
     if (setup_ukey_context() != 0) {
        printf("setup_ukey_context() failed.\n");
        return -1;
     }
     if (Dongle_Open() !=0) {
         printf("Dongle_Open() failed.\n");
         return -1;
     }

     short fielid = 0x1;
     char inoutbuf[1020] = {
         0x0e, 0x00, 0x00, 0x00, 0x00, 0xc1, 0x00, 0x00,   
         0x00, 0x0e, 0x00, 0x00, 0x00, 0x15, 0x00, 0x00,       
         0x00, 0x07
     };
  
    memcpy(inoutbuf+16, (void *)&pcrnum + 1, 1);
    memcpy(inoutbuf+17, (void *)&pcrnum, 1);
    /*
    printf("inoutbuf before :\n");
    printf_buffer(inoutbuf, 1020);
    */
    Dongle_RunExeFile(fielid, inoutbuf, 1020);
    memcpy(digest, inoutbuf+18, 20);

    /*
    printf("inoutbuf after :\n");
    printf_buffer(inoutbuf, 1020);
    */

    close_ukey_context();

    return 0;

}

