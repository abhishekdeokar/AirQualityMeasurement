/**
 ******************************************************************************
 * @file    i2c_mk64f.h
 * @author
 * @version
 * @date
 * @brief   Atmosphere API - Rapid IoT I2C header file
 ******************************************************************************
 * @attention
 *
 *
 * Redistribution and use in source and binary forms, with or without modification,
 * are permitted provided that the following conditions are met:
 *   1. Redistributions of source code must retain the above copyright notice,
 *      this list of conditions and the following disclaimer.
 *   2. Redistributions in binary form must reproduce the above copyright notice,
 *      this list of conditions and the following disclaimer in the documentation
 *      and/or other materials provided with the distribution.
 *   3. Neither the name of STMicroelectronics nor the names of its contributors
 *      may be used to endorse or promote products derived from this software
 *      without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE ARE
 * DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE
 * FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL
 * DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION) HOWEVER
 * CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT, STRICT LIABILITY,
 * OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING IN ANY WAY OUT OF THE USE
 * OF THIS SOFTWARE, EVEN IF ADVISED OF THE POSSIBILITY OF SUCH DAMAGE.
 *
 ******************************************************************************
 */

 /* Define to prevent recursive inclusion ------------------------------------*/
#ifndef __ATMO_MK64F_I2C__H
#define __ATMO_MK64F_I2C__H


/* Includes ------------------------------------------------------------------*/
#include <stdint.h>
#include <stdbool.h>
#include <stddef.h>

#include "../atmo/core.h"
#include "i2c.h"

#ifdef __cplusplus
	extern "C"{
#endif

/* Exported Constants --------------------------------------------------------*/

/* Exported Macros -----------------------------------------------------------*/

/* Exported Types ------------------------------------------------------------*/

ATMO_Status_t ATMO_MK64F_I2C_AddDriverInstance(ATMO_DriverInstanceHandle_t *instanceNumber);

ATMO_I2C_Status_t ATMO_MK64F_I2C_Init(ATMO_DriverInstanceData_t *instance);

ATMO_I2C_Status_t ATMO_MK64F_I2C_DeInit(ATMO_DriverInstanceData_t *instance);

ATMO_I2C_Status_t ATMO_MK64F_I2C_SetConfiguration( ATMO_DriverInstanceData_t *instance, const ATMO_I2C_Peripheral_t* config );

ATMO_I2C_Status_t ATMO_MK64F_I2C_GetConfiguration( ATMO_DriverInstanceData_t *instance, ATMO_I2C_Peripheral_t* config );

ATMO_I2C_Status_t ATMO_MK64F_I2C_MasterRegisterCallback( ATMO_DriverInstanceData_t *instance, ATMO_I2C_Master_Callback_t cbFunc );

ATMO_I2C_Status_t ATMO_MK64F_I2C_SlaveRegisterCallback( ATMO_DriverInstanceData_t *instance, ATMO_I2C_Slave_Callback_t cbFunc );

ATMO_I2C_Status_t ATMO_MK64F_I2C_MasterWrite( ATMO_DriverInstanceData_t *instance, uint16_t slaveAddress, const uint8_t* cmdBytes,
		uint16_t numCmdBytes, const uint8_t* writeBytes, uint16_t numWriteBytes, uint16_t timeout_ms );

ATMO_I2C_Status_t ATMO_MK64F_I2C_MasterWriteNonBlocking( ATMO_DriverInstanceData_t *instance, uint16_t slaveAddress, const uint8_t* cmdBytes,
		uint16_t numCmdBytes, const uint8_t* writeBytes, uint16_t numWriteBytes );

ATMO_I2C_Status_t ATMO_MK64F_I2C_MasterRead( ATMO_DriverInstanceData_t *instance, uint16_t slaveAddress, const uint8_t* cmdBytes, uint16_t numCmdBytes,
										uint8_t* readBytes, uint16_t numReadBytes, uint16_t timeout_ms );

ATMO_I2C_Status_t ATMO_MK64F_I2C_MasterReadNonBlocking( ATMO_DriverInstanceData_t *instance, uint16_t slaveAddress, const uint8_t* cmdBytes,
		uint16_t numCmdBytes, uint8_t* readBytes, uint16_t numReadBytes );

ATMO_I2C_Status_t ATMO_MK64F_I2C_MasterGetStatus( ATMO_DriverInstanceData_t *instance, uint16_t* bytesRemaining );

ATMO_I2C_Status_t ATMO_MK64F_I2C_SlaveWaitForReceive( ATMO_DriverInstanceData_t *instance );


#ifdef __cplusplus
}
#endif

#endif /* __ATMO_MK64F_I2C__H */
