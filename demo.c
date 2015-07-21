#include <stdio.h>
#include "utils.h"
#include "utpm_api.h"

int main() {
    
    short pcrnum = 0x7;
    char digest[] =  {
    0x22, 0x00, 0x00, 0x00, 0x00, 0xc1, 0x00, 0x00,   
    0x00, 0x22, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00,
    0x00, 0x07, 0xff, 0xff};
    if (utpm_pcr_extend(pcrnum, digest) != 0) {
        printf("pcr extend failed.\n");
        return -1;
    }
    printf("pcr_extend: pcr %d is: \n", pcrnum);
    printf_buffer(digest, 20);

    char digest2[20];
    if (utpm_pcr_read(pcrnum, digest2) != 0) {
        printf("pcr read failed.\n");
        return -1;
    }

    printf("pcr_read: pcr %d is: \n", pcrnum);
    printf_buffer(digest2, 20);
    return 0;
}

