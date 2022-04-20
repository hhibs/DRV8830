/*
 * drv8830_drive.c
 *
 *  Created on: Apr 2, 2021
 *      Author: katyk
 */

#include "drv8830_drive.h"


HAL_StatusTypeDef drv8830_write( I2C_HandleTypeDef * hi2c , uint8_t slave_address , uint8_t register_address , uint8_t writeData)
{
	HAL_StatusTypeDef status;

	uint8_t tmp = writeData;

	status =  HAL_I2C_Mem_Write( hi2c , slave_address , register_address , I2C_MEMADD_SIZE_8BIT , &tmp , 1 , 50 );

	return status;
}

HAL_StatusTypeDef drv8830_read(I2C_HandleTypeDef * hi2c, uint8_t slave_address, uint8_t register_address, uint16_t size, uint8_t *readData)
{
	HAL_StatusTypeDef status;

	status = HAL_I2C_Mem_Read( hi2c , slave_address , register_address , I2C_MEMADD_SIZE_8BIT , readData , size , 50 );

	return status;
}

HAL_StatusTypeDef drv8830_init(I2C_HandleTypeDef * hi2c , uint8_t slave_address )
{
	HAL_StatusTypeDef status;

	uint8_t tmp;

	/* Read Fault Register */
	status = drv8830_read( hi2c , slave_address, DRV8830_FAULT_REG , 1 , &tmp);

	return status;
}

HAL_StatusTypeDef drv8830_drive(I2C_HandleTypeDef * hi2c , uint8_t slave_address , uint8_t speed , uint8_t direction )
{
	HAL_StatusTypeDef status;

	uint8_t temp = speed << 2 | direction;

	status = drv8830_write( hi2c , slave_address , DRV8830_CONTROL_REG , temp);

	return status;
}
