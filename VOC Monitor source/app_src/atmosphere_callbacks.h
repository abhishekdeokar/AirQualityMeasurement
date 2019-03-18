
#ifndef ATMO_CALLBACKS_H
#define ATMO_CALLBACKS_H

#include "atmosphere_platform.h"
#include "atmosphere_properties.h"
#include "atmosphere_variables.h"
#include "atmosphere_triggerHandler.h"
#include "atmosphere_interruptsHandler.h"
#include "atmosphere_embedded_libraries.h"
#include "atmosphere_abilityHandler.h"

#include "atmosphere_driverinstance.h"

#define ATMO_CALLBACK(ELEMENT, NAME) ELEMENT ## _ ## NAME

void ATMO_Setup();

ATMO_Status_t AirQualityCharacteristic_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AirQualityCharacteristic_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AirQualityCharacteristic_setValue(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AirQualityCharacteristic_written(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AirQualityCharacteristic_subscibed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AirQualityCharacteristic_unsubscribed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t SX9500Touch_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t SX9500Touch_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t SX9500Touch_getTouchData(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t SX9500Touch_pressUp(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t SX9500Touch_pressDown(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t SX9500Touch_pressLeft(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t SX9500Touch_pressRight(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedPageController_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedPageController_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedPageController_displayRootPage(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedPageController_navigateUp(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedPageController_navigateDown(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedPageController_navigateLeft(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedPageController_navigateRight(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedPageController_processTopRightButton(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedPageController_processBottomRightButton(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedPageController_processTopLeftButton(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedPageController_processBottomLeftButton(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AirQuality_Pag_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AirQuality_Pag_displayPage(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AirQuality_Pag_onDisplayed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AirQuality_Pag_topRightButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AirQuality_Pag_bottomRightButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AirQuality_Pag_topLeftButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AirQuality_Pag_bottomLeftButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AirQuality_Pag_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AirQuality_Pag_onLeave(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t AirQuality_Pag_setLabel(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Interval_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Interval_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Interval_interval(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t GetAirQualityStr_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t CCS811AirQuality_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t CCS811AirQuality_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t CCS811AirQuality_setEnabled(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t CCS811AirQuality_setDisabled(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t CCS811AirQuality_setEnabledDisabled(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t CCS811AirQuality_readTVOC(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t CCS811AirQuality_readCO2(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t GetCO2Str_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t CCS811AirQuality1_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t CCS811AirQuality1_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t CCS811AirQuality1_setEnabled(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t CCS811AirQuality1_setDisabled(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t CCS811AirQuality1_setEnabledDisabled(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t CCS811AirQuality1_readTVOC(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t CCS811AirQuality1_readCO2(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t CO2_Pag_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t CO2_Pag_displayPage(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t CO2_Pag_onDisplayed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t CO2_Pag_topRightButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t CO2_Pag_bottomRightButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t CO2_Pag_topLeftButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t CO2_Pag_bottomLeftButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t CO2_Pag_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t CO2_Pag_onLeave(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t CO2_Pag_setLabel(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t CO2Characteristic_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t CO2Characteristic_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t CO2Characteristic_setValue(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t CO2Characteristic_written(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t CO2Characteristic_subscibed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t CO2Characteristic_unsubscribed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkUserButtons_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkUserButtons_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkUserButtons_topRightPushed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkUserButtons_bottomRightPushed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkUserButtons_topLeftPushed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkUserButtons_bottomLeftPushed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkBacklight_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkBacklight_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkBacklight_setBacklightOff(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkBacklight_setBacklightLow(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkBacklight_setBacklightMedium(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkBacklight_setBacklightHigh(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Interval1_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Interval1_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Interval1_interval(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedComparison_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedComparison_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedComparison_evaluate(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkRgbLed_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkRgbLed_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkRgbLed_setColorPreset(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkRgbLed_setBrightnessLow(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkRgbLed_setBrightnessOff(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkRgbLed_setBrightnessMedium(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkRgbLed_setBrightnessHigh(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkRgbLed_setRedOn(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkRgbLed_setGreenOn(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkRgbLed_setBlueOn(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkRgbLed_setWhiteOn(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkRgbLed_toggleRed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkRgbLed_toggleGreen(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkRgbLed_toggleBlue(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkRgbLed_setOff(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkRgbLed_setColorHex(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedComparison1_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedComparison1_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedComparison1_evaluate(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkRgbLed1_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkRgbLed1_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkRgbLed1_setColorPreset(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkRgbLed1_setBrightnessLow(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkRgbLed1_setBrightnessOff(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkRgbLed1_setBrightnessMedium(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkRgbLed1_setBrightnessHigh(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkRgbLed1_setRedOn(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkRgbLed1_setGreenOn(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkRgbLed1_setBlueOn(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkRgbLed1_setWhiteOn(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkRgbLed1_toggleRed(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkRgbLed1_toggleGreen(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkRgbLed1_toggleBlue(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkRgbLed1_setOff(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t EmbeddedNxpRpkRgbLed1_setColorHex(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Interval2_trigger(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Interval2_setup(ATMO_Value_t *in, ATMO_Value_t *out);

ATMO_Status_t Interval2_interval(ATMO_Value_t *in, ATMO_Value_t *out);
#endif
