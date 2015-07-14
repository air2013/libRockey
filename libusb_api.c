#include "libusb_api.h"

int setup_ukey_context();
int close_ukey_context();

int write_to_ukey(char *buffer, int size);
int read_from_key(char *buffer, int size);

void printdev(libusb_device *dev);

libusb_context *ctx = NULL;
libusb_device_handle *ukey_handle = NULL;

int setup_ukey_context() {
    libusb_device **devs;
    ssize_t cnt;
    int i;
    if (libusb_init(&ctx) < 0) {
        printf("Libusb init error.\n");
        return -1;
    }
    libusb_set_debug(ctx, 3);
    ukey_handle = libusb_open_device_with_vid_pid(ctx, 2414, 521);
    if (ukey_handle == NULL) {
        printf("Can't find ROCKEY-ARM.\n");
        return -1;
    }
    if (libusb_kernel_driver_active(ukey_handle, 0) == 1) {
        if (libusb_detach_kernel_driver(ukey_handle, 0) == 0) {
            printf("Kernel driver detached.\n");
        }
    }
    return 0;
}

int close_ukey_context() {
    libusb_close(ukey_handle);
    libusb_exit(ctx);
    return 0;
}


int write_to_ukey(char *buffer, int size) {
    int transferred;
    if (libusb_claim_interface(ukey_handle, 0) != 0) {
        printf("Failed to claim interface 0.\n");
        return -1;
    }
    if (libusb_interrupt_transfer(ukey_handle, 0x2, buffer, size, &transferred, 10000) < 0) {
        printf("libusb_interrupt_transfer() failed.\n");
        return -1;
    }
    if (libusb_release_interface(ukey_handle, 0) != 0) {
        printf("Failed to release interface 0.\n");
        return -1;
    }
    //printf("Transferred 0x%x\n", transferred);
    return transferred;
}

int read_from_key(char *buffer, int size) {
    int transferred;
    if (libusb_claim_interface(ukey_handle, 0) != 0) {
        printf("Failed to claim interface 0.\n");
        return -1;
    }
    if (libusb_interrupt_transfer(ukey_handle, 0x81, buffer, size, &transferred, 10000) < 0) {
        printf("libusb_interrupt_transfer() failed.\n");
        return -1;
    }
    if (libusb_release_interface(ukey_handle, 0) != 0) {
        printf("Failed to release interface 0.\n");
        return -1;
    }

    //printf("Transferred 0x%x\n", transferred);
    return transferred;
}

int test() {
    char send_buffer1[] = {
0x02,0x00,0x88,0x00,0x00,0x00,0x3A,0x00,0x10,0x00,0x00,0x00,0x00,0x80,0x00,0x41,0x1C,0x86,0x74,0xB8,0x83,0xF4,0xAD,0xD5,0x96,0x2E,0x88,0x28,0x15,0x19,0xA7,0xD2,0x15,0x31,0xDA,0xAE,0xE3,0x34,0x1A,0x0A,0xEF,0x21,0x12,0x3B,0x6D,0x02,0xD4,0x2F,0xD8,0x7F,0xA3,0x17,0xD2,0x33,0x90,0xB0,0x3C,0xFB,0xB5,0x0A,0xE0,0x47,0x5F,0x5D,0x6C
};
    char send_buffer2[] = {
0x02,0x00,0x88,0x00,0x3A,0x00,0x3A,0xFA,0x9D,0xAE,0xF3,0x74,0x93,0xCC,0x40,0x3D,0xA5,0x44,0xB0,0x0B,0xD8,0x8F,0xB0,0x10,0x6E,0xFC,0xA2,0x54,0xC5,0x99,0xC1,0xF2,0x42,0x44,0xD3,0x5A,0x34,0xCD,0xFE,0x45,0x7B,0xBC,0x6E,0x0E,0xB2,0xA5,0xC6,0x74,0x55,0xC4,0x42,0x3C,0xF5,0xA0,0x44,0x5E,0x0C,0xDA,0xFF,0xE9,0xAB,0x59,0x39,0xC2,0x84
};
    char send_buffer3[] = {
0x02,0x00,0x88,0x00,0x74,0x00,0x14,0xD0,0x08,0xB9,0x88,0x5F,0x45,0xFF,0x96,0xAF,0x8A,0x6B,0x9F,0x1A,0x56,0xE5,0x82,0x26,0x5D,0x61,0xCC,0x54,0xC5,0x99,0xC1,0xF2,0x42,0x44,0xD3,0x5A,0x34,0xCD,0xFE,0x45,0x7B,0xBC,0x6E,0x0E,0xB2,0xA5,0xC6,0x74,0x55,0xC4,0x42,0x3C,0xF5,0xA0,0x44,0x5E,0x0C,0xDA,0xFF,0xE9,0xAB,0x59,0x39,0xC2,0x84
};

     int ret;

    if (setup_ukey_context() != 0) {
        printf("setup_ukey_context() failed.\n");
        exit(1);
    }
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
    close_ukey_context();
}
