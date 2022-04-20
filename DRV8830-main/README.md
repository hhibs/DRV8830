//** Test code for Drv8830
//	 result =  drv8830_init( &hi2c1 , 0x60 <<1 );
//
//	 if( result == HAL_OK)
//	 {
//		  drv8830_drive(&hi2c1 , 0x60<<1 , DRV8830_SPEED_46 ,  DRV8830_STANBY );
//
//		  drv8830_drive(&hi2c1 , 0x60<<1 , DRV8830_SPEED_46 ,  DRV8830_FORWARD );
//
//		  drv8830_drive(&hi2c1 , 0x60<<1 , DRV8830_SPEED_46 ,  DRV8830_STANBY );
//
//		  drv8830_drive(&hi2c1 , 0x60<<1 , DRV8830_SPEED_46 ,  DRV8830_REVERSE );
//	 }