#include "fujicpm.h"

/**
 * Unmount Device Slot 
 */
void fuji_unmount_device_slot(unsigned char d)
{
  char m[2]={0xE9,0x00};

  m[1]=d;

  fuji_write(m,2);
}
