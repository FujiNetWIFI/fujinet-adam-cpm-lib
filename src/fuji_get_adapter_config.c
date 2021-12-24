#include <string.h>
#include <stdlib.h>
#include "fujicpm.h"

/**
 * @brief get Adapter Information
 * @param ac Pointer to destination AdapterConfig struct
 */
void fuji_get_adapter_config(AdapterConfig *_ac)
{
  char c=0xE8;
  
  fuji_write(&c,1);
  csleep(10);
  fuji_read(response);

  memcpy(ac,response,sizeof(AdapterConfig));
}
