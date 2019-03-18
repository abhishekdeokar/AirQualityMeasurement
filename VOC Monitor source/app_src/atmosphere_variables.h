
#ifndef ATMO_VARIABLES_H
#define ATMO_VARIABLES_H

#ifdef __cplusplus
	extern "C"{
#endif

#define ATMO_VARIABLE(ELEMENT, NAME) ATMO_ ## ELEMENT ## _VARIABLE_ ## NAME

static ATMO_BLE_Handle_t ATMO_AirQualityCharacteristic_VARIABLE_bleServiceHandle;
static ATMO_BLE_Handle_t ATMO_AirQualityCharacteristic_VARIABLE_bleCharacteristicHandle;
static ATMO_DriverInstanceHandle_t ATMO_AirQuality_Pag_VARIABLE_pageHandle;
static ATMO_DriverInstanceHandle_t ATMO_CO2_Pag_VARIABLE_pageHandle;
static ATMO_BLE_Handle_t ATMO_CO2Characteristic_VARIABLE_bleServiceHandle;
static ATMO_BLE_Handle_t ATMO_CO2Characteristic_VARIABLE_bleCharacteristicHandle;

#ifdef __cplusplus
}
#endif
#endif
