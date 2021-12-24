#include "fujicpm.h"

/**
 * Close directory 
 */
void fuji_close_directory(void)
{
  fuji_write("\xF5",1);
}
