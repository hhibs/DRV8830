/*
 * drv8830_drive.h
 *
 *  Created on: Apr 2, 2021
 *      Author: katyk
 */


#ifndef SRC_DRV8830_DRIVE_H_
#define SRC_DRV8830_DRIVE_H_

#include "stm32f4xx.h"
#include "Legacy/stm32_hal_legacy.h"
#include <stddef.h>

#define DRV8830_SLAVE_ADDRESS 0x65

#define DRV8830_CONTROL_REG 0x00
#define DRV8830_FAULT_REG   0x01
#define DRV8830_STANBY   	0b00
#define DRV8830_REVERSE  	0b01
#define DRV8830_FORWARD  	0b10
#define DRV8830_BRAKE    	0b11
#define DRV8830_SPEED_MIN 	0x06
#define DRV8830_SPEED_1  	0x06
#define DRV8830_SPEED_2 	0x07
#define DRV8830_SPEED_3 	0x08
#define DRV8830_SPEED_4 	0x09
#define DRV8830_SPEED_5 	0x0A
#define DRV8830_SPEED_6 	0x0B
#define DRV8830_SPEED_7 	0x0C
#define DRV8830_SPEED_8 	0x0D
#define DRV8830_SPEED_9 	0x0E
#define DRV8830_SPEED_10 	0x0F
#define DRV8830_SPEED_11 	0x10
#define DRV8830_SPEED_12 	0x11
#define DRV8830_SPEED_13 	0x12
#define DRV8830_SPEED_14 0x13
#define DRV8830_SPEED_15 0x14
#define DRV8830_SPEED_16 0x15
#define DRV8830_SPEED_17 0x16
#define DRV8830_SPEED_18 0x17
#define DRV8830_SPEED_19 0x18
#define DRV8830_SPEED_20 0x19
#define DRV8830_SPEED_21 0x1A
#define DRV8830_SPEED_22 0x1B
#define DRV8830_SPEED_23 0x1C
#define DRV8830_SPEED_24 0x1D
#define DRV8830_SPEED_25 0x1E
#define DRV8830_SPEED_26 0x1F
#define DRV8830_SPEED_27 0x20
#define DRV8830_SPEED_28 0x21
#define DRV8830_SPEED_29 0x22
#define DRV8830_SPEED_30 0x23
#define DRV8830_SPEED_31 0x24
#define DRV8830_SPEED_32 0x25
#define DRV8830_SPEED_33 0x26
#define DRV8830_SPEED_34 0x27
#define DRV8830_SPEED_35 0x28
#define DRV8830_SPEED_36 0x29
#define DRV8830_SPEED_37 0x2A
#define DRV8830_SPEED_38 0x2B
#define DRV8830_SPEED_39 0x2C
#define DRV8830_SPEED_40 0x2D
#define DRV8830_SPEED_41 0x2E
#define DRV8830_SPEED_42 0x2F
#define DRV8830_SPEED_43 0x30
#define DRV8830_SPEED_44 0x31
#define DRV8830_SPEED_45 0x32
#define DRV8830_SPEED_46 0x33
#define DRV8830_SPEED_47 0x34
#define DRV8830_SPEED_48 0x35
#define DRV8830_SPEED_49 0x36
#define DRV8830_SPEED_50 0x37
#define DRV8830_SPEED_51 0x38
#define DRV8830_SPEED_52 0x39
#define DRV8830_SPEED_53 0x3A
#define DRV8830_SPEED_54 0x3B
#define DRV8830_SPEED_55 0x3C
#define DRV8830_SPEED_56 0x3D
#define DRV8830_SPEED_57 0x3E
#define DRV8830_SPEED_58 0x3F
#define DRV8830_SPEED_MAX 0x3F


HAL_StatusTypeDef drv8830_write( I2C_HandleTypeDef * hi2c , uint8_t slave_address , uint8_t register_address , uint8_t writeData);

HAL_StatusTypeDef drv8830_read(I2C_HandleTypeDef * hi2c, uint8_t slave_address, uint8_t register_address, uint16_t size, uint8_t *readData);

HAL_StatusTypeDef drv8830_init(I2C_HandleTypeDef * hi2c , uint8_t slave_address );

HAL_StatusTypeDef drv8830_drive(I2C_HandleTypeDef * hi2c , uint8_t slave_address , uint8_t speed , uint8_t direction );


/* Test code */

/*
HAL_StatusTypeDef result =  drv8830_init( &hi2c1 , 0x60 <<1 );

if( result == HAL_OK)
{
	  result = drv8830_drive(&hi2c1 , 0x60<<1 , DRV8830_SPEED_46 ,  DRV8830_STANBY );

	  result = drv8830_drive(&hi2c1 , 0x60<<1 , DRV8830_SPEED_46 ,  DRV8830_FORWARD );

	  result = drv8830_drive(&hi2c1 , 0x60<<1 , DRV8830_SPEED_46 ,  DRV8830_STANBY );

	  result = drv8830_drive(&hi2c1 , 0x60<<1 , DRV8830_SPEED_46 ,  DRV8830_REVERSE );
}
*/



#endif /* SRC_DRV8830_DRIVE_H_ */

