#include "libusb_api.h"
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
    //printf("v9 is:\n");
    //printf_buffer(v9, sizeof(v9));
    
    sub_4037F0(v9+8, v6, v9+8, 128, byte_417E80);
    //printf("v9 is:\n");
    //printf_buffer(v9, sizeof(v9));
    char v9_head[] = {
        0x00, 0x10, 0x00, 0x00,
        0x00, 0x00, 0x80, 0x00
    };
    memcpy(v9, v9_head, sizeof(v9_head));

    //printf("v9 is:\n");
    //printf_buffer(v9, sizeof(v9));
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
    printf("send_buffer1 is: \n");
    printf_buffer(send_buffer1, sizeof(send_buffer1));
    printf("send_buffer2 is: \n");
    printf_buffer(send_buffer2, sizeof(send_buffer2));
    printf("send_buffer3 is: \n");
    printf_buffer(send_buffer3, sizeof(send_buffer3));
    
   if (write_to_ukey(send_buffer1, sizeof(send_buffer1)) < 0 || write_to_ukey(send_buffer2, sizeof(send_buffer2)) < 0 || write_to_ukey(send_buffer3, sizeof(send_buffer3)) < 0) {
        printf("write_to_ukey() failed.\n");
        exit(1);
    }
    char receive_buffer1[0x41];
    char receive_buffer2[0x41];
    char receive_buffer3[0x41];
    if (read_from_key(receive_buffer1, sizeof(receive_buffer1)) < 0 || read_from_key(receive_buffer2, sizeof(receive_buffer2)) < 0 || read_from_key(receive_buffer3, sizeof(receive_buffer3)) < 0) {
    printf("read_from_key() failed.\n");
    exit(1);
    }
    printf("receive_buffer1 is: \n");
    printf_buffer(receive_buffer1, sizeof(receive_buffer1));
    printf("receive_buffer2 is: \n");
    printf_buffer(receive_buffer2, sizeof(receive_buffer2));
    printf("receive_buffer3 is: \n");
    printf_buffer(receive_buffer3, sizeof(receive_buffer3));
    memcpy(v9+8, receive_buffer1+7, 0xe * 4);
    memcpy(v9+64, receive_buffer1+63, 0x2);

    memcpy(v9+66, receive_buffer2+7, 0xe * 4);
    memcpy(v9+122, receive_buffer2+63, 0x2);

    memcpy(v9+124, receive_buffer3+7, 0x3 * 4);
    memcpy(v9+136, receive_buffer3+19, 0x2);

    //printf("v9 is:\n");
    //printf_buffer(v9, sizeof(v9));
    sub_4037F0(v9+8, v6, v9+8, 128, byte_417E80);

    //printf("v9 is:\n");
    //printf_buffer(v9, sizeof(v9));
    memcpy(byte_417888, v9+76, 8);

    printf("byte_417888 is:\n");
    printf_buffer(byte_417888, 8);
    
}
int Dongle_LEDControl() {
    char pbSendBuffer[0x41C] = {
       0x00, 0x12, 0x02, 0x00
    };

    sub_401E70(pbSendBuffer, pbSendBuffer, byte_417888, 0x08);

    //printf("pbSendBuffer is:\n");
    //printf_buffer(pbSendBuffer, sizeof(pbSendBuffer));
    char send_buffer[0x41] = {
        0x02, 0x00, 0x08, 0x00,
        0x00, 0x00, 0x08
    };
    char receive_buffer[0x41];

    memcpy(send_buffer+7,pbSendBuffer, 8);
    printf("send_buffer is:\n");
    printf_buffer(send_buffer, 0x41);
   if (write_to_ukey(send_buffer, sizeof(send_buffer)) < 0) {
        printf("write_to_ukey() failed.\n");
        exit(1);
    }
    if (read_from_key(receive_buffer, sizeof(receive_buffer)) < 0) {
        printf("read_from_key() failed.\n");
        exit(1);
    }
    printf("receive_buffer is: \n");
    printf_buffer(receive_buffer, sizeof(receive_buffer));
}

int Dongle_RunExeFile(short fielid, char *inoutbuf, short len) {
    char pbSendBuffer[0x41C] = {0x00, 0x4A, 0x00, 0x00};
    memcpy(pbSendBuffer+4, &fielid, 2);
    memcpy(pbSendBuffer+6, &len, 2);
    memcpy(pbSendBuffer+8, inoutbuf, len);
    
    printf("pbSendBuffer is:\n");
    printf_buffer(pbSendBuffer, sizeof(pbSendBuffer));

    /* FAKE!!!
     * /
    0012FA8C   C04C4490
        0012FA90   CF3D07FD

    int fake_417888[] = {0xc04c4490, 0xcf3d07fd};
    sub_401E70(pbSendBuffer, pbSendBuffer, fake_417888, 0x408);
    */
    sub_401E70(pbSendBuffer, pbSendBuffer, byte_417888, 0x408);
    printf("pbSendBuffer is:\n");
    printf_buffer(pbSendBuffer, sizeof(pbSendBuffer));

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
        //printf("index is: 0x%x\n", index);
        //printf("bytes is: 0x%x\n", bytes);
        //memcpy(send_buffer+3, &index, 2);
        //memcpy(send_buffer+5, &bytes, 2);
        memcpy(send_buffer+4, &index, 1);
        memcpy(send_buffer+3, (void *)&index + 1, 1);
        memcpy(send_buffer+6, &bytes, 1);
        memcpy(send_buffer+5, (void *)&bytes + 1, 1);
        memcpy(send_buffer+7, pbSendBuffer+index, bytes);
        remaining -= max_load;

        printf("send_buffer is:\n");
        printf_buffer(send_buffer, sizeof(send_buffer));
        if (write_to_ukey(send_buffer, sizeof(send_buffer)) < 0) {
            printf("write_to_key() failed.\n");
            exit(1);
        }
    }
    char receive_buffer[0x41];
    int i;
    for (i = 0; i < 18; i++) {
        if (read_from_key(receive_buffer, sizeof(receive_buffer)) < 0) {
            printf("read_from_key() failed.\n");
            exit(1);
        }
        short index;
        short bytes;
        memcpy((void *)&index, receive_buffer+4, 1);
        memcpy((void *)&index+1, receive_buffer+3, 1);
        memcpy((void *)&bytes, receive_buffer+6, 1);
        memcpy((void *)&bytes+1, receive_buffer+5, 1);

        printf("index is: %x\n", index);
        printf("bytes is: %x\n", bytes);
        memcpy(pbSendBuffer+8+index, receive_buffer+7, bytes);
        printf("receive_buffer is:\n");
        printf_buffer(receive_buffer, sizeof(receive_buffer));
    }

    sub_401EE0(pbSendBuffer+8, pbSendBuffer+8, byte_417888, 0x400);
    printf("pbSendBuffer is:\n");
    printf_buffer(pbSendBuffer, sizeof(pbSendBuffer));

}

int main() {
    if (setup_ukey_context() != 0) {
        printf("setup_ukey_context() failed.\n");
        exit(1);
    }
    Dongle_Open();
    //Dongle_LEDControl();
    
    short fielid = 0x1;
    char inoutbuf[1020] = {
    0x22, 0x00, 0x00, 0x00, 0x00, 0xc1, 0x00, 0x00,   
    0x00, 0x22, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00,
    0x00, 0x07, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,   
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
    0xff, 0xff, 0xff, 0xff, 0xff, 0xff
    };
    Dongle_RunExeFile(fielid, inoutbuf, 1020);
    close_ukey_context();

    ///test_sub_403AF0();
    //test_sub_403C90();
    //test_sub_403CC0();
    //test_sub_401E70();
    //test_sub_4037F0_();
    return 0;
}

