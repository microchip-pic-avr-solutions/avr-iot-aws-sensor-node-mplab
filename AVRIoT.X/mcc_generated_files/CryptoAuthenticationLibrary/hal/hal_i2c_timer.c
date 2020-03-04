
#include "../../config/clock_config.h"
#include <util/delay.h>

/** \defgroup hal_ Hardware abstraction layer (hal_)
 *
 * \brief
 * These methods define the hardware abstraction layer for communicating with a CryptoAuth device
 *
   @{ */

/** \brief This function delays for a number of microseconds.
 *
 *         You can override this function if you like to do
 *         something else in your system while delaying.
 * \param[in] delay number of microseconds to delay
 */
void atca_delay_us(uint32_t delay)
{
	/*Here you can write your own delay routine*/
	while (delay) {
		_delay_us(1);
		delay--;
	}
}

/** \brief This function delays for a number of milliseconds.
 *
 *         You can override this function if you like to do
 *         something else in your system while delaying.
 * \param[in] delay number of milliseconds to delay
 */
void atca_delay_ms(uint32_t delay)
{
	/*Here you can write your own delay routine*/
	while (delay) {
		_delay_ms(1);
		delay--;
	}
}




/** @} */
