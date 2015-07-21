#ifndef _DONGLE_API_H
#define _DONGLE_API_H

int Dongle_Open();

//int Dongle_LEDControl(int flag);
int Dongle_LEDBlink();

int Dongle_RunExeFile(short fielid, char *inoutbuf, short len);

int utpm_pcr_extend(short pcrnum, char *digest);

int utpm_pcr_read(short pcrnum, char *digest);

#endif
