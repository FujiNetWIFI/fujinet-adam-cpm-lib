#include <string.h>
#include "fujicpm.h"

/**
 * @brief get Device Slots
 * @param ac Pointer to destination DeviceSlots buffer
 */
void fuji_get_device_slots(DeviceSlot *d)
{
  char c=0xf2;
  
  fuji_write(&c,1);
  fuji_read(response);

  memcpy(d,response,304);
}
