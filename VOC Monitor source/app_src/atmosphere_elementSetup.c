#include "atmosphere_elementSetup.h"

#ifdef __cplusplus
	extern "C"{
#endif

void ATMO_ElementSetup() {
	ATMO_Value_t inOutValue;
	ATMO_InitValue(&inOutValue);
	AirQualityCharacteristic_setup(&inOutValue, &inOutValue);
	SX9500Touch_setup(&inOutValue, &inOutValue);
	EmbeddedPageController_setup(&inOutValue, &inOutValue);
	AirQuality_Pag_setup(&inOutValue, &inOutValue);
	Interval_setup(&inOutValue, &inOutValue);
	CCS811AirQuality_setup(&inOutValue, &inOutValue);
	CCS811AirQuality1_setup(&inOutValue, &inOutValue);
	CO2_Pag_setup(&inOutValue, &inOutValue);
	CO2Characteristic_setup(&inOutValue, &inOutValue);
	EmbeddedNxpRpkUserButtons_setup(&inOutValue, &inOutValue);
	EmbeddedNxpRpkBacklight_setup(&inOutValue, &inOutValue);
	Interval1_setup(&inOutValue, &inOutValue);
	EmbeddedComparison_setup(&inOutValue, &inOutValue);
	EmbeddedNxpRpkRgbLed_setup(&inOutValue, &inOutValue);
	EmbeddedComparison1_setup(&inOutValue, &inOutValue);
	EmbeddedNxpRpkRgbLed1_setup(&inOutValue, &inOutValue);
	Interval2_setup(&inOutValue, &inOutValue);
}

#ifdef __cplusplus
}
#endif
