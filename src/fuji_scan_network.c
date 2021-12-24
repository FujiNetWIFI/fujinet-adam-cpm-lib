#include "fujicpm.h"

/**
 * Scan network for nearby SSIDs
 * 
 * @return number of SSIDs found
 */
unsigned char fuji_scan_network(void)
{
  fuji_write("\xFD",1);
  fuji_read(response);
  
  return response[0];
}
