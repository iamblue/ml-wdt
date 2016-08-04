#include <string.h>

#include "microlattice.h"

#include "jerry.h"

#include "hal.h"

DELCARE_HANDLER(__wdtInit)
{
  hal_wdt_config_t wdt_init;
  wdt_init.mode = HAL_WDT_MODE_RESET;
  wdt_init.seconds = (int)args_p[0].v_float32;
  hal_wdt_init(&wdt_init);
  return true;
}

DELCARE_HANDLER(__wdtEnable)
{
  hal_wdt_enable(HAL_WDT_ENABLE_MAGIC);
  return true;
}

DELCARE_HANDLER(__wdtFeed)
{
  hal_wdt_feed(HAL_WDT_FEED_MAGIC);
  return true;
}

void ml_wdt_init(void)
{
  REGISTER_HANDLER(__wdtInit);
  REGISTER_HANDLER(__wdtEnable);
  REGISTER_HANDLER(__wdtFeed);
}