#ifndef __FAT_driver_H
#define __FAT_driver_H

#include "ff.h"			/* FatFs declarations */
#include "diskio.h"		/* Include file for user provided disk functions */
#include "sdio_sdcard.h"

void FileSave_Stop(void);
void FileSave_TimerSet(u16 Speed);
void File_head(void);
void File_Save_Routing(void);

void FAT_Initial(void);
u8 mf_open(u8*path,u8 mode);
u8 mf_close(void);
u8 mf_read(u16 len);
u8 mf_write(u8*dat,u16 len);
u8 mf_opendir(u8* path);
u8 mf_lseek(u32 offset);

#endif

//------------------End of File----------------------------
