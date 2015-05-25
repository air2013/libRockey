#include "utils.h"

char byte_4110C8[] = {
    0x01, 0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02,
    0x01, 0x02, 0x02, 0x02, 0x02, 0x02, 0x02, 0x01
};
char byte_4110D8[] = {
    0x38, 0x30, 0x28, 0x20, 0x18, 0x10, 0x08, 0x00,
    0x39, 0x31, 0x29, 0x21, 0x19, 0x11, 0x09, 0x01,
    0x3A, 0x32, 0x2A, 0x22, 0x1A, 0x12, 0x0A, 0x02,
    0x3B, 0x33, 0x2B, 0x23, 0x3E, 0x36, 0x2E, 0x26,
    0x1E, 0x16, 0x0E, 0x06, 0x3D, 0x35, 0x2D, 0x25,
    0x1D, 0x15, 0x0D, 0x05, 0x3C, 0x34, 0x2C, 0x24,
    0x1C, 0x14, 0x0C, 0x04, 0x1B, 0x13, 0x0B, 0x03
};
char byte_411110[] = {
    0x0D, 0x10, 0x0A, 0x17, 0x00, 0x04, 0x02, 0x1B,
    0x0E, 0x05, 0x14, 0x09, 0x16, 0x12, 0x0B, 0x03,
    0x19, 0x07, 0x0F, 0x06, 0x1A, 0x13, 0x0C, 0x01, 
    0x28, 0x33, 0x1E, 0x24, 0x2E, 0x36, 0x1D, 0x27,
    0x32, 0x2C, 0x20, 0x2F, 0x2B, 0x30, 0x26, 0x37,
    0x21, 0x34, 0x2D, 0x29, 0x31, 0x23, 0x1C, 0x1F,
    0x39, 0x31, 0x29, 0x21, 0x19, 0x11, 0x09, 0x01,
    0x3B, 0x33, 0x2B, 0x23, 0x1B, 0x13, 0x0B, 0x03,
    0x3D, 0x35, 0x2D, 0x25, 0x1D, 0x15, 0x0D, 0x05,
    0x3F, 0x37, 0x2F, 0x27, 0x1F, 0x17, 0x0F, 0x07,
    0x38, 0x30, 0x28, 0x20, 0x18, 0x10, 0x08, 0x00,
    0x3A, 0x32, 0x2A, 0x22, 0x1A, 0x12, 0x0A, 0x02,
    0x3C, 0x34, 0x2C, 0x24, 0x1C, 0x14, 0x0C, 0x04,
    0x3E, 0x36, 0x2E, 0x26, 0x1E, 0x16, 0x0E, 0x06,
    0x27, 0x07, 0x2F, 0x0F, 0x37, 0x17, 0x3F, 0x1F,
    0x26, 0x06, 0x2E, 0x0E, 0x36, 0x16, 0x3E, 0x1E,
    0x25, 0x05, 0x2D, 0x0D, 0x35, 0x15, 0x3D, 0x1D,
    0x24, 0x04, 0x2C, 0x0C, 0x34, 0x14, 0x3C, 0x1C,
    0x23, 0x03, 0x2B, 0x0B, 0x33, 0x13, 0x3B, 0x1B,
    0x22, 0x02, 0x2A, 0x0A, 0x32, 0x12, 0x3A, 0x1A,
    0x21, 0x01, 0x29, 0x09, 0x31, 0x11, 0x39, 0x19,
    0x20, 0x00, 0x28, 0x08, 0x30, 0x10, 0x38, 0x18,
    0x3F, 0x20, 0x21, 0x22, 0x23, 0x24, 0x23, 0x24,
    0x25, 0x26, 0x27, 0x28, 0x27, 0x28, 0x29, 0x2A,
    0x2B, 0x2C, 0x2B, 0x2C, 0x2D, 0x2E, 0x2F, 0x30,
    0x2F, 0x30, 0x31, 0x32, 0x33, 0x34, 0x33, 0x34,
    0x35, 0x36, 0x37, 0x38, 0x37, 0x38, 0x39, 0x3A,
    0x3B, 0x3C, 0x3B, 0x3C, 0x3D, 0x3E, 0x3F, 0x20,
    0x0F, 0x06, 0x13, 0x14, 0x1C, 0x0B, 0x1B, 0x10,
    0x00, 0x0E, 0x16, 0x19, 0x04, 0x11, 0x1E, 0x09,
    0x01, 0x07, 0x17, 0x0D, 0x1F, 0x1A, 0x02, 0x08,
    0x12, 0x0C, 0x1D, 0x05, 0x15, 0x0A, 0x03, 0x18,
    0x0E, 0x04, 0x03, 0x0F, 0x02, 0x0D, 0x05, 0x03,
    0x0D, 0x0E, 0x06, 0x09, 0x0B, 0x02, 0x00, 0x05,
    0x04, 0x01, 0x0A, 0x0C, 0x0F, 0x06, 0x09, 0x0A,
    0x01, 0x08, 0x0C, 0x07, 0x08, 0x0B, 0x07, 0x00,
    0x00, 0x0F, 0x0A, 0x05, 0x0E, 0x04, 0x09, 0x0A,
    0x07, 0x08, 0x0C, 0x03, 0x0D, 0x01, 0x03, 0x06,
    0x0F, 0x0C, 0x06, 0x0B, 0x02, 0x09, 0x05, 0x00,
    0x04, 0x02, 0x0B, 0x0E, 0x01, 0x07, 0x08, 0x0D,
    0x0F, 0x00, 0x09, 0x05, 0x06, 0x0A, 0x0C, 0x09,
    0x08, 0x07, 0x02, 0x0C, 0x03, 0x0D, 0x05, 0x02,
    0x01, 0x0E, 0x07, 0x08, 0x0B, 0x04, 0x00, 0x03,
    0x0E, 0x0B, 0x0D, 0x06, 0x04, 0x01, 0x0A, 0x0F,
    0x03, 0x0D, 0x0C, 0x0B, 0x0F, 0x03, 0x06, 0x00,
    0x04, 0x0A, 0x01, 0x07, 0x08, 0x04, 0x0B, 0x0E,
    0x0D, 0x08, 0x00, 0x06, 0x02, 0x0F, 0x09, 0x05,
    0x07, 0x01, 0x0A, 0x0C, 0x0E, 0x02, 0x05, 0x09,
    0x0A, 0x0D, 0x01, 0x0B, 0x06, 0x08, 0x0B, 0x05,
    0x09, 0x04, 0x0C, 0x02, 0x0F, 0x03, 0x02, 0x0E,
    0x00, 0x06, 0x0D, 0x01, 0x03, 0x0F, 0x04, 0x0A,
    0x0E, 0x09, 0x07, 0x0C, 0x05, 0x00, 0x08, 0x07,
    0x0D, 0x01, 0x02, 0x04, 0x03, 0x06, 0x0C, 0x0B,
    0x00, 0x0D, 0x05, 0x0E, 0x06, 0x08, 0x0F, 0x02,
    0x07, 0x0A, 0x08, 0x0F, 0x04, 0x09, 0x0B, 0x05,
    0x09, 0x00, 0x0E, 0x03, 0x0A, 0x07, 0x01, 0x0C,
    0x07, 0x0A, 0x01, 0x0F, 0x00, 0x0C, 0x0B, 0x05,
    0x0E, 0x09, 0x08, 0x03, 0x09, 0x07, 0x04, 0x08,
    0x0D, 0x06, 0x02, 0x01, 0x06, 0x0B, 0x0C, 0x02,
    0x03, 0x00, 0x05, 0x0E, 0x0A, 0x0D, 0x0F, 0x04,
    0x0D, 0x03, 0x04, 0x09, 0x06, 0x0A, 0x01, 0x0C,
    0x0B, 0x00, 0x02, 0x05, 0x00, 0x0D, 0x0E, 0x02,
    0x08, 0x0F, 0x07, 0x04, 0x0F, 0x01, 0x0A, 0x07,
    0x05, 0x06, 0x0C, 0x0B, 0x03, 0x08, 0x09, 0x0E,
    0x02, 0x04, 0x08, 0x0F, 0x07, 0x0A, 0x0D, 0x06,
    0x04, 0x01, 0x03, 0x0C, 0x0B, 0x07, 0x0E, 0x00,
    0x0C, 0x02, 0x05, 0x09, 0x0A, 0x0D, 0x00, 0x03,
    0x01, 0x0B, 0x0F, 0x05, 0x06, 0x08, 0x09, 0x0E,
    0x0E, 0x0B, 0x05, 0x06, 0x04, 0x01, 0x03, 0x0A,
    0x02, 0x0C, 0x0F, 0x00, 0x0D, 0x02, 0x08, 0x05,
    0x0B, 0x08, 0x00, 0x0F, 0x07, 0x0E, 0x09, 0x04,
    0x0C, 0x07, 0x0A, 0x09, 0x01, 0x0D, 0x06, 0x03,
    0x0C, 0x09, 0x00, 0x07, 0x09, 0x02, 0x0E, 0x01,
    0x0A, 0x0F, 0x03, 0x04, 0x06, 0x0C, 0x05, 0x0B,
    0x01, 0x0E, 0x0D, 0x00, 0x02, 0x08, 0x07, 0x0D,
    0x0F, 0x05, 0x04, 0x0A, 0x08, 0x03, 0x0B, 0x06,
    0x0A, 0x04, 0x06, 0x0B, 0x07, 0x09, 0x00, 0x06,
    0x04, 0x02, 0x0D, 0x01, 0x09, 0x0F, 0x03, 0x08,
    0x0F, 0x03, 0x01, 0x0E, 0x0C, 0x05, 0x0B, 0x00,
    0x02, 0x0C, 0x0E, 0x07, 0x05, 0x0A, 0x08, 0x0D,
    0x04, 0x01, 0x03, 0x0A, 0x0F, 0x0C, 0x05, 0x00,
    0x02, 0x0B, 0x09, 0x06, 0x08, 0x07, 0x06, 0x09,
    0x0B, 0x04, 0x0C, 0x0F, 0x00, 0x03, 0x0A, 0x05,
    0x0E, 0x0D, 0x07, 0x08, 0x0D, 0x0E, 0x01, 0x02,
    0x0D, 0x06, 0x0E, 0x09, 0x04, 0x01, 0x02, 0x0E,
    0x0B, 0x0D, 0x05, 0x00, 0x01, 0x0A, 0x08, 0x03,
    0x00, 0x0B, 0x03, 0x05, 0x09, 0x04, 0x0F, 0x02,
    0x07, 0x08, 0x0C, 0x0F, 0x0A, 0x07, 0x06, 0x0C,
    0x0D, 0x07, 0x0A, 0x00, 0x06, 0x09, 0x05, 0x0F,
    0x08, 0x04, 0x03, 0x0A, 0x0B, 0x0E, 0x0C, 0x05,
    0x02, 0x0B, 0x09, 0x06, 0x0F, 0x0C, 0x00, 0x03,
    0x04, 0x01, 0x0E, 0x0D, 0x01, 0x02, 0x07, 0x08,
    0x01, 0x02, 0x0C, 0x0F, 0x0A, 0x04, 0x00, 0x03,
    0x0D, 0x0E, 0x06, 0x09, 0x07, 0x08, 0x09, 0x06,
    0x0F, 0x01, 0x05, 0x0C, 0x03, 0x0A, 0x0E, 0x05,
    0x08, 0x07, 0x0B, 0x00, 0x04, 0x0D, 0x02, 0x0B
};
char byte_411410[] = {
    0x80, 0x40, 0x20, 0x10, 0x08, 0x04, 0x02, 0x01,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x40, 0x90, 0x41, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x40, 0x90, 0x41, 0x00, 0x01, 0x01, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x10, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00,
    0x02, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};

char byte_417E80[] = {
    0x00, 0x04, 0x00, 0x00,

    0xEE, 0x51, 0x24, 0xDD, 0x2D, 0xF5, 0xE2, 0xD9,
    0x24, 0xA7, 0x17, 0x72, 0x02, 0xF9, 0xD3, 0x69,
    0x99, 0x3A, 0xCF, 0xC9, 0x95, 0xDD, 0x80, 0x93,
    0x0B, 0xF4, 0x9A, 0x1C, 0x38, 0x39, 0x1D, 0x27,
    0xFA, 0x73, 0x99, 0xBB, 0x9F, 0xF6, 0x0F, 0xB6,
    0x34, 0x66, 0x07, 0x01, 0xCA, 0xA2, 0xA9, 0xBE,
    0x5E, 0x17, 0x74, 0xED, 0x18, 0xBF, 0x63, 0x99,
    0x8C, 0x12, 0x65, 0x31, 0xA1, 0x62, 0x0C, 0x62,
    0xBF, 0x21, 0x02, 0x14, 0x54, 0x5E, 0x2B, 0x9C,
    0xE4, 0x79, 0x3F, 0xFB, 0xA2, 0x76, 0x28, 0x17,
    0x3E, 0xEF, 0xE3, 0x6A, 0x0F, 0x4D, 0x7C, 0x16,
    0x71, 0x90, 0x76, 0x17, 0x25, 0x87, 0xAD, 0x0D,
    0xED, 0x78, 0x3A, 0x5C, 0xEE, 0x38, 0x3E, 0x03,
    0x91, 0x01, 0xC3, 0xD8, 0x61, 0x3D, 0x39, 0x3B,
    0x69, 0xB2, 0x28, 0x57, 0xDB, 0x32, 0x32, 0xF9,
    0xB4, 0x1D, 0xB7, 0x10, 0x1F, 0x8B, 0x50, 0x63,

    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
    0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x01
};


//char byte_417FE8; // werid dude, may or may not be important.
//char byte_417FE8[768]; // werid dude, may or may not be important.
//
//char byte_4182E8[56]; // filled by sub_403B40()
//char byte_418320[64]; //filled by sub_403AF0()
//
char *byte_411140 = &byte_411110[48];
char *byte_411180 = &byte_411110[112];
char *byte_4111C0 = &byte_411110[176];
char *byte_4111F0 = &byte_411110[224];
char *byte_411210 = &byte_411110[256];


char byte_417888[8];

char byte_417F98[32];

char byte_417FB8[48];

char byte_417FE8[888];
char *byte_4182E8 = &byte_417FE8[768];
char *byte_418320 = &byte_417FE8[768 + 56];

char byte_41836C[128];

char *byte_41838C = &byte_41836C[32];
char *byte_4183AC = &byte_41836C[64];
char *byte_4183CC = &byte_41836C[96];

int sub_402580(int a1, int a2) {
  char v6; // [sp+10h]
  char v7; // [sp+13h]

  char v8; // [sp+14h], length = 0x40, a random string.

  int v9; // [sp+54h]

  __int16 v10; // [sp+58h]
  __int16 v11; // [sp+5Ah]
  int v12; // [sp+5Ch]

  char v13; // [sp+60h], length = 0x40, duplicate of v8.

  int v14; // [sp+A0h]
  int v15; // [sp+A4h] 
  char v16; // [sp+A8h]
  __int16 v17; // [sp+46Ch]

  /* v12 is 0x80 bytes long
   */
  sub_4037F0((void *)&v12, (void *)&v6, (void *)&v12, 128, 0);
  /*
   * TODO
   */
  return 0;
}



int sub_402FD0(void * a1, unsigned int a2, void * a3, int a4)
{
  unsigned int v4; // ecx@1
  unsigned int v5; // ebp@1
  int result; // eax@1
  void * v7; // edx@2
  int v8; // esi@4
  unsigned int v9; // ecx@4
  int v10; // ebx@6

  v4 = a2;
  v5 = 0;
  result = a4 - 1;
  if ( a2 )
  {
    v7 = a1;
    while ( result >= 0 )
    {
      v8 = 0;
      v9 = 0;
      do
      {
        if ( v9 >= 0x20 )
          break;
        v10 = *(_BYTE *)(result + a3) << v9;
        v9 += 8;
        v8 |= v10;
        --result;
      }
      while ( result >= 0 );
      v4 = a2;
      //printf("v8 is : %x\n", v8);
      *(_DWORD *)v7 = v8;
      ++v5;
      v7 += 4;
      if ( v5 >= a2 )
        return result;
    }
    if ( v5 < v4 )
    {
      result = 0;
      memset((void *)(a1 + 4 * v5), 0, 4 * (v4 - v5));
    }
  }
  return result;
}

/*
 * return the index of the last non-zero value of a1.
 */
int sub_403680(void * a1, int a2)
{
  int v2; // eax@1
  void* v3; // ecx@2

  v2 = a2 - 1;
  if ( a2 - 1 >= 0 )
  {
    v3 = a1 + 4 * v2;
    do
    {
      if ( *(_DWORD *)v3 )
        break;
      --v2;
      v3 -= 4;
    }
    while ( v2 >= 0 );
  }
  return v2 + 1;
}

signed int sub_403640(void * a1, void * a2, int a3)
{
  int v3; // esi@1
  void* v4; // eax@2
  unsigned int v5; // ecx@3
  signed int result; // eax@6

  v3 = a3 - 1;
  if ( a3 - 1 < 0 )
  {
LABEL_6:
    result = 0;
  }
  else
  {
    v4 = a2 + 4 * v3;
    while ( 1 )
    {
      v5 = *(_DWORD *)(a1 - a2 + v4);
      if ( v5 > *(_DWORD *)v4 )
        return 1;
      if ( v5 < *(_DWORD *)v4 )
        break;
      --v3;
      v4 -= 4;
      if ( v3 < 0 )
        goto LABEL_6;
    }
    result = -1;
  }
  return result;
}


/*
 * result and a2 points to the same address.
 * this function copys a4 bytes from a3 to a2
 * return the adress of a2
 */
void sub_4038F0(void *result, void *a2, void *a3, int a4) {
  int v4; // edx@1

  v4 = a4;
  if ( a4 )
  {
    result = a2;
    do
    {
      *(_DWORD *)result = *(_DWORD *)(a3 - a2 + result);
      result += 4;
      --v4;
    }
    while ( v4 );
  }
  //return result;

}

/* set the first a2 * 4 bytes of a1 to zero
 */
int sub_403910(void *a1, int a2) {
  int result; // eax@2

  if ( a2 )
  {
    result = 0;
    memset(a1, 0, 4 * a2);
  }
  return result;
}

/* a1 is 8 bytes long
 */
unsigned int sub_403930(void *a1, int a2, unsigned int a3) {
  int v3; // edx@1
  int v4; // ecx@1
  int v5; // esi@1
  unsigned int v6; // eax@1
  int v7; // edx@3
  unsigned int result; // eax@5

  v3 = (unsigned __int16)a3 * (unsigned __int16)a2;
  //printf("v3: a is %x\n", (unsigned __int16)a3);
  //printf("v3: b is %x\n", (unsigned __int16)a2);
  //printf("v3 is %x\n", v3);
  v4 = HIWORD(a2) * (unsigned __int16)a3;
  //printf("v4: a is %x\n", HIWORD(a2));
  //printf("v4: b is %x\n", (unsigned __int16)a3);
  //printf("v4 is %x\n", v4);
  v5 = HIWORD(a2) * (a3 >> 16);
  //printf("v5: a is %x\n", HIWORD(a2));
  //printf("v5: b is %x\n", (a3 >> 16));
  //printf("v5 is %x\n", v5);
  v6 = v4 + (a3 >> 16) * (unsigned __int16)a2;
  //printf("v6 is %x\n", v6);
  *(_DWORD *)a1 = v3;
  //printf("*(_DWORD *)a1 is %x\n", *(_DWORD *)a1);
  *(_DWORD *)(a1 + 4) = v5;
  if ( v6 < v4 ) {
    *(_DWORD *)(a1 + 4) = v5 + 65536;
    //printf("*(_DWORD *)(a1 + 4) is %x\n", *(_DWORD *)(a1 + 4));
  }
  v7 = (v6 << 16) + v3;
  *(_DWORD *)a1 = v7;
  //printf("*(_DWORD *)a1 is %x\n", *(_DWORD *)a1);
  if ( v7 < v6 << 16 ) {
    ++*(_DWORD *)(a1 + 4);
    //printf("*(_DWORD *)(a1 + 4) is %x\n", *(_DWORD *)(a1 + 4));
  }
  result = v6 >> 16;
  *(_DWORD *)(a1 + 4) += result;
  //printf("*(_DWORD *)(a1 + 4) is %x\n", *(_DWORD *)(a1 + 4));
  return result;

}

int sub_4036A0(void *a1, void *a2, int a3, void *a4, int a5) {
  int result; // eax@2
  int v6; // edi@3
  void * v7; // esi@4
  int v8; // ebx@4
  void * v9; // ebx@6
  int v10; // eax@6
  bool v11; // cf@6
  int v12; // eax@6
  int v13; // ecx@6
  int v14; // edi@6
  //int v15; // [sp+0h] [bp-8h]@6
  //int v16; // [sp+4h] [bp-4h]@8
  int v15[2];
  int i; // [sp+Ch] [bp+4h]@4

  if ( a3 )
  {
    v6 = 0;
    if ( a5 )
    {
      v7 = a1;
      v8 = a2 - a1;
      for ( i = a2 - a1; ; v8 = i )
      {
        v9 = v7 + v8;
        /* v15 is 8 bytes long
         * a3 is a integer
         * why v9 + (a4 - a2), it doesn't make sense. TODO
         */
        //printf("\nargument is: _ %x %x\n", a3, *(_DWORD *)(v9 + (a4 - a2)));
       // printf("\na3 is: \n");
        //printf_buffer((void *)&a3, sizeof(a3));
        sub_403930(v15, a3, *(_DWORD *)(v9 + (a4 - a2)));
        //printf("\nv15 is:\n");
        //printf_buffer((void *)v15, sizeof(v15));
        v10 = v6 + *(_DWORD *)v9;
        *(_DWORD *)v7 = v10;
        v11 = v10 < (unsigned int)v6;
        v12 = v15[0];
        v13 = v15[0] + *(_DWORD *)v7;
        *(_DWORD *)v7 = v13;
        v14 = v11;
        if ( v13 < (unsigned int)v12 )
          v14 = v11 + 1;
        v6 = v15[1] + v14;
        v7 += 4;
        --a5;
        if ( !a5 )
          break;
      }
    }
    result = v6;
  }
  else
  {
    result = 0;
  }
  return result;

}

/* need to be testified, especially about the type of v6.
 * Should it be "void *" or "int *"?
 * TODO
 */
void sub_403110(void *a1, void *a2, void *a3, int a4) {
  int v4; // edi@1
  int v5; // ebp@1
  void * v6; // esi@2
  void *v7; // edi@2
  int v9; // [sp+10h] [bp-110h]@1
  char v10[264]; // [sp+18h] [bp-108h]@1

  v4 = 2 * a4;
  sub_403910(v10, 2 * a4);
  //printf("\nv10 is: \n ");
  //printf_buffer(v10, sizeof(v10));
  v9 = sub_403680(a2, a4);
  //printf("\nv9 is: %x\n", v9);
  v5 = sub_403680(a3, a4);
  //printf("\nv5 is: %x\n", v5);
  if ( v9 )
  {
    v6 = v10;
    v7 = &v10[4 * v5];
    do
    {
      //int res = sub_4036A0(v6, v6, *(_DWORD *)((a2 - (void *)v10) + v6), a3, v5);
      //printf("return from sub_4036A0: %x\n", res);
      *(_DWORD *)v7 += sub_4036A0(v6, v6, *(_DWORD *)((a2 - (void *)v10) + v6), a3, v5);
      v6 += 4;
      v7 += 4;
      --v9;
    }
    while ( v9 );
    v4 = 2 * a4;
  }
  //printf("\nv10 is:\n");
  //printf_buffer(v10, sizeof(v10));
  sub_4038F0(v10, a1, v10, v4);
  //printf("\na1 is: \n");
  //printf_buffer(a1, sizeof(v10));
}

/* return the number of digits of a1
 */
int sub_4037D0(unsigned int a1) {
  unsigned int v1; // ecx@1
  unsigned int result; // eax@1

  v1 = a1;
  result = 0;
  do
  {
    if ( !v1 )
      break;
    ++result;
    v1 >>= 1;
  }
  while ( result < 0x20 );
  return result;

}

unsigned sub_4031D0(void *a1, void *a2, unsigned int a3, int a4) {
  unsigned int v4; // edi@1
  unsigned int result; // eax@2
  void * v6; // esi@4
  int v7; // ebx@4
  unsigned int v8; // edx@5
  char v9; // [sp+0h] [bp-4h]@3
  int v10; // [sp+10h] [bp+Ch]@4

  v4 = a3;
  if ( a3 < 0x20 )
  {
    v9 = 32 - a3;
    result = 0;
    if ( a4 )
    {
      v6 = a1;
      v10 = a4;
      v7 = a2 - a1;
      do
      {
        v8 = *(_DWORD *)(v7 + v6);
        *(_DWORD *)v6 = result | (*(_DWORD *)(v7 + v6) << v4);
        if ( v4 )
          result = v8 >> v9;
        else
          result = 0;
        v6 += 4;
        --v10;
      }
      while ( v10 );
    }
  }
  else
  {
    result = 0;
  }
  return result;

}

void sub_4039B0(void *a1, void *a2, unsigned int a3){
  //printf("\nEnter sub_4039B0()...\n");
  int v3; // ecx@1
  unsigned int v4; // ebp@1
  unsigned int v5; // eax@2
  unsigned int v6; // ebx@3
  int v7; // eax@4
  unsigned int v8; // edi@4
  int v9; // ebx@4
  unsigned int v10; // ecx@4
  unsigned int v11; // ebp@6
  unsigned int v12; // eax@14
  int v13; // esi@16
  unsigned int v14; // edx@16
  int v15; // ecx@16
  int v16; // ecx@18
  int v17; // ebp@20
  unsigned int v18; // edx@22
  int v19; // ecx@28
  void* result; // eax@28
  unsigned int v21; // [sp+20h] [bp+8h]@2

  v3 = *(_DWORD *)a2;
  v4 = *(_DWORD *)(a2 + 4);
  //printf("v3 is: 0x%x\n", v3);
  //printf("v4 is: 0x%x\n", v4);
  //printf("HIWORD(a3) is: 0x%x\n", HIWORD(a3));
  if ( HIWORD(a3) == 0xffff )
  {
    v5 = v4 >> 16;
    v21 = v4 >> 16;
  }
  else
  {
    v6 = HIWORD(a3) + 1;
    v5 = v4 / v6;
    v21 = v4 / v6;
  }
  //printf("v5 is: 0x%x\n", v5);
  //printf("v21 is: 0x%x\n", v21);
  v7 = (unsigned __int16)v5;
  v8 = a3 >> 16;
  v9 = v7 * (unsigned __int16)a3 << 16;
  v10 = v3 - v9;
  if ( v10 > -1 - v9 )
    --v4;
  
  v11 = v4 - (v8 * v7 + (v7 * (unsigned int)(unsigned __int16)a3 >> 16));

  //printf("v7 is: 0x%x\n", v7);
  //printf("v8 is: 0x%x\n", v8);
  //printf("v9 is: 0x%x\n", v9);
  //printf("v10 is: 0x%x\n", v10);
  //printf("v11 is: 0x%x\n", v11);
  while ( v11 > v8 || (v11 == v8 && v10 >= a3 << 16 ))
  {
    v10 -= a3 << 16;
    if ( v10 > -1 - (a3 << 16) )
      --v11;
    v11 -= v8;
    ++v21;
  }
  if ( HIWORD(a3) == 0xffff )
    v12 = v11;
  else
    v12 = ((v11 << 16) + (v10 >> 16)) / (v8 + 1);
  v13 = (unsigned __int16)v12 * (unsigned __int16)a3;
  v14 = v8 * (unsigned __int16)v12;
  v15 = v10 - v13;
  if ( v15 > (unsigned int)(-1 - v13) )
    --v11;
  v16 = v15 - (v14 << 16);
  if ( v16 > -1 - (v14 << 16) )
    --v11;
  v17 = v11 - (v14 >> 16);
  while ( 1 )
  {
    if ( v17 )
    {
      v18 = a3;
      goto LABEL_25;
    }
    v18 = a3;
    if ( v16 < a3 )
      break;
LABEL_25:
    v16 -= v18;
    if ( v16 > -1 - v18 )
      --v17;
    ++v12;
  }
  v19 = (unsigned __int16)v12 + ((unsigned __int16)v21 << 16);
  //printf("v19 is 0x%x\n", v19);
  result = a1;
  *(_DWORD *)a1 = v19;
  //printf("*(DWORD *)a1 is: %x\n", *(_DWORD *)a1);
  //printf("Leave sub_4039B0()...\n\n");
}

int sub_403730(void * a1, void *a2, int a3, void *a4, int a5) {
  int result; // eax@2
  int v6; // edi@3
  void * v7; // esi@4
  int v8; // ebx@4
  void * v9; // ebx@6
  int v10; // eax@6
  int v11; // ecx@6
  int v12; // edi@6
  bool v13; // cf@6
  bool v14; // zf@6
  //int v15; // [sp+0h] [bp-8h]@6
  //int v16; // [sp+4h] [bp-4h]@8
  int v15[2];
  int i; // [sp+Ch] [bp+4h]@4
  //printf("Enter sub_403730()...\n");
  if ( a3 )
  {
    v6 = 0;
    if ( a5 )
    {
      v7 = a1;
      v8 = a2 - a1;
      for ( i = a2 - a1; ; v8 = i )
      {
        v9 = v7 + v8;
        //printf("a3 is 0x%x\n", a3);
        //printf("*(_DWORD *)(v9 + (a4 - a2)))) is 0x%x\n", *(_DWORD *)(v9 + (a4 - a2)));
        sub_403930(v15, a3, *(_DWORD *)(v9 + (a4 - a2)));
        //printf("v15 is 0x%x\n", v15[0]);
        v10 = *(_DWORD *)v9 - v6;
        *(_DWORD *)v7 = v10;
        //printf("*(_DWORD *)v7 is 0x%x\n", *(_DWORD *)v7);
        v11 = *(_DWORD *)v7 - v15[0];
        //printf("v11 is 0x%x\n", v11);
        v12 = -1 - v6 < (unsigned int)v10;
        //printf("v12 is 0x%x\n", v12);
        v13 = v11 < (unsigned int)(-1 - v15[0]);
        //printf("v13 is 0x%x\n", v13);
        v14 = v11 == -1 - v15[0];
        *(_DWORD *)v7 = v11;
        //printf("*(_DWORD *)v7 is 0x%x\n", *(_DWORD *)v7);
        if ( !(v13 | v14) )
          ++v12;
        v6 = v15[1] + v12;
        //printf("v6 is 0x%x\n", v6);
        v7 += 4;
        --a5;
        if ( !a5 )
          break;
      }
    }
    result = v6;
  }
  else
  {
    result = 0;
  }

  //printf("Leave sub_403730()...\n");
  return result;

}

int sub_403240(void *a1, void *a2, unsigned int a3, int a4) {
  unsigned int v4; // edi@1
  int result; // eax@2
  void * v6; // esi@4
  int v7; // ebx@4
  int v8; // edx@5
  char v9; // [sp+0h] [bp-4h]@3
  int v10; // [sp+10h] [bp+Ch]@4

  v4 = a3;
  if ( a3 < 0x20 )
  {
    v9 = 32 - a3;
    result = 0;
    if ( a4 - 1 >= 0 )
    {
      v6 = a1 + 4 * (a4 - 1);
      v7 = a2 - a1;
      v10 = a4;
      do
      {
        v8 = *(_DWORD *)(v7 + v6);
        *(_DWORD *)v6 = result | (*(_DWORD *)(v7 + v6) >> v4);
        if ( v4 )
          result = v8 << v9;
        else
          result = 0;
        v6 -= 4;
        --v10;
      }
      while ( v10 );
    }
  }
  else
  {
    result = 0;
  }
  return result;

}

int sub_4030B0(void* a1, void* a2, void *a3, int a4) {
  int result; // eax@1
  void * v5; // edx@2
  int v6; // ebx@2
  int v7; // ecx@3
  int v8; // ecx@4

  result = 0;
  if ( a4 )
  {
    v5 = a3;
    v6 = a4;
    do
    {
      v7 = *(_DWORD *)(a2 - a3 + v5) - result;
      if ( v7 <= (unsigned int)(-1 - result) )
      {
        v8 = v7 - *(_DWORD *)v5;
        result = -1 - *(_DWORD *)v5 < (unsigned int)v8;
      }
      else
      {
        v8 = -1 - *(_DWORD *)v5;
      }
      *(_DWORD *)(a1 - a3 + v5) = v8;
      v5 += 4;
      --v6;
    }
    while ( v6 );
  }
  return result;

}

/* the length of a5 is a6
 * in this case, a6 is 0x20 * 4
 */
int sub_4032B0(void *a1, void *a2, void *a3, int a4, void *a5, int a6) {
  //printf("Enter sub_4032B0()...\n\n");
  int result; // eax@1
  int v7; // ebx@1
  unsigned int v8; // eax@2
  unsigned int v9; // ebp@2
  int v10; // esi@2
  void * v11; // edi@3
  int v12; // eax@3
  int *v13; // esi@3
  int i; // eax@7
  int v15; // eax@8
  int v16; // eax@11
  int v17; // [sp+8h] [bp-1A0h]@5
  int v18; // [sp+Ch] [bp-19Ch]@3
  int v19; // [sp+10h] [bp-198h]@2
  unsigned int v20; // [sp+14h] [bp-194h]@2
  //char v21; // [sp+18h] [bp-190h]@2
  char v21[0x84];
  //char v22[0x80] ???TODO
  int v22[0x43];
  //int v22[67]; // [sp+9Ch] [bp-10Ch]@2
  memset(v22, 0, sizeof(v22));
  //printf("a4 is 0x%x\n", a4);
  result = sub_403680(a5, a6);
  //printf("a5 is:\n");
  //printf_buffer(a5, a6 * 4);
  v7 = result;
  //printf("v7 is 0x%x\n", v7);
  if ( result )
  {
    //printf("*(_DWORD *)(a5 + 4 * result - 4)) is 0x%x\n", *(_DWORD *)(a5 + 4 * result - 4));
    v8 = sub_4037D0(*(_DWORD *)(a5 + 4 * result - 4));
    //printf("v8 is 0x%x\n", v8);
    v9 = 32 - v8;
    v20 = 32 - v8;
    sub_403910(v22, v7);
    //printf("a4 is 0x%x\n", a4);
    v22[a4] = sub_4031D0(v22, a3, v9, a4);
    //printf("v22[a4] is 0x%x\n", v22[a4]);
    sub_4031D0(v21, a5, v9, v7);
    //printf("v21 is: \n");
    //printf_buffer(v21, sizeof(v21));
    v19 = *(_DWORD *)(v21 + v7 * 4 - 4);
    //printf("v19 is: 0x%x\n", v19);
    sub_403910(a1, a4);
    v10 = a4 - v7;
    if ( a4 - v7 >= 0 )
    {
      v11 = &v22[v10];
      v12 = v10 + 1;
      v13 = &v22[a4];
      v18 = v12;
      do
      {

        //printf("v16 is: 0x%x\n", v16);
        if ( v19 == -1 )
          v17 = *v13;
        else{
          //printf("v19 + 1 is: 0x%x\n", v19+1);
          //printf("(int *)(v13 -1) is 0x%x\n", *(v13 -1));
          //printf("(int *)v13 is 0x%x\n", *v13);
          sub_4039B0((int *)&v17, (int *)(v13 - 1), v19 + 1);
          //printf("v17 is: 0x%x\n", v17);
        }
        //printf("*v11 is 0x%x\n", *(int *)v11);
        //printf("*v17 is 0x%x\n", v17);
        //printf("v21 is: \n");
        //printf_buffer(v21, sizeof(v21));
    
        for ( i = sub_403730(v11, v11, v17, v21, v7); ; i = sub_4030B0(v11, v11, v21, v7) )
        {

          //printf("i is: 0x%x\n", i);
          v15 = *v13 - i;
          *v13 = v15;
          if ( !v15 )
          {
            if ( sub_403640(v11, v21, v7) < 0 )
              break;
          }
          ++v17;
        }
        v16 = v18;
        //think about it TODO
        *(_DWORD *)(v11 + (a1 - (void *)v22)) = v17;
        --v13;
        v11 -= 4;
        v18 = v16 - 1;
      }
      while ( v16 != 1 );
    }
     //printf("v22 is: \n");
    //printf_buffer((void *)v22, sizeof(v22));
       
    sub_403910((void *)a2, a6);
    result = sub_403240(a2, v22, v20, v7);
  }

  //printf("Leave sub_4032B0()...\n");
  return result;

}

int sub_403440(void *a1, void *a2, int a3, void *a4, int a5) {
  //printf("Enter sub_403440...\n\n");
  // take a guess of the length of v6 TODO
  char v6[256]; // [sp+0h] [bp-108h]@1

  int res = sub_4032B0(&v6, a1, a2, a3, a4, a5);
  //printf("v6 is:\n");
  //printf_buffer(v6, sizeof(v6));
  //printf("Leave sub_403440...\n");
  return res;
}

int sub_403480(void *a1, void *a2, void *a3, void *a4, int a5) {
  //printf("Enter sub_403480...\n\n");
  char v6[264]; // [sp+4h] [bp-108h]@1
  memset(v6, 0, sizeof(v6));
  sub_403110(&v6, a2, a3, a5);
  int res = sub_403440(a1, &v6, 2 * a5, a4, a5);
  //printf("a1 is: \n");
  //printf_buffer(a1, 0x20);
  //printf("v6 is: \n");
  //printf_buffer(v6, sizeof(v6));
  //printf("Leave sub_403480()...\n");
  return res;

}

void  sub_4034D0(void *a1, void *a2, void *a3, int a4, void *a5, int a6) {
  //printf("\n\nEnter sub_4034D0...\n\n");
  int v6; // eax@1
  int v7; // ecx@1
  int v8; // ebp@1
  void * v9; // esi@2
  unsigned int v10; // esi@3
  signed int v11; // eax@3
  unsigned int v13; // [sp+10h] [bp-21Ch]@7
  void * v14; // [sp+14h] [bp-218h]@2
  int v15; // [sp+18h] [bp-214h]@1
  //int v16[0x21]
  int v16[33]; // [sp+1Ch] [bp-210h]@1
  char v17[0x84]; // [sp+A0h] [bp-18Ch]@1
  char v18[0x84]; // [sp+124h] [bp-108h]@1
  //TODO not sure.
  char v19[0x84]; // [sp+1A8h] [bp-84h]@1
   
  memset(v16, 0, sizeof(v16));
  memset(v17, 0, sizeof(v17));
  memset(v18, 0, sizeof(v18));
  memset(v19, 0, sizeof(v19));
  sub_4038F0(v17, v17, a2, a6);
  //printf("\nv17 is: \n");
  //printf_buffer(v17, sizeof(v17));
  sub_403480(v18, v17, a2, a5, a6);
  //printf("\nv18 is: \n");
  //printf_buffer(v18, sizeof(v18));
  sub_403480(v19, v18, a2, a5, a6);
  //printf("\nv19 is: \n");
  //printf_buffer(v19, sizeof(v19));
  sub_403910(v16, a6);
  v16[0] = 1;
  v6 = sub_403680(a3, a4);
  v7 = v6 - 1;
  v8 = v6 - 1;
  v15 = v6 - 1;
  if ( v6 - 1 >= 0 )
  {
    v9 = a3 + 4 * v8;
    v14 = a3 + 4 * v8;
    do
    {
      v10 = *(_DWORD *)v9;
      v11 = 32;
      if ( v8 != v7 || v10 & 0xC0000000 )
        goto LABEL_16;
      do
      {
        v10 *= 4;
        v11 -= 2;
      }
      while ( !(v10 & 0xC0000000) );
      if ( v11 )
      {
LABEL_16:
        v13 = (unsigned int)(v11 + 1) >> 1;
        do
        {
          sub_403480(v16, v16, v16, a5, a6);

          //printf("\n1. v16 is: \n");
          //printf_buffer((void *)v16, sizeof(v16));
          sub_403480(v16, v16, v16, a5, a6);

          //printf("\n2. v16 is: \n");
          //printf_buffer((void *)v16, sizeof(v16));
          if ( v10 >> 30 ) {
            //sub_403480(v16, v16, &v16[33 * (v10 >> 30)], a5, a6);
            sub_403480(v16, v16, v17, a5, a6);
            //printf("\n3. v16 is: \n");
            //printf_buffer((void *)v16, sizeof(v16));
          }
          v10 *= 4;
          --v13;
        }
        while ( v13 );
        v7 = v15;
      }
      --v8;
      v9 = v14 - 4;
      v14 -= 4;
    }
    while ( v8 >= 0 );
  }
  //printf("\nfinal v16 is: \n");
  //printf_buffer((void *)v16, sizeof(v16));
          
  sub_4038F0(a1, a1, v16, a6);

}

int sub_403040(void *a1, int a2, void *a3, int a4) {
  //printf("\n\nEnter sub_403040()...\n\n");
  unsigned int v4; // edx@1
  int result; // eax@1
  unsigned int v6; // esi@4
  unsigned int v7; // edi@4
  unsigned int v8; // ebx@6
  unsigned int *v9; // [sp+18h] [bp+8h]@2

  v4 = 0;
  result = a2 - 1;
  if ( a4 )
  {
    v9 = a3;
    while ( result >= 0 )
    {
      v6 = 0;
      v7 = *v9;
      do
      {
        if ( v6 >= 0x20 )
          break;
        v8 = v7 >> v6;
        --result;
        v6 += 8;
        *(_BYTE *)(result + a1 + 1) = v8;
      }
      while ( result >= 0 );
      ++v4;
      ++v9;
      if ( v4 >= a4 )
        goto LABEL_8;
    }
  }
  else
  {
LABEL_8:
    while ( result >= 0 )
      *(_BYTE *)(result-- + a1) = 0;
  }
  return result;

}

int sub_4037F0(void *a1, void *a2, void *a3, int a4, void *a5) {
  //printf("\n\nEnter sub_4037F0...\n\n");
  int v5; // esi@1
  int v6; // ebx@1
  signed int result; // eax@2
  int v8; // eax@3
  char v9[0x84]; // [sp+Ch] [bp-210h]@1
  char v10[0x84]; // [sp+90h] [bp-18Ch]@1
  char v11[0x84]; // [sp+114h] [bp-108h]@1
  char v12[0x84]; // [sp+198h] [bp-84h]@3
  memset(v9, 0, sizeof(v9));
  memset(v10, 0, sizeof(v10));
  memset(v11, 0, sizeof(v11));
  memset(v12, 0, sizeof(v12));
  sub_402FD0(v11, 0x21u, a3, a4);
  //printf("\nv11 is : \n");
  //printf_buffer(v11, sizeof(v11));
  sub_402FD0(v9, 0x21u, a5 + 4, 128);
  //printf("\nv9 is : \n");
  //printf_buffer(v9, sizeof(v9));
  sub_402FD0(v10, 0x21u, a5 + 132, 128);
  //printf("\nv10 is : \n");
  //printf_buffer(v10, sizeof(v10));
  v5 = sub_403680(v9, 33);
  //printf("v5 is %x\n", v5);
  v6 = sub_403680(v10, 33);
  //printf("v6 is %x\n", v6);
 
  if ( sub_403640(v11, v9, v5) < 0 )
  {
    sub_4034D0(v12, v11, v10, v6, v9, v5);
    //printf("v12 is: \n");
    //printf_buffer(v12, sizeof(v12));
    v8 = (unsigned int)(*(_DWORD *)a5 + 7) >> 3;
    *(_DWORD *)a2 = v8;
    sub_403040(a1, v8, (unsigned int *)&v12, v5);
    result = 0;
  }
  else
  {
    result = 1025;
  }
  return result;
}
/*
void sub_401E70(void *a1, void *a2, void *a3, int a4) {
  int v4; // ecx@1
  void *v5; // esi@2
  unsigned int v6; // edi@2
  int v7; // edx@3
  //int v8; // [sp+4h] [bp-8h]@1
  //int v9; // [sp+8h] [bp-4h]@1
  int v8[2];

  v4 = *(_DWORD *)(a3 + 4);
  v8[0] = *(_DWORD *)a3;
  v8[1] = v4;
  if ( a4 > 0 )
  {
    v5 = a2;
    v6 = (unsigned int)(a4 + 7) >> 3;
    do
    {
      sub_403CC0(a1 - a2 + v5, v5, v8, 1);
      v7 = *(_DWORD *)(v5 + 4);
      v8[0] = *(_DWORD *)v5;
      v8[1] = v7;
      sub_401E40(v8, a3, 8);
      v5 += 8;
      --v6;
    }
    while ( v6 );
  }

}
*/

signed int sub_403AF0(void *a1, signed int a2) {
  return ((unsigned __int8)byte_411410[a2 & 7] & *(_BYTE *)((a2 >> 3) + a1)) != 0;
}

signed int sub_403B40() {
  signed int v0; // eax@1
  int v1; // ecx@2
  __int16 v2; // kr00_2@4
  int v3; // esi@4
  int v4; // ebp@4
  int v5; // eax@4
  int v6; // edi@4
  int v7; // ecx@10
  __int16 v8; // kr02_2@10
  char *v9; // ebp@11
  char *v10; // ecx@16
  signed int result; // eax@16
  int v12; // edx@17
  int v13; // [sp+0h] [bp-Ch]@3
  char *v14; // [sp+4h] [bp-8h]@5
  //_UNKNOWN *v15; // [sp+8h] [bp-4h]@3
  char *v15;

  v0 = 0;
  do
  {
    v1 = (unsigned __int8)byte_4110D8[v0++];
    //printf("byte_418320[v1] is: 0x%x \n", byte_418320[v1]);
    //printf("v0 -1 is: 0x%x \n", v0-1);
    //byte_4182E7[v0] = byte_418320[v1];
    byte_4182E8[v0-1] = byte_418320[v1];
  }
  while ( v0 < 56 );
   v13 = 0;
  //v15 = &unk_417FE8;
  v15 = byte_417FE8;
  do
  {
    //v2 = dword_4182E8;
    v2 = *(DWORD *)byte_4182E8;
    v3 = 0;
    v4 = (unsigned __int8)byte_4110C8[v13];
    v5 = -(unsigned __int8)byte_4110C8[v13];
    v6 = 28 - (unsigned __int8)byte_4110C8[v13];
    if ( 28 - (unsigned __int8)byte_4110C8[v13] > 0 )
    {
      //v14 = (char *)&dword_4182E8 + v4;
      v14 = byte_4182E8 + v4;
      do
      {
        ++v3;
        //byte_4182E7[v3] = *v14++;
        byte_4182E8[v3-1] = *v14++;
      }
      while ( v3 < v6 );
    }
    if ( byte_4110C8[v13] == 2 )
      //word_418302 = v2;
      *(WORD *)&byte_4182E8[26] = v2;
    else
      //HIBYTE(word_418302) = v2;
      HIBYTE(*(WORD *)&byte_4182E8[26]) = v2;
    v7 = 28;
    //v8 = dword_418304;
    v8 = *(DWORD *)&byte_4182E8[28];
    if ( v5 + 56 > 28 )
    {
      //v9 = (char *)&dword_418304 + v4;
      v9 = &byte_4182E8[28] + v4;
      do
        //*((_BYTE *)&dword_4182E8 + v7++) = *v9++;
        *((_BYTE *)byte_4182E8 + v7++) = *v9++;
      while ( v7 < v5 + 56 );
    }
    if ( byte_4110C8[v13] == 2 )
      //word_41831E = v8;
      *(WORD *)&byte_4182E8[54] = v8;
    else
      //HIBYTE(word_41831E) = v8;
      HIBYTE(*(WORD *)&byte_4182E8[54]) = v8;
    v10 = (char *)v15;
    result = 0;
    do
    {
      v12 = (unsigned __int8)byte_411110[result++];
      //*((_BYTE *)v15 + result - 1) = *((_BYTE *)&dword_4182E8 + v12);
      *((_BYTE *)v15 + result - 1) = *((_BYTE *)byte_4182E8 + v12);
    }
    while ( result < 48 );
    ++v13;
    v15 = (char *)v15 + 48;
    //printf("(v10 + 48) is: 0x%p\n", (v10 + 48));
  }
  //while ( (signed int)(v10 + 48) < (signed int)&dword_4182E8 );
  while ( (signed int)(v10 + 48) < (signed int)byte_4182E8 );
  //printf("byte_417FE8 is:\n");
  //printf_buffer(byte_417FE8, 768);
  //printf("byte_4182E8 is:\n");
  //printf_buffer(byte_4182E8, 56);
  //printf("byte_418320 is:\n");
  //printf_buffer(byte_418320, 64);


  return result;

}

signed int sub_403C90(void *a1)  {
  signed int v1; // esi@1

  v1 = 0;
  do
  {
    byte_418320[v1] = sub_403AF0(a1, v1);
    ++v1;
  }
  while ( v1 < 64 );
  return sub_403B40();

}

unsigned char sub_403B20(void *a1, signed int a2) {
  unsigned char result; // al@1

  result = byte_411410[a2 & 7];
  *(_BYTE *)(a1 + (a2 >> 3)) |= result;
  return result;

}

char sub_403CC0(void *a1, void *a2, void *a3, int a4) {
  int v4; // edx@1
  int v5; // eax@1
  signed int v6; // edi@1
  char *v7; // ebp@3
  signed int v8; // eax@4
  int v9; // edx@6
  signed int v10; // edi@6
  unsigned __int8 v11; // cl@7
  signed int v12; // eax@7
  signed int v13; // esi@9
  unsigned __int8 v14; // cl@9
  char *v15; // eax@9
  signed int v16; // eax@12
  signed int v17; // eax@14
  signed int v18; // esi@15
  unsigned char result; // al@16
  int v20; // [sp+10h] [bp-10h]@3
  int v21[2]; // [sp+14h] [bp-Ch]@1
  int v22; // [sp+18h] [bp-8h]@1
  char v23; // [sp+1Ch] [bp-4h]@1
  signed int v24; // [sp+30h] [bp+10h]@3

  v21[0] = 0;
  v4 = *(_DWORD *)a3;
  v22 = 0;
  v23 = 0;
  v5 = *(_DWORD *)(a3 + 4);
  v21[0] = v4;
  v21[1] = v5;
  sub_403C90(&v21);

  v6 = 0;
  do
  {
    byte_41836C[v6] = sub_403AF0(a1, (unsigned __int8)byte_411140[v6]);
    ++v6;
  }
  while ( v6 < 64 );
  //printf("byte_41836C is:\n");
  //printf_buffer(byte_41836C, 128);
  v20 = 48 * a4;
  //v7 = (char *)&unk_417FE8 + 48 * (a4 != 1 ? 0xF : 0);
  v7 = byte_417FE8 + 48 * (a4 != 1 ? 0xF : 0);
  //printf("v7 - 417FE8 is :0x%x\n", v7 - byte_417FE8);
  v24 = 16;
  do
  {
    v8 = 0;
    //memcpy(byte_4183AC, &unk_41838C, 0x20u);
    memcpy(byte_4183AC, byte_41838C, 0x20u);
    memset(byte_4183CC, 0, 0x20u);
    //printf("byte_417FE8 is:\n");
    //printf_buffer(byte_417FE8, 888);
    //printf("byte_41836C is:\n");
    //printf_buffer(byte_41836C, 128);
    //printf("byte_4111C0 is:\n");
    //printf_buffer(byte_4111C0, 48);
    do
    {
      //printf("v7[v8] is 0x%x\n", v7[v8]); //417FE8
      //printf("byte_4111C0[v8] is 0x%x\n", byte_4111C0[v8]);
      //printf("byte_41836C[(unsigned __int8)byte_4111C0[v8]]) is 0x%x\n", byte_41836C[(unsigned __int8)byte_4111C0[v8]]);
      byte_417FB8[v8] = (v7[v8] != byte_41836C[(unsigned __int8)byte_4111C0[v8]]);
      ++v8;
    }
    while ( v8 < 48 );
    //printf("byte_417FB8 is:\n");
    //printf_buffer(byte_417FB8, 48);

    v9 = 0;
    v10 = 0;
    do
    {
      v11 = 0;
      v12 = 5;
      do
        v11 = *(&byte_417FB8[(unsigned __int8)(6 * v9)] + v12--) + 2 * v11;
      while ( v12 >= 0 );
      v13 = 4;
      v14 = *(&byte_411210[v11] + v10);
      v15 = &byte_417F98[(unsigned __int8)(4 * v9 + 3)];
      do
      {
        *v15 = v14 & 1;
        v14 >>= 1;
        --v15;
        --v13;
      }
      while ( v13 );
      v10 += 64;
      ++v9;
    }
    while ( v10 < 512 );
    v16 = 0;
    do
    {
      byte_4183CC[v16] = byte_41836C[v16] != byte_417F98[(unsigned __int8)byte_4111F0[v16]];
      ++v16;
    }
    while ( v16 < 32 );
    v17 = v24;
    memcpy(byte_41836C, byte_4183AC, 0x40u);
    v7 += v20;
    --v24;
  }
  while ( v17 != 1 );
  //memcpy(byte_4183AC, &unk_41838C, 0x20u);
  memcpy(byte_4183AC, byte_41838C, 0x20u);
  memcpy(byte_4183CC, byte_41836C, 0x20u);
  v18 = 0;
  *(_DWORD *)a2 = 0;
  *(_DWORD *)(a2 + 4) = 0;
  //printf("byte_41836C:\n");
  //printf_buffer(byte_41836C, 128);
  do
  {
    result = byte_4183AC[(unsigned __int8)byte_411180[v18]];
    if ( result ) {
      result = sub_403B20(a2, v18);
      //printf("result is: 0x%x\n", result);
      //printf("pbSendBuffer is:\n");
      //printf_buffer(a1, 0x8);

    }
    ++v18;
  }
  while ( v18 < 64 );
  return result;

}

void sub_401E40(void *a1, void *a2, int a3) {
  int v3; // esi@1
  void* v4; // eax@2

  v3 = a3;
  if ( a3 > 0 )
  {
    v4 = a1;
    do
    {
      *(_BYTE *)v4 ^= *(_BYTE *)(a2 - a1 + v4);
      ++v4;
      --v3;
    }
    while ( v3 );
  }

}

void sub_401E70(void *a1, void *a2, void *a3, int a4) {
  int v4; // ecx@1
  void* v5; // esi@2
  unsigned int v6; // edi@2
  int v7; // edx@3
  int v8[2]; // [sp+4h] [bp-8h]@1
  //int v9; // [sp+8h] [bp-4h]@1

  v4 = *(_DWORD *)(a3 + 4);
  v8[0] = *(_DWORD *)a3;
  v8[1] = v4;
  if ( a4 > 0 )
  {
    v5 = a2;
    v6 = (unsigned int)(a4 + 7) >> 3;
    do
    {
      sub_403CC0(a1 - a2 + v5, v5, v8, 1);
      v7 = *(_DWORD *)(v5 + 4);
      v8[0] = *(_DWORD *)v5;
      v8[1] = v7;
      sub_401E40(v8, a3, 8);
      v5 += 8;
      --v6;
    }
    while ( v6 );
  }

}

void printf_buffer(char * buffer, int size) {
    int i;
    for (i = 0; i < size; i++) {
        if (i > 0 && i % 4 == 0) printf("    ");
        if (i > 0 && i % 8 == 0) printf("\n");
        printf("%02x ", 0xff & buffer[i]);
    }
    printf("\n");
}




