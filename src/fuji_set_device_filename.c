#include <string.h>
#include "fujicpm.h"

/**
 * @brief set device filename for device slot
 * @param ds DeviceSlot #
 * @param fn Filename
 */
void fuji_set_device_filename(unsigned char ds, char *fn)
{
  char c[258]={0xE2,0x00};
  
  c[1] = ds;

  strcpy(&c[2],fn);

  fuji_write(c,sizeof(c));
}
