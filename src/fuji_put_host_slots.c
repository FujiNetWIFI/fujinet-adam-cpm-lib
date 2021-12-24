#include <string.h>
#include "fujicpm.h"

/**
 * @brief put Host Slots
 * @param hs Pointer to hostslots buffer
 */
void fuji_put_host_slots(char *h)
{
  char c[257]=0xf3;

  memcpy(&c[1],h,256);
  
  fuji_write(c,257);
}
