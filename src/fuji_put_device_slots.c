#include <string.h>
#include "fujicpm.h"

/**
 * @brief put Device Slots
 * @param ac Pointer to source DeviceSlots buffer
 */
void fuji_put_device_slots(DeviceSlot *d)
{
  char c[305]={0xf1};

  memcpy(&c[1],d,304);  
  fuji_write(c,305);
}
