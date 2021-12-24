#include "fujicpm.h"

/**
 * Get Wifi Status
 */
unsigned char fuji_get_wifi_status(void)
{
  fuji_write("\xFA",1);
  fuji_read(response);
  return response[0];
}
