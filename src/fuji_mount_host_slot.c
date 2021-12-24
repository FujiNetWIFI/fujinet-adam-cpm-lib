#include "fujicpm.h"

/**
 * Mount Host Slot 
 */
void fuji_mount_host_slot(unsigned char h)
{
  char m[2]={0xF9,0x00};

  m[1]=h;

  fuji_write(m,2);
}
