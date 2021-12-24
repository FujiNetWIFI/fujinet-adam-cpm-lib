#include <string.h>
#include "fujicpm.h"

/**
 * Open Directory
 */
void fuji_open_directory(unsigned char hs, char *p, char *f)
{
  char od[256]={0xF7,0x00};

  od[1]=hs;
  
  strcpy(&od[2],p);

  fuji_write(od,sizeof(od));
}
