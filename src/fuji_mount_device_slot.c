#include "fujicpm.h"

/**
 * Mount Device Slot 
 */
void fuji_mount_device_slot(unsigned char d, unsigned char m)
{
  char c[3]={0xF8,0x00,0x00};

  c[1]=d;
  c[2]=m;

  fuji_write(c,3);
}
