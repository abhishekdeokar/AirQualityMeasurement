/*
 * tsl2572.h
 *
 *  Created on: 25 sept. 2017
 *      Author: frq05060
 */

#ifndef TSL2572_H_
#define TSL2572_H_

#include "../app_src/atmosphere_platform.h"

//enum tsl2572_status {
//    sensor_success = 0,
//    sensor_I2C_error = 1,
//    sensor_invalid_ID = 2,
//    sensor_wrong_parameter = 3
//};

typedef struct _tsl2572_IoFunc_t
{
  uint8_t   (*I2C_Read)(uint8_t *writeBuf, uint32_t writeSize, uint8_t *readBuf, uint32_t readSize);
  uint8_t   (*I2C_Write)(uint8_t *writeBuf, uint32_t writeSize);
  void         (*WaitMsec)(uint32_t millisec);
} tsl2572_IoFunc_t, *ptsl2572_IoFunc_t;

/**
 * struct tsl2x7x_default_settings - power on defaults unless
 *                                   overridden by platform data.
 *  @als_time:              ALS Integration time - multiple of 50mS
 *  @als_gain:              Index into the ALS gain table.
 *  @als_gain_level:        ALS gain level (When asserted, the 1× and 8× ALS gain (AGAIN) modes are scaled by 0.16)
 *  @wait_time:             Time between PRX and ALS cycles
 *                          in 2.7 periods
 *  @wlong:                 When asserted, the wait cycles are increased by a factor 12× from that programmed in the WTIME register
 *  @interrupts_enable:     Enable/Disable als interrupts
 *  @persistence:           H/W Filters, Number of 'out of limits'
 *                          ADC readings ALS.
 *  @als_thresh_low:        CH0 'low' count to trigger interrupt.
 *  @als_thresh_high:       CH0 'high' count to trigger interrupt.
 *  @als_enable:            This bit actives the two channel ADC
 *  @wait_enable:           This bit activates the wait feature.
 *  @power_on:              This bit activates the internal oscillator to permit the timers and ADC channels to operate
 *  @glass_attenuation:     scaling factor referred to as glass attenuation (GA) can be used to compensate for attenuation
 */
struct tsl2x7x_settings {
    uint8_t als_time;
    uint8_t als_gain;
    bool als_gain_level;
    uint8_t wait_time;
    bool wlong;
    bool  interrupts_enable;
    uint8_t  persistence;
    uint16_t als_thresh_low;
    uint16_t als_thresh_high;
    bool als_enable;
    bool wait_enable;
    bool power_on;
    float glass_attenuation;
};

/****************************************************************************
 * Function Prototypes
 ****************************************************************************/
void TSL2572_Init_Driver(tsl2572_IoFunc_t* pIoFunc);
uint8_t TSL2572_Init_HW(void);
uint8_t TSL2572_ReadAmbientLight(float *lux);
uint8_t TSL2572_SetALSThresholds(uint16_t ALS_interrupt_Low_Threshold, uint16_t ALS_interrupt_High_Threshold);
uint8_t TSL2572_GetALSThresholds(uint16_t *ALS_interrupt_Low_Threshold, uint16_t *ALS_interrupt_High_Threshold);
uint8_t TSL2572_EnableALSInterrupts(bool AIEN);
uint8_t TSL2572_ClearALSInterrupt(void);
uint8_t TSL2572_SetALSPersistence(uint8_t APERS);
uint8_t TSL2572_Enable_ALS(bool AEN);
uint8_t TSL2572_Power_ON(bool PON);
uint8_t TSL2572_Enable_Wait(bool WEN);
uint8_t TSL2572_ReadAllRegisters(uint8_t *RegData);
uint8_t TSL2572_ReadCH0(uint8_t *RegData);
uint8_t TSL2572_SetWaitTime(uint8_t WTIME, bool WLONG);
uint8_t TSL2572_SetALSGain(uint8_t AGAIN, bool AGL);
uint8_t TSL2572_SetALSTime(uint8_t ATIME);

#endif /* TSL2572_H_ */
