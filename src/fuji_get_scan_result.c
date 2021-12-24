#include "fujicpm.h"

/**
 * Return scan result
 *
 * @param Scan result # < returned by fuji_scan_network()
 * @return pointer to response buffer containing scan result
 */
SSIDInfo *fuji_get_scan_result(char i)
{
  char sr[2]={0xFC,0x00};

  sr[1]=i;
  
  fuji_write(sr,2);
  fuji_read(response);

  return (SSIDInfo *)&response[0];
}
