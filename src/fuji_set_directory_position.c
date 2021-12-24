#include <string.h>
#include "fujicpm.h"

/**
 * Set Directory Position
 */
void fuji_set_directory_position(DirectoryPosition pos)
{
  unsigned char c[3]={0xE4,0x00,0x00};

  memcpy(&c[1],&pos,sizeof(DirectoryPosition));

  fuji_write(c,3);
}
