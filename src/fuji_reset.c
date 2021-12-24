#include "fujicpm.h"

/**
 * Reset FujiNet (presumably to boot into CONFIG)
 */
void fuji_reset(void)
{
  char c=0xFF;

  fuji_write(&c,1);
}
