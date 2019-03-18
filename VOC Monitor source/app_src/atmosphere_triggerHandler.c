#include "atmosphere_triggerHandler.h"
#include "atmosphere_abilityHandler.h"

#ifdef __cplusplus
	extern "C"{
#endif

void ATMO_TriggerHandler(unsigned int triggerHandleId, ATMO_Value_t *value) {
	switch(triggerHandleId) {
		case ATMO_TRIGGER(AirQualityCharacteristic, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(AirQualityCharacteristic, written):
		{
			break;
		}

		case ATMO_TRIGGER(AirQualityCharacteristic, subscibed):
		{
			break;
		}

		case ATMO_TRIGGER(AirQualityCharacteristic, unsubscribed):
		{
			break;
		}

		case ATMO_TRIGGER(SX9500Touch, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(SX9500Touch, touchDataRead):
		{
			break;
		}

		case ATMO_TRIGGER(SX9500Touch, upPressed):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(EmbeddedPageController, navigateUp), value);
			break;
		}

		case ATMO_TRIGGER(SX9500Touch, downPressed):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(EmbeddedPageController, navigateDown), value);
			break;
		}

		case ATMO_TRIGGER(SX9500Touch, leftPressed):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(EmbeddedPageController, navigateLeft), value);
			break;
		}

		case ATMO_TRIGGER(SX9500Touch, rightPressed):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(EmbeddedPageController, navigateRight), value);
			break;
		}

		case ATMO_TRIGGER(EmbeddedPageController, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedPageController, navigateUp):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedPageController, navigateDown):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedPageController, navigateLeft):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedPageController, navigateRight):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedPageController, processTopRightButton):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedPageController, processBottomRightButton):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedPageController, processTopLeftButton):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedPageController, processBottomLeftButton):
		{
			break;
		}

		case ATMO_TRIGGER(AirQuality_Pag, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(AirQuality_Pag, onDisplayed):
		{
			break;
		}

		case ATMO_TRIGGER(AirQuality_Pag, topRightButtonPressed):
		{
			break;
		}

		case ATMO_TRIGGER(AirQuality_Pag, bottomRightButtonPressed):
		{
			break;
		}

		case ATMO_TRIGGER(AirQuality_Pag, topLeftButtonPressed):
		{
			break;
		}

		case ATMO_TRIGGER(AirQuality_Pag, bottomLeftButtonPressed):
		{
			break;
		}

		case ATMO_TRIGGER(AirQuality_Pag, onLeave):
		{
			break;
		}

		case ATMO_TRIGGER(Interval, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(Interval, interval):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(CCS811AirQuality, readTVOC), value);
			ATMO_AbilityHandler(ATMO_ABILITY(CCS811AirQuality1, readCO2), value);
			break;
		}

		case ATMO_TRIGGER(GetAirQualityStr, triggered):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(AirQuality_Pag, setLabel), value);
			break;
		}

		case ATMO_TRIGGER(CCS811AirQuality, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(CCS811AirQuality, TVOCRead):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(AirQualityCharacteristic, setValue), value);
			ATMO_AbilityHandler(ATMO_ABILITY(GetAirQualityStr, trigger), value);
			ATMO_AbilityHandler(ATMO_ABILITY(EmbeddedComparison1, evaluate), value);
			break;
		}

		case ATMO_TRIGGER(CCS811AirQuality, CO2Read):
		{
			break;
		}

		case ATMO_TRIGGER(GetCO2Str, triggered):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(CO2_Pag, setLabel), value);
			break;
		}

		case ATMO_TRIGGER(CCS811AirQuality1, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(CCS811AirQuality1, TVOCRead):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(GetCO2Str, trigger), value);
			ATMO_AbilityHandler(ATMO_ABILITY(CO2Characteristic, setValue), value);
			ATMO_AbilityHandler(ATMO_ABILITY(EmbeddedComparison, evaluate), value);
			break;
		}

		case ATMO_TRIGGER(CCS811AirQuality1, CO2Read):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(GetCO2Str, trigger), value);
			ATMO_AbilityHandler(ATMO_ABILITY(CO2Characteristic, setValue), value);
			break;
		}

		case ATMO_TRIGGER(CO2_Pag, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(CO2_Pag, onDisplayed):
		{
			break;
		}

		case ATMO_TRIGGER(CO2_Pag, topRightButtonPressed):
		{
			break;
		}

		case ATMO_TRIGGER(CO2_Pag, bottomRightButtonPressed):
		{
			break;
		}

		case ATMO_TRIGGER(CO2_Pag, topLeftButtonPressed):
		{
			break;
		}

		case ATMO_TRIGGER(CO2_Pag, bottomLeftButtonPressed):
		{
			break;
		}

		case ATMO_TRIGGER(CO2_Pag, onLeave):
		{
			break;
		}

		case ATMO_TRIGGER(CO2Characteristic, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(CO2Characteristic, written):
		{
			break;
		}

		case ATMO_TRIGGER(CO2Characteristic, subscibed):
		{
			break;
		}

		case ATMO_TRIGGER(CO2Characteristic, unsubscribed):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedNxpRpkUserButtons, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedNxpRpkUserButtons, topRightPushed):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(EmbeddedNxpRpkBacklight, setBacklightHigh), value);
			ATMO_AbilityHandler(ATMO_ABILITY(Interval1, trigger), value);
			break;
		}

		case ATMO_TRIGGER(EmbeddedNxpRpkUserButtons, bottomRightPushed):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedNxpRpkUserButtons, topLeftPushed):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedNxpRpkUserButtons, bottomLeftPushed):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedNxpRpkBacklight, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedNxpRpkBacklight, backlightSet):
		{
			break;
		}

		case ATMO_TRIGGER(Interval1, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(Interval1, interval):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(EmbeddedNxpRpkBacklight, setBacklightOff), value);
			break;
		}

		case ATMO_TRIGGER(EmbeddedComparison, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedComparison, conditionTrue):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(EmbeddedNxpRpkRgbLed, setWhiteOn), value);
			ATMO_AbilityHandler(ATMO_ABILITY(Interval2, trigger), value);
			break;
		}

		case ATMO_TRIGGER(EmbeddedComparison, conditionFalse):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedComparison, invalidType):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedNxpRpkRgbLed, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedNxpRpkRgbLed, brightnessSet):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedNxpRpkRgbLed, colorSet):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedComparison1, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedComparison1, conditionTrue):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(EmbeddedNxpRpkRgbLed1, setBlueOn), value);
			ATMO_AbilityHandler(ATMO_ABILITY(Interval2, trigger), value);
			break;
		}

		case ATMO_TRIGGER(EmbeddedComparison1, conditionFalse):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedComparison1, invalidType):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedNxpRpkRgbLed1, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedNxpRpkRgbLed1, brightnessSet):
		{
			break;
		}

		case ATMO_TRIGGER(EmbeddedNxpRpkRgbLed1, colorSet):
		{
			break;
		}

		case ATMO_TRIGGER(Interval2, triggered):
		{
			break;
		}

		case ATMO_TRIGGER(Interval2, interval):
		{
			ATMO_AbilityHandler(ATMO_ABILITY(EmbeddedNxpRpkRgbLed, setOff), value);
			break;
		}

	}

}

#ifdef __cplusplus
}
#endif
