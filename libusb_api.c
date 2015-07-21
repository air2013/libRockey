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
