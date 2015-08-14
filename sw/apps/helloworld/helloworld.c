
#include "string_lib.h"
#include "utils.h"
#include "uart.h"

int main()
{
  uart_set_cfg(0, 0);

  uart_send("Hello!\n", 7);

  uart_wait_tx_done();

  qprintf("Hello World!!!!!\n", 0, 0, 0, 0);

  return 0;
}