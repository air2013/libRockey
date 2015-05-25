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

int main() {
    if (setup_ukey_context() != 0) {
        printf("setup_ukey_context() failed.\n");
        exit(1);
    }
    Dongle_Open();
    Dongle_Open();
    Dongle_LEDControl();

    close_ukey_context();
    
    //test_sub_403AF0();
    //test_sub_403C90();
    //test_sub_403CC0();
    //test_sub_401E70();
    //test_sub_4037F0_();
    return 0;
}
