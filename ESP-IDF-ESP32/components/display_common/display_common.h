#include "driver/spi_master.h"
void lcd_init(spi_device_handle_t spi);
void lcd_spi_pre_transfer_callback(spi_transaction_t *t);