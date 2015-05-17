#include <stdint.h>
#include <stdio.h>
#include <string.h>
#include "ida_defs.h"

//typedef int32_t _DWORD;
//typedef int16_t __int16;
//typedef uint8_t _BYTE;

void printf_buffer(char *buffer, int size);

int sub_402580(int a1, int a2);
int sub_4037F0(void *, void *, void *, int, void*);
int sub_402FD0(void *, unsigned int, void *, int); //@1
int sub_403680(void *, int); //@1
signed int sub_403640(void *, void *, int); //@1
void sub_4034D0(void *, void *, void *, int, void *, int); //@1

/*
 * length of a1, a2, a3 is 0x84
 */
void sub_4038F0(void *a1, void *a2, void *a3, int a4); //@2

/*
 * length of a1, a2, a3 and a4 is 0x84
 */
int sub_403480(void *a1, void *a2, void *a3, void *a4, int a5); //@2

/*
 * not sure about argument type of a1 and its length.
 * length of a2, a3 is 0x84.
 */
void sub_403110(void *a1, void *a2, void *a3, int a4);

int sub_403440(void *a1, void *a2, int a3, void * a4, int a5);

int sub_403910(void *a1, int a2); //@2
int sub_403680(void *a1, int a2); //@2

/* a1 and a2 points to the same address.
 */
int sub_4036A0(void * a1, void * a2, int a3, void *a4, int a5);

/* 
 * length of a1 maybe 0x2, not sure
 */
unsigned int sub_403930(void *a1, int a2, unsigned int a3);

int sub_4032B0(void *a1, void *a2, void *a3, int a4, void *a5, int a6);

int sub_4037D0(unsigned int a1);

int sub_403910(void *a1, int a2);

unsigned int sub_4031D0(void *a1, void *a2, unsigned int a3, int a4);

void sub_4039B0(void *a1, void *a2, unsigned int a3);

int sub_403730(void * a1, void *a2, int a3, void *a4, int a5);

int sub_4030B0(void* a1, void * a2, void *a3, int a4);

int sub_403240(void *a1, void *a2, unsigned int a3, int a4);

int sub_403040(void *, int a2, void *a3, int a4); //@1
