#include <string.h>
#include "fujicpm.h"

/**
 * @brief get Host Slots
 * @param hs Pointer to hostslots buffer
 */
void fuji_get_host_slots(char *h)
{
  char c=0xf4;
  
  fuji_write(&c,1);
  fuji_read(response);

  memcpy(h,response,256);
}
