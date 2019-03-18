
#ifndef ATMO_INTERRUPTS_HANDLER_H
#define ATMO_INTERRUPTS_HANDLER_H

#ifdef __cplusplus
	extern "C"{
#endif

#include "../atmo/core.h"
#define ATMO_INTERRUPT(ELEMENT, NAME) ATMO_ ## ELEMENT ## _INTERRUPT_  ## NAME

void ATMO_AirQualityCharacteristic_INTERRUPT_trigger();
void ATMO_AirQualityCharacteristic_INTERRUPT_setup();
void ATMO_AirQualityCharacteristic_INTERRUPT_setValue();
void ATMO_AirQualityCharacteristic_INTERRUPT_written();
void ATMO_AirQualityCharacteristic_INTERRUPT_subscibed();
void ATMO_AirQualityCharacteristic_INTERRUPT_unsubscribed();

void ATMO_SX9500Touch_INTERRUPT_trigger();
void ATMO_SX9500Touch_INTERRUPT_setup();
void ATMO_SX9500Touch_INTERRUPT_getTouchData();
void ATMO_SX9500Touch_INTERRUPT_pressUp();
void ATMO_SX9500Touch_INTERRUPT_pressDown();
void ATMO_SX9500Touch_INTERRUPT_pressLeft();
void ATMO_SX9500Touch_INTERRUPT_pressRight();

void ATMO_EmbeddedPageController_INTERRUPT_trigger();
void ATMO_EmbeddedPageController_INTERRUPT_setup();
void ATMO_EmbeddedPageController_INTERRUPT_displayRootPage();
void ATMO_EmbeddedPageController_INTERRUPT_navigateUp();
void ATMO_EmbeddedPageController_INTERRUPT_navigateDown();
void ATMO_EmbeddedPageController_INTERRUPT_navigateLeft();
void ATMO_EmbeddedPageController_INTERRUPT_navigateRight();
void ATMO_EmbeddedPageController_INTERRUPT_processTopRightButton();
void ATMO_EmbeddedPageController_INTERRUPT_processBottomRightButton();
void ATMO_EmbeddedPageController_INTERRUPT_processTopLeftButton();
void ATMO_EmbeddedPageController_INTERRUPT_processBottomLeftButton();

void ATMO_AirQuality_Pag_INTERRUPT_trigger();
void ATMO_AirQuality_Pag_INTERRUPT_displayPage();
void ATMO_AirQuality_Pag_INTERRUPT_onDisplayed();
void ATMO_AirQuality_Pag_INTERRUPT_topRightButtonPressed();
void ATMO_AirQuality_Pag_INTERRUPT_bottomRightButtonPressed();
void ATMO_AirQuality_Pag_INTERRUPT_topLeftButtonPressed();
void ATMO_AirQuality_Pag_INTERRUPT_bottomLeftButtonPressed();
void ATMO_AirQuality_Pag_INTERRUPT_setup();
void ATMO_AirQuality_Pag_INTERRUPT_onLeave();
void ATMO_AirQuality_Pag_INTERRUPT_setLabel();

void ATMO_Interval_INTERRUPT_trigger();
void ATMO_Interval_INTERRUPT_setup();
void ATMO_Interval_INTERRUPT_interval();

void ATMO_GetAirQualityStr_INTERRUPT_trigger();

void ATMO_CCS811AirQuality_INTERRUPT_trigger();
void ATMO_CCS811AirQuality_INTERRUPT_setup();
void ATMO_CCS811AirQuality_INTERRUPT_setEnabled();
void ATMO_CCS811AirQuality_INTERRUPT_setDisabled();
void ATMO_CCS811AirQuality_INTERRUPT_setEnabledDisabled();
void ATMO_CCS811AirQuality_INTERRUPT_readTVOC();
void ATMO_CCS811AirQuality_INTERRUPT_readCO2();

void ATMO_GetCO2Str_INTERRUPT_trigger();

void ATMO_CCS811AirQuality1_INTERRUPT_trigger();
void ATMO_CCS811AirQuality1_INTERRUPT_setup();
void ATMO_CCS811AirQuality1_INTERRUPT_setEnabled();
void ATMO_CCS811AirQuality1_INTERRUPT_setDisabled();
void ATMO_CCS811AirQuality1_INTERRUPT_setEnabledDisabled();
void ATMO_CCS811AirQuality1_INTERRUPT_readTVOC();
void ATMO_CCS811AirQuality1_INTERRUPT_readCO2();

void ATMO_CO2_Pag_INTERRUPT_trigger();
void ATMO_CO2_Pag_INTERRUPT_displayPage();
void ATMO_CO2_Pag_INTERRUPT_onDisplayed();
void ATMO_CO2_Pag_INTERRUPT_topRightButtonPressed();
void ATMO_CO2_Pag_INTERRUPT_bottomRightButtonPressed();
void ATMO_CO2_Pag_INTERRUPT_topLeftButtonPressed();
void ATMO_CO2_Pag_INTERRUPT_bottomLeftButtonPressed();
void ATMO_CO2_Pag_INTERRUPT_setup();
void ATMO_CO2_Pag_INTERRUPT_onLeave();
void ATMO_CO2_Pag_INTERRUPT_setLabel();

void ATMO_CO2Characteristic_INTERRUPT_trigger();
void ATMO_CO2Characteristic_INTERRUPT_setup();
void ATMO_CO2Characteristic_INTERRUPT_setValue();
void ATMO_CO2Characteristic_INTERRUPT_written();
void ATMO_CO2Characteristic_INTERRUPT_subscibed();
void ATMO_CO2Characteristic_INTERRUPT_unsubscribed();

void ATMO_EmbeddedNxpRpkUserButtons_INTERRUPT_trigger();
void ATMO_EmbeddedNxpRpkUserButtons_INTERRUPT_setup();
void ATMO_EmbeddedNxpRpkUserButtons_INTERRUPT_topRightPushed();
void ATMO_EmbeddedNxpRpkUserButtons_INTERRUPT_bottomRightPushed();
void ATMO_EmbeddedNxpRpkUserButtons_INTERRUPT_topLeftPushed();
void ATMO_EmbeddedNxpRpkUserButtons_INTERRUPT_bottomLeftPushed();

void ATMO_EmbeddedNxpRpkBacklight_INTERRUPT_trigger();
void ATMO_EmbeddedNxpRpkBacklight_INTERRUPT_setup();
void ATMO_EmbeddedNxpRpkBacklight_INTERRUPT_setBacklightOff();
void ATMO_EmbeddedNxpRpkBacklight_INTERRUPT_setBacklightLow();
void ATMO_EmbeddedNxpRpkBacklight_INTERRUPT_setBacklightMedium();
void ATMO_EmbeddedNxpRpkBacklight_INTERRUPT_setBacklightHigh();

void ATMO_Interval1_INTERRUPT_trigger();
void ATMO_Interval1_INTERRUPT_setup();
void ATMO_Interval1_INTERRUPT_interval();

void ATMO_EmbeddedComparison_INTERRUPT_trigger();
void ATMO_EmbeddedComparison_INTERRUPT_setup();
void ATMO_EmbeddedComparison_INTERRUPT_evaluate();

void ATMO_EmbeddedNxpRpkRgbLed_INTERRUPT_trigger();
void ATMO_EmbeddedNxpRpkRgbLed_INTERRUPT_setup();
void ATMO_EmbeddedNxpRpkRgbLed_INTERRUPT_setColorPreset();
void ATMO_EmbeddedNxpRpkRgbLed_INTERRUPT_setBrightnessLow();
void ATMO_EmbeddedNxpRpkRgbLed_INTERRUPT_setBrightnessOff();
void ATMO_EmbeddedNxpRpkRgbLed_INTERRUPT_setBrightnessMedium();
void ATMO_EmbeddedNxpRpkRgbLed_INTERRUPT_setBrightnessHigh();
void ATMO_EmbeddedNxpRpkRgbLed_INTERRUPT_setRedOn();
void ATMO_EmbeddedNxpRpkRgbLed_INTERRUPT_setGreenOn();
void ATMO_EmbeddedNxpRpkRgbLed_INTERRUPT_setBlueOn();
void ATMO_EmbeddedNxpRpkRgbLed_INTERRUPT_setWhiteOn();
void ATMO_EmbeddedNxpRpkRgbLed_INTERRUPT_toggleRed();
void ATMO_EmbeddedNxpRpkRgbLed_INTERRUPT_toggleGreen();
void ATMO_EmbeddedNxpRpkRgbLed_INTERRUPT_toggleBlue();
void ATMO_EmbeddedNxpRpkRgbLed_INTERRUPT_setOff();
void ATMO_EmbeddedNxpRpkRgbLed_INTERRUPT_setColorHex();

void ATMO_EmbeddedComparison1_INTERRUPT_trigger();
void ATMO_EmbeddedComparison1_INTERRUPT_setup();
void ATMO_EmbeddedComparison1_INTERRUPT_evaluate();

void ATMO_EmbeddedNxpRpkRgbLed1_INTERRUPT_trigger();
void ATMO_EmbeddedNxpRpkRgbLed1_INTERRUPT_setup();
void ATMO_EmbeddedNxpRpkRgbLed1_INTERRUPT_setColorPreset();
void ATMO_EmbeddedNxpRpkRgbLed1_INTERRUPT_setBrightnessLow();
void ATMO_EmbeddedNxpRpkRgbLed1_INTERRUPT_setBrightnessOff();
void ATMO_EmbeddedNxpRpkRgbLed1_INTERRUPT_setBrightnessMedium();
void ATMO_EmbeddedNxpRpkRgbLed1_INTERRUPT_setBrightnessHigh();
void ATMO_EmbeddedNxpRpkRgbLed1_INTERRUPT_setRedOn();
void ATMO_EmbeddedNxpRpkRgbLed1_INTERRUPT_setGreenOn();
void ATMO_EmbeddedNxpRpkRgbLed1_INTERRUPT_setBlueOn();
void ATMO_EmbeddedNxpRpkRgbLed1_INTERRUPT_setWhiteOn();
void ATMO_EmbeddedNxpRpkRgbLed1_INTERRUPT_toggleRed();
void ATMO_EmbeddedNxpRpkRgbLed1_INTERRUPT_toggleGreen();
void ATMO_EmbeddedNxpRpkRgbLed1_INTERRUPT_toggleBlue();
void ATMO_EmbeddedNxpRpkRgbLed1_INTERRUPT_setOff();
void ATMO_EmbeddedNxpRpkRgbLed1_INTERRUPT_setColorHex();

void ATMO_Interval2_INTERRUPT_trigger();
void ATMO_Interval2_INTERRUPT_setup();
void ATMO_Interval2_INTERRUPT_interval();


#ifdef __cplusplus
}
#endif

#endif
