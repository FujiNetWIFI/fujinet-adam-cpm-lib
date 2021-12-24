#include "fujicpm.h"

/**
 * Read next directory entry
 */
char *fuji_read_directory_entry(unsigned char l, unsigned char a)
{
  unsigned char c[3]={0xF6,0x00,0x00};

  c[1]=l;
  c[2]=a;
  
  fuji_write(c,3);
  fuji_read(response);

  return response;
}
