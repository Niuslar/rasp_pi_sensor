
/*
 * aht10_driver.h
 *
 * Created: 20/10/2021 
 *  Author: Niuslar
 */ 


#ifndef AHT10_DRIVER_H_
#define AHT10_DRIVER_H_

#include <unistd.h>				//Needed for I2C port
#include <fcntl.h>				//Needed for I2C port
#include <sys/ioctl.h>			//Needed for I2C port
#include <linux/i2c-dev.h>		//Needed for I2C port

//Sensor address
#define AHT10_ADDR 0x38

//commands 
#define AHT10_INIT_CMD     0xE1 
#define AHT10_SOFT_RESET   0xBA
#define AHT10_TRIG_MEAS    0xAC
#define AHT10_DAT1_CMD     0x33
#define AHT10_DAT2_CMD     0x00

//General 
#define HUMIDITY    0
#define TEMPERATURE 1

//APIs 
void aht10_init();
float read_temperature();
float read_humidity();
void delay(long ms);


#endif /* AHT10_DRIVER_H_ */
