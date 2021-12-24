#include <string.h>
#include "fujicpm.h"

/**
 * Set the SSID
 * 
 * @param ssid the desired SSID
 * @param password the key, if none, then blank
 */
void fuji_set_ssid(const char *ssid, const char *password)
{
  NetConfig nc;
  char ss[97]={0xFB};

  strcpy(nc.ssid,ssid);
  strcpy(nc.password,password);
  
  memcpy(&ss[1],nc,sizeof(NetConfig));

  fuji_write(nc,sizeof(nc));
}
