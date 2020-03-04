
#ifndef ATCA_I2C_HAL_H_
#define ATCA_I2C_HAL_H_

/** \defgroup hal_ Hardware abstraction layer (hal_)
 *
 * \brief
 * These methods define the hardware abstraction layer for communicating with a CryptoAuth device
 * using I2C driver of ASF.
 *
   @{ */

ATCA_STATUS hal_i2c_init(void *hal, ATCAIfaceCfg *cfg);
ATCA_STATUS hal_i2c_post_init(ATCAIface iface);
ATCA_STATUS hal_i2c_send(ATCAIface iface, uint8_t *txdata, int txlength);
ATCA_STATUS hal_i2c_receive(ATCAIface iface, uint8_t *rxdata, uint16_t *rxlength);
ATCA_STATUS hal_i2c_wake(ATCAIface iface);
ATCA_STATUS hal_i2c_idle(ATCAIface iface);
ATCA_STATUS hal_i2c_sleep(ATCAIface iface);
ATCA_STATUS hal_i2c_release(void *hal_data);


/** @} */
#endif /* ATCA_I2C_HAL_H_ */
