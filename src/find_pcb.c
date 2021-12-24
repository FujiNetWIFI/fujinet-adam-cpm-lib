#include "fujicpm.h"

/**
 * @brief Find PCB
 * @return Pointer to PCB
 */
PCB* find_pcb(void)
{
  return (*(unsigned char*) (0xFEC0));
}
