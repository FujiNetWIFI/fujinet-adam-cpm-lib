#include <string.h>
#include "fujicpm.h"

/**
 * @brief make New Disk/DDP
 * @param hs Desired host slot (0-7) 
 * @param ds Desired device slot (0-3)
 * @param numBlocks Number of blocks (0-2^32)
 * @param full path on host slot.
 */
void fuji_new_disk(unsigned char hs, unsigned char ds, unsigned long numBlocks, const char *p)
{
  char nd[263]={0xE7,0x00,0x00,0x00,0x00,0x00,0x00};
  char *c = &nd[3];
  unsigned long *l = (unsigned long *)c;
  
  nd[1]=hs;
  nd[2]=ds;
  *l=numBlocks;
  strcpy(&nd[7],p);

  fuji_write(nd,sizeof(nd));
}
