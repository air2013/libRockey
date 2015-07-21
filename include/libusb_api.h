#ifndef _LIBUSB_API_H
#define _LIBUSB_API_H

#include <libusb-1.0/libusb.h>
#include <stdlib.h>
#include <stdio.h>
#include "utils.h"

int setup_ukey_context();
int close_ukey_context();

int write_to_ukey(char *buffer, int size);
int read_from_key(char *buffer, int size);

#endif



