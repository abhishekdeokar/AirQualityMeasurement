#include "atmosphere_interruptsHandler.h"
#include "atmosphere_abilityHandler.h"

void ATMO_AirQualityCharacteristic_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AirQualityCharacteristic, trigger), NULL);
}
void ATMO_AirQualityCharacteristic_INTERRUPT_setup() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AirQualityCharacteristic, setup), NULL);
}
void ATMO_AirQualityCharacteristic_INTERRUPT_setValue() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AirQualityCharacteristic, setValue), NULL);
}
void ATMO_AirQualityCharacteristic_INTERRUPT_written() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AirQualityCharacteristic, written), NULL);
}
void ATMO_AirQualityCharacteristic_INTERRUPT_subscibed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AirQualityCharacteristic, subscibed), NULL);
}
void ATMO_AirQualityCharacteristic_INTERRUPT_unsubscribed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AirQualityCharacteristic, unsubscribed), NULL);
}
void ATMO_SX9500Touch_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(SX9500Touch, trigger), NULL);
}
void ATMO_SX9500Touch_INTERRUPT_setup() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(SX9500Touch, setup), NULL);
}
void ATMO_SX9500Touch_INTERRUPT_getTouchData() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(SX9500Touch, getTouchData), NULL);
}
void ATMO_SX9500Touch_INTERRUPT_pressUp() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(SX9500Touch, pressUp), NULL);
}
void ATMO_SX9500Touch_INTERRUPT_pressDown() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(SX9500Touch, pressDown), NULL);
}
void ATMO_SX9500Touch_INTERRUPT_pressLeft() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(SX9500Touch, pressLeft), NULL);
}
void ATMO_SX9500Touch_INTERRUPT_pressRight() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(SX9500Touch, pressRight), NULL);
}
void ATMO_EmbeddedPageController_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedPageController, trigger), NULL);
}
void ATMO_EmbeddedPageController_INTERRUPT_setup() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedPageController, setup), NULL);
}
void ATMO_EmbeddedPageController_INTERRUPT_displayRootPage() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedPageController, displayRootPage), NULL);
}
void ATMO_EmbeddedPageController_INTERRUPT_navigateUp() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedPageController, navigateUp), NULL);
}
void ATMO_EmbeddedPageController_INTERRUPT_navigateDown() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedPageController, navigateDown), NULL);
}
void ATMO_EmbeddedPageController_INTERRUPT_navigateLeft() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedPageController, navigateLeft), NULL);
}
void ATMO_EmbeddedPageController_INTERRUPT_navigateRight() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedPageController, navigateRight), NULL);
}
void ATMO_EmbeddedPageController_INTERRUPT_processTopRightButton() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedPageController, processTopRightButton), NULL);
}
void ATMO_EmbeddedPageController_INTERRUPT_processBottomRightButton() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedPageController, processBottomRightButton), NULL);
}
void ATMO_EmbeddedPageController_INTERRUPT_processTopLeftButton() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedPageController, processTopLeftButton), NULL);
}
void ATMO_EmbeddedPageController_INTERRUPT_processBottomLeftButton() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedPageController, processBottomLeftButton), NULL);
}
void ATMO_AirQuality_Pag_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AirQuality_Pag, trigger), NULL);
}
void ATMO_AirQuality_Pag_INTERRUPT_displayPage() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AirQuality_Pag, displayPage), NULL);
}
void ATMO_AirQuality_Pag_INTERRUPT_onDisplayed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AirQuality_Pag, onDisplayed), NULL);
}
void ATMO_AirQuality_Pag_INTERRUPT_topRightButtonPressed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AirQuality_Pag, topRightButtonPressed), NULL);
}
void ATMO_AirQuality_Pag_INTERRUPT_bottomRightButtonPressed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AirQuality_Pag, bottomRightButtonPressed), NULL);
}
void ATMO_AirQuality_Pag_INTERRUPT_topLeftButtonPressed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AirQuality_Pag, topLeftButtonPressed), NULL);
}
void ATMO_AirQuality_Pag_INTERRUPT_bottomLeftButtonPressed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AirQuality_Pag, bottomLeftButtonPressed), NULL);
}
void ATMO_AirQuality_Pag_INTERRUPT_setup() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AirQuality_Pag, setup), NULL);
}
void ATMO_AirQuality_Pag_INTERRUPT_onLeave() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AirQuality_Pag, onLeave), NULL);
}
void ATMO_AirQuality_Pag_INTERRUPT_setLabel() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(AirQuality_Pag, setLabel), NULL);
}
void ATMO_Interval_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Interval, trigger), NULL);
}
void ATMO_Interval_INTERRUPT_setup() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Interval, setup), NULL);
}
void ATMO_Interval_INTERRUPT_interval() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Interval, interval), NULL);
}
void ATMO_GetAirQualityStr_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(GetAirQualityStr, trigger), NULL);
}
void ATMO_CCS811AirQuality_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(CCS811AirQuality, trigger), NULL);
}
void ATMO_CCS811AirQuality_INTERRUPT_setup() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(CCS811AirQuality, setup), NULL);
}
void ATMO_CCS811AirQuality_INTERRUPT_setEnabled() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(CCS811AirQuality, setEnabled), NULL);
}
void ATMO_CCS811AirQuality_INTERRUPT_setDisabled() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(CCS811AirQuality, setDisabled), NULL);
}
void ATMO_CCS811AirQuality_INTERRUPT_setEnabledDisabled() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(CCS811AirQuality, setEnabledDisabled), NULL);
}
void ATMO_CCS811AirQuality_INTERRUPT_readTVOC() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(CCS811AirQuality, readTVOC), NULL);
}
void ATMO_CCS811AirQuality_INTERRUPT_readCO2() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(CCS811AirQuality, readCO2), NULL);
}
void ATMO_GetCO2Str_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(GetCO2Str, trigger), NULL);
}
void ATMO_CCS811AirQuality1_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(CCS811AirQuality1, trigger), NULL);
}
void ATMO_CCS811AirQuality1_INTERRUPT_setup() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(CCS811AirQuality1, setup), NULL);
}
void ATMO_CCS811AirQuality1_INTERRUPT_setEnabled() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(CCS811AirQuality1, setEnabled), NULL);
}
void ATMO_CCS811AirQuality1_INTERRUPT_setDisabled() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(CCS811AirQuality1, setDisabled), NULL);
}
void ATMO_CCS811AirQuality1_INTERRUPT_setEnabledDisabled() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(CCS811AirQuality1, setEnabledDisabled), NULL);
}
void ATMO_CCS811AirQuality1_INTERRUPT_readTVOC() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(CCS811AirQuality1, readTVOC), NULL);
}
void ATMO_CCS811AirQuality1_INTERRUPT_readCO2() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(CCS811AirQuality1, readCO2), NULL);
}
void ATMO_CO2_Pag_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(CO2_Pag, trigger), NULL);
}
void ATMO_CO2_Pag_INTERRUPT_displayPage() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(CO2_Pag, displayPage), NULL);
}
void ATMO_CO2_Pag_INTERRUPT_onDisplayed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(CO2_Pag, onDisplayed), NULL);
}
void ATMO_CO2_Pag_INTERRUPT_topRightButtonPressed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(CO2_Pag, topRightButtonPressed), NULL);
}
void ATMO_CO2_Pag_INTERRUPT_bottomRightButtonPressed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(CO2_Pag, bottomRightButtonPressed), NULL);
}
void ATMO_CO2_Pag_INTERRUPT_topLeftButtonPressed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(CO2_Pag, topLeftButtonPressed), NULL);
}
void ATMO_CO2_Pag_INTERRUPT_bottomLeftButtonPressed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(CO2_Pag, bottomLeftButtonPressed), NULL);
}
void ATMO_CO2_Pag_INTERRUPT_setup() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(CO2_Pag, setup), NULL);
}
void ATMO_CO2_Pag_INTERRUPT_onLeave() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(CO2_Pag, onLeave), NULL);
}
void ATMO_CO2_Pag_INTERRUPT_setLabel() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(CO2_Pag, setLabel), NULL);
}
void ATMO_CO2Characteristic_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(CO2Characteristic, trigger), NULL);
}
void ATMO_CO2Characteristic_INTERRUPT_setup() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(CO2Characteristic, setup), NULL);
}
void ATMO_CO2Characteristic_INTERRUPT_setValue() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(CO2Characteristic, setValue), NULL);
}
void ATMO_CO2Characteristic_INTERRUPT_written() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(CO2Characteristic, written), NULL);
}
void ATMO_CO2Characteristic_INTERRUPT_subscibed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(CO2Characteristic, subscibed), NULL);
}
void ATMO_CO2Characteristic_INTERRUPT_unsubscribed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(CO2Characteristic, unsubscribed), NULL);
}
void ATMO_EmbeddedNxpRpkUserButtons_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkUserButtons, trigger), NULL);
}
void ATMO_EmbeddedNxpRpkUserButtons_INTERRUPT_setup() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkUserButtons, setup), NULL);
}
void ATMO_EmbeddedNxpRpkUserButtons_INTERRUPT_topRightPushed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkUserButtons, topRightPushed), NULL);
}
void ATMO_EmbeddedNxpRpkUserButtons_INTERRUPT_bottomRightPushed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkUserButtons, bottomRightPushed), NULL);
}
void ATMO_EmbeddedNxpRpkUserButtons_INTERRUPT_topLeftPushed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkUserButtons, topLeftPushed), NULL);
}
void ATMO_EmbeddedNxpRpkUserButtons_INTERRUPT_bottomLeftPushed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkUserButtons, bottomLeftPushed), NULL);
}
void ATMO_EmbeddedNxpRpkBacklight_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkBacklight, trigger), NULL);
}
void ATMO_EmbeddedNxpRpkBacklight_INTERRUPT_setup() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkBacklight, setup), NULL);
}
void ATMO_EmbeddedNxpRpkBacklight_INTERRUPT_setBacklightOff() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkBacklight, setBacklightOff), NULL);
}
void ATMO_EmbeddedNxpRpkBacklight_INTERRUPT_setBacklightLow() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkBacklight, setBacklightLow), NULL);
}
void ATMO_EmbeddedNxpRpkBacklight_INTERRUPT_setBacklightMedium() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkBacklight, setBacklightMedium), NULL);
}
void ATMO_EmbeddedNxpRpkBacklight_INTERRUPT_setBacklightHigh() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkBacklight, setBacklightHigh), NULL);
}
void ATMO_Interval1_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Interval1, trigger), NULL);
}
void ATMO_Interval1_INTERRUPT_setup() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Interval1, setup), NULL);
}
void ATMO_Interval1_INTERRUPT_interval() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Interval1, interval), NULL);
}
void ATMO_EmbeddedComparison_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedComparison, trigger), NULL);
}
void ATMO_EmbeddedComparison_INTERRUPT_setup() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedComparison, setup), NULL);
}
void ATMO_EmbeddedComparison_INTERRUPT_evaluate() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedComparison, evaluate), NULL);
}
void ATMO_EmbeddedNxpRpkRgbLed_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkRgbLed, trigger), NULL);
}
void ATMO_EmbeddedNxpRpkRgbLed_INTERRUPT_setup() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkRgbLed, setup), NULL);
}
void ATMO_EmbeddedNxpRpkRgbLed_INTERRUPT_setColorPreset() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkRgbLed, setColorPreset), NULL);
}
void ATMO_EmbeddedNxpRpkRgbLed_INTERRUPT_setBrightnessLow() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkRgbLed, setBrightnessLow), NULL);
}
void ATMO_EmbeddedNxpRpkRgbLed_INTERRUPT_setBrightnessOff() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkRgbLed, setBrightnessOff), NULL);
}
void ATMO_EmbeddedNxpRpkRgbLed_INTERRUPT_setBrightnessMedium() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkRgbLed, setBrightnessMedium), NULL);
}
void ATMO_EmbeddedNxpRpkRgbLed_INTERRUPT_setBrightnessHigh() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkRgbLed, setBrightnessHigh), NULL);
}
void ATMO_EmbeddedNxpRpkRgbLed_INTERRUPT_setRedOn() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkRgbLed, setRedOn), NULL);
}
void ATMO_EmbeddedNxpRpkRgbLed_INTERRUPT_setGreenOn() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkRgbLed, setGreenOn), NULL);
}
void ATMO_EmbeddedNxpRpkRgbLed_INTERRUPT_setBlueOn() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkRgbLed, setBlueOn), NULL);
}
void ATMO_EmbeddedNxpRpkRgbLed_INTERRUPT_setWhiteOn() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkRgbLed, setWhiteOn), NULL);
}
void ATMO_EmbeddedNxpRpkRgbLed_INTERRUPT_toggleRed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkRgbLed, toggleRed), NULL);
}
void ATMO_EmbeddedNxpRpkRgbLed_INTERRUPT_toggleGreen() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkRgbLed, toggleGreen), NULL);
}
void ATMO_EmbeddedNxpRpkRgbLed_INTERRUPT_toggleBlue() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkRgbLed, toggleBlue), NULL);
}
void ATMO_EmbeddedNxpRpkRgbLed_INTERRUPT_setOff() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkRgbLed, setOff), NULL);
}
void ATMO_EmbeddedNxpRpkRgbLed_INTERRUPT_setColorHex() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkRgbLed, setColorHex), NULL);
}
void ATMO_EmbeddedComparison1_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedComparison1, trigger), NULL);
}
void ATMO_EmbeddedComparison1_INTERRUPT_setup() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedComparison1, setup), NULL);
}
void ATMO_EmbeddedComparison1_INTERRUPT_evaluate() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedComparison1, evaluate), NULL);
}
void ATMO_EmbeddedNxpRpkRgbLed1_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkRgbLed1, trigger), NULL);
}
void ATMO_EmbeddedNxpRpkRgbLed1_INTERRUPT_setup() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkRgbLed1, setup), NULL);
}
void ATMO_EmbeddedNxpRpkRgbLed1_INTERRUPT_setColorPreset() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkRgbLed1, setColorPreset), NULL);
}
void ATMO_EmbeddedNxpRpkRgbLed1_INTERRUPT_setBrightnessLow() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkRgbLed1, setBrightnessLow), NULL);
}
void ATMO_EmbeddedNxpRpkRgbLed1_INTERRUPT_setBrightnessOff() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkRgbLed1, setBrightnessOff), NULL);
}
void ATMO_EmbeddedNxpRpkRgbLed1_INTERRUPT_setBrightnessMedium() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkRgbLed1, setBrightnessMedium), NULL);
}
void ATMO_EmbeddedNxpRpkRgbLed1_INTERRUPT_setBrightnessHigh() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkRgbLed1, setBrightnessHigh), NULL);
}
void ATMO_EmbeddedNxpRpkRgbLed1_INTERRUPT_setRedOn() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkRgbLed1, setRedOn), NULL);
}
void ATMO_EmbeddedNxpRpkRgbLed1_INTERRUPT_setGreenOn() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkRgbLed1, setGreenOn), NULL);
}
void ATMO_EmbeddedNxpRpkRgbLed1_INTERRUPT_setBlueOn() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkRgbLed1, setBlueOn), NULL);
}
void ATMO_EmbeddedNxpRpkRgbLed1_INTERRUPT_setWhiteOn() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkRgbLed1, setWhiteOn), NULL);
}
void ATMO_EmbeddedNxpRpkRgbLed1_INTERRUPT_toggleRed() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkRgbLed1, toggleRed), NULL);
}
void ATMO_EmbeddedNxpRpkRgbLed1_INTERRUPT_toggleGreen() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkRgbLed1, toggleGreen), NULL);
}
void ATMO_EmbeddedNxpRpkRgbLed1_INTERRUPT_toggleBlue() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkRgbLed1, toggleBlue), NULL);
}
void ATMO_EmbeddedNxpRpkRgbLed1_INTERRUPT_setOff() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkRgbLed1, setOff), NULL);
}
void ATMO_EmbeddedNxpRpkRgbLed1_INTERRUPT_setColorHex() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(EmbeddedNxpRpkRgbLed1, setColorHex), NULL);
}
void ATMO_Interval2_INTERRUPT_trigger() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Interval2, trigger), NULL);
}
void ATMO_Interval2_INTERRUPT_setup() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Interval2, setup), NULL);
}
void ATMO_Interval2_INTERRUPT_interval() {
	ATMO_AddAbilityExecute(ATMO_ABILITY(Interval2, interval), NULL);
}
