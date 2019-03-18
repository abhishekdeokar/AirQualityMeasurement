#include "atmosphere_abilityHandler.h"
#include "atmosphere_triggerHandler.h"

#ifdef __cplusplus
	extern "C"{
#endif

void ATMO_AbilityHandler(unsigned int abilityHandleId, ATMO_Value_t *value) {
	switch(abilityHandleId) {
		case ATMO_ABILITY(AirQualityCharacteristic, trigger):
		{
			ATMO_Value_t AirQualityCharacteristic_Value;
			ATMO_InitValue(&AirQualityCharacteristic_Value);
			AirQualityCharacteristic_trigger(value, &AirQualityCharacteristic_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(AirQualityCharacteristic, triggered), &AirQualityCharacteristic_Value);
			ATMO_FreeValue(&AirQualityCharacteristic_Value);
			break;
		}
		case ATMO_ABILITY(AirQualityCharacteristic, setup):
		{
			ATMO_Value_t AirQualityCharacteristic_Value;
			ATMO_InitValue(&AirQualityCharacteristic_Value);
			AirQualityCharacteristic_setup(value, &AirQualityCharacteristic_Value);
			ATMO_FreeValue(&AirQualityCharacteristic_Value);
			break;
		}
		case ATMO_ABILITY(AirQualityCharacteristic, setValue):
		{
			ATMO_Value_t AirQualityCharacteristic_Value;
			ATMO_InitValue(&AirQualityCharacteristic_Value);
			AirQualityCharacteristic_setValue(value, &AirQualityCharacteristic_Value);
			ATMO_FreeValue(&AirQualityCharacteristic_Value);
			break;
		}
		case ATMO_ABILITY(AirQualityCharacteristic, written):
		{
			ATMO_Value_t AirQualityCharacteristic_Value;
			ATMO_InitValue(&AirQualityCharacteristic_Value);
			AirQualityCharacteristic_written(value, &AirQualityCharacteristic_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(AirQualityCharacteristic, written), &AirQualityCharacteristic_Value);
			ATMO_FreeValue(&AirQualityCharacteristic_Value);
			break;
		}
		case ATMO_ABILITY(AirQualityCharacteristic, subscibed):
		{
			ATMO_Value_t AirQualityCharacteristic_Value;
			ATMO_InitValue(&AirQualityCharacteristic_Value);
			AirQualityCharacteristic_subscibed(value, &AirQualityCharacteristic_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(AirQualityCharacteristic, subscibed), &AirQualityCharacteristic_Value);
			ATMO_FreeValue(&AirQualityCharacteristic_Value);
			break;
		}
		case ATMO_ABILITY(AirQualityCharacteristic, unsubscribed):
		{
			ATMO_Value_t AirQualityCharacteristic_Value;
			ATMO_InitValue(&AirQualityCharacteristic_Value);
			AirQualityCharacteristic_unsubscribed(value, &AirQualityCharacteristic_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(AirQualityCharacteristic, unsubscribed), &AirQualityCharacteristic_Value);
			ATMO_FreeValue(&AirQualityCharacteristic_Value);
			break;
		}
		case ATMO_ABILITY(SX9500Touch, trigger):
		{
			ATMO_Value_t SX9500Touch_Value;
			ATMO_InitValue(&SX9500Touch_Value);
			SX9500Touch_trigger(value, &SX9500Touch_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(SX9500Touch, triggered), &SX9500Touch_Value);
			ATMO_FreeValue(&SX9500Touch_Value);
			break;
		}
		case ATMO_ABILITY(SX9500Touch, setup):
		{
			ATMO_Value_t SX9500Touch_Value;
			ATMO_InitValue(&SX9500Touch_Value);
			SX9500Touch_setup(value, &SX9500Touch_Value);
			ATMO_FreeValue(&SX9500Touch_Value);
			break;
		}
		case ATMO_ABILITY(SX9500Touch, getTouchData):
		{
			ATMO_Value_t SX9500Touch_Value;
			ATMO_InitValue(&SX9500Touch_Value);
			SX9500Touch_getTouchData(value, &SX9500Touch_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(SX9500Touch, touchDataRead), &SX9500Touch_Value);
			ATMO_FreeValue(&SX9500Touch_Value);
			break;
		}
		case ATMO_ABILITY(SX9500Touch, pressUp):
		{
			ATMO_Value_t SX9500Touch_Value;
			ATMO_InitValue(&SX9500Touch_Value);
			SX9500Touch_pressUp(value, &SX9500Touch_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(SX9500Touch, upPressed), &SX9500Touch_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(SX9500Touch, touchDataRead), &SX9500Touch_Value);
			ATMO_FreeValue(&SX9500Touch_Value);
			break;
		}
		case ATMO_ABILITY(SX9500Touch, pressDown):
		{
			ATMO_Value_t SX9500Touch_Value;
			ATMO_InitValue(&SX9500Touch_Value);
			SX9500Touch_pressDown(value, &SX9500Touch_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(SX9500Touch, downPressed), &SX9500Touch_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(SX9500Touch, touchDataRead), &SX9500Touch_Value);
			ATMO_FreeValue(&SX9500Touch_Value);
			break;
		}
		case ATMO_ABILITY(SX9500Touch, pressLeft):
		{
			ATMO_Value_t SX9500Touch_Value;
			ATMO_InitValue(&SX9500Touch_Value);
			SX9500Touch_pressLeft(value, &SX9500Touch_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(SX9500Touch, leftPressed), &SX9500Touch_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(SX9500Touch, touchDataRead), &SX9500Touch_Value);
			ATMO_FreeValue(&SX9500Touch_Value);
			break;
		}
		case ATMO_ABILITY(SX9500Touch, pressRight):
		{
			ATMO_Value_t SX9500Touch_Value;
			ATMO_InitValue(&SX9500Touch_Value);
			SX9500Touch_pressRight(value, &SX9500Touch_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(SX9500Touch, rightPressed), &SX9500Touch_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(SX9500Touch, touchDataRead), &SX9500Touch_Value);
			ATMO_FreeValue(&SX9500Touch_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedPageController, trigger):
		{
			ATMO_Value_t EmbeddedPageController_Value;
			ATMO_InitValue(&EmbeddedPageController_Value);
			EmbeddedPageController_trigger(value, &EmbeddedPageController_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedPageController, triggered), &EmbeddedPageController_Value);
			ATMO_FreeValue(&EmbeddedPageController_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedPageController, setup):
		{
			ATMO_Value_t EmbeddedPageController_Value;
			ATMO_InitValue(&EmbeddedPageController_Value);
			EmbeddedPageController_setup(value, &EmbeddedPageController_Value);
			ATMO_FreeValue(&EmbeddedPageController_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedPageController, displayRootPage):
		{
			ATMO_Value_t EmbeddedPageController_Value;
			ATMO_InitValue(&EmbeddedPageController_Value);
			EmbeddedPageController_displayRootPage(value, &EmbeddedPageController_Value);
			ATMO_FreeValue(&EmbeddedPageController_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedPageController, navigateUp):
		{
			ATMO_Value_t EmbeddedPageController_Value;
			ATMO_InitValue(&EmbeddedPageController_Value);
			EmbeddedPageController_navigateUp(value, &EmbeddedPageController_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedPageController, navigateUp), &EmbeddedPageController_Value);
			ATMO_FreeValue(&EmbeddedPageController_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedPageController, navigateDown):
		{
			ATMO_Value_t EmbeddedPageController_Value;
			ATMO_InitValue(&EmbeddedPageController_Value);
			EmbeddedPageController_navigateDown(value, &EmbeddedPageController_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedPageController, navigateDown), &EmbeddedPageController_Value);
			ATMO_FreeValue(&EmbeddedPageController_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedPageController, navigateLeft):
		{
			ATMO_Value_t EmbeddedPageController_Value;
			ATMO_InitValue(&EmbeddedPageController_Value);
			EmbeddedPageController_navigateLeft(value, &EmbeddedPageController_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedPageController, navigateLeft), &EmbeddedPageController_Value);
			ATMO_FreeValue(&EmbeddedPageController_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedPageController, navigateRight):
		{
			ATMO_Value_t EmbeddedPageController_Value;
			ATMO_InitValue(&EmbeddedPageController_Value);
			EmbeddedPageController_navigateRight(value, &EmbeddedPageController_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedPageController, navigateRight), &EmbeddedPageController_Value);
			ATMO_FreeValue(&EmbeddedPageController_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedPageController, processTopRightButton):
		{
			ATMO_Value_t EmbeddedPageController_Value;
			ATMO_InitValue(&EmbeddedPageController_Value);
			EmbeddedPageController_processTopRightButton(value, &EmbeddedPageController_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedPageController, processTopRightButton), &EmbeddedPageController_Value);
			ATMO_FreeValue(&EmbeddedPageController_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedPageController, processBottomRightButton):
		{
			ATMO_Value_t EmbeddedPageController_Value;
			ATMO_InitValue(&EmbeddedPageController_Value);
			EmbeddedPageController_processBottomRightButton(value, &EmbeddedPageController_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedPageController, processBottomRightButton), &EmbeddedPageController_Value);
			ATMO_FreeValue(&EmbeddedPageController_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedPageController, processTopLeftButton):
		{
			ATMO_Value_t EmbeddedPageController_Value;
			ATMO_InitValue(&EmbeddedPageController_Value);
			EmbeddedPageController_processTopLeftButton(value, &EmbeddedPageController_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedPageController, processTopLeftButton), &EmbeddedPageController_Value);
			ATMO_FreeValue(&EmbeddedPageController_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedPageController, processBottomLeftButton):
		{
			ATMO_Value_t EmbeddedPageController_Value;
			ATMO_InitValue(&EmbeddedPageController_Value);
			EmbeddedPageController_processBottomLeftButton(value, &EmbeddedPageController_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedPageController, processBottomLeftButton), &EmbeddedPageController_Value);
			ATMO_FreeValue(&EmbeddedPageController_Value);
			break;
		}
		case ATMO_ABILITY(AirQuality_Pag, trigger):
		{
			ATMO_Value_t AirQuality_Pag_Value;
			ATMO_InitValue(&AirQuality_Pag_Value);
			AirQuality_Pag_trigger(value, &AirQuality_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(AirQuality_Pag, triggered), &AirQuality_Pag_Value);
			ATMO_FreeValue(&AirQuality_Pag_Value);
			break;
		}
		case ATMO_ABILITY(AirQuality_Pag, displayPage):
		{
			ATMO_Value_t AirQuality_Pag_Value;
			ATMO_InitValue(&AirQuality_Pag_Value);
			AirQuality_Pag_displayPage(value, &AirQuality_Pag_Value);
			ATMO_FreeValue(&AirQuality_Pag_Value);
			break;
		}
		case ATMO_ABILITY(AirQuality_Pag, onDisplayed):
		{
			ATMO_Value_t AirQuality_Pag_Value;
			ATMO_InitValue(&AirQuality_Pag_Value);
			AirQuality_Pag_onDisplayed(value, &AirQuality_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(AirQuality_Pag, onDisplayed), &AirQuality_Pag_Value);
			ATMO_FreeValue(&AirQuality_Pag_Value);
			break;
		}
		case ATMO_ABILITY(AirQuality_Pag, topRightButtonPressed):
		{
			ATMO_Value_t AirQuality_Pag_Value;
			ATMO_InitValue(&AirQuality_Pag_Value);
			AirQuality_Pag_topRightButtonPressed(value, &AirQuality_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(AirQuality_Pag, topRightButtonPressed), &AirQuality_Pag_Value);
			ATMO_FreeValue(&AirQuality_Pag_Value);
			break;
		}
		case ATMO_ABILITY(AirQuality_Pag, bottomRightButtonPressed):
		{
			ATMO_Value_t AirQuality_Pag_Value;
			ATMO_InitValue(&AirQuality_Pag_Value);
			AirQuality_Pag_bottomRightButtonPressed(value, &AirQuality_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(AirQuality_Pag, bottomRightButtonPressed), &AirQuality_Pag_Value);
			ATMO_FreeValue(&AirQuality_Pag_Value);
			break;
		}
		case ATMO_ABILITY(AirQuality_Pag, topLeftButtonPressed):
		{
			ATMO_Value_t AirQuality_Pag_Value;
			ATMO_InitValue(&AirQuality_Pag_Value);
			AirQuality_Pag_topLeftButtonPressed(value, &AirQuality_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(AirQuality_Pag, topLeftButtonPressed), &AirQuality_Pag_Value);
			ATMO_FreeValue(&AirQuality_Pag_Value);
			break;
		}
		case ATMO_ABILITY(AirQuality_Pag, bottomLeftButtonPressed):
		{
			ATMO_Value_t AirQuality_Pag_Value;
			ATMO_InitValue(&AirQuality_Pag_Value);
			AirQuality_Pag_bottomLeftButtonPressed(value, &AirQuality_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(AirQuality_Pag, bottomLeftButtonPressed), &AirQuality_Pag_Value);
			ATMO_FreeValue(&AirQuality_Pag_Value);
			break;
		}
		case ATMO_ABILITY(AirQuality_Pag, setup):
		{
			ATMO_Value_t AirQuality_Pag_Value;
			ATMO_InitValue(&AirQuality_Pag_Value);
			AirQuality_Pag_setup(value, &AirQuality_Pag_Value);
			ATMO_FreeValue(&AirQuality_Pag_Value);
			break;
		}
		case ATMO_ABILITY(AirQuality_Pag, onLeave):
		{
			ATMO_Value_t AirQuality_Pag_Value;
			ATMO_InitValue(&AirQuality_Pag_Value);
			AirQuality_Pag_onLeave(value, &AirQuality_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(AirQuality_Pag, onLeave), &AirQuality_Pag_Value);
			ATMO_FreeValue(&AirQuality_Pag_Value);
			break;
		}
		case ATMO_ABILITY(AirQuality_Pag, setLabel):
		{
			ATMO_Value_t AirQuality_Pag_Value;
			ATMO_InitValue(&AirQuality_Pag_Value);
			AirQuality_Pag_setLabel(value, &AirQuality_Pag_Value);
			ATMO_FreeValue(&AirQuality_Pag_Value);
			break;
		}
		case ATMO_ABILITY(Interval, trigger):
		{
			ATMO_Value_t Interval_Value;
			ATMO_InitValue(&Interval_Value);
			Interval_trigger(value, &Interval_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Interval, triggered), &Interval_Value);
			ATMO_FreeValue(&Interval_Value);
			break;
		}
		case ATMO_ABILITY(Interval, setup):
		{
			ATMO_Value_t Interval_Value;
			ATMO_InitValue(&Interval_Value);
			Interval_setup(value, &Interval_Value);
			ATMO_FreeValue(&Interval_Value);
			break;
		}
		case ATMO_ABILITY(Interval, interval):
		{
			ATMO_Value_t Interval_Value;
			ATMO_InitValue(&Interval_Value);
			Interval_interval(value, &Interval_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Interval, interval), &Interval_Value);
			ATMO_FreeValue(&Interval_Value);
			break;
		}
		case ATMO_ABILITY(GetAirQualityStr, trigger):
		{
			ATMO_Value_t GetAirQualityStr_Value;
			ATMO_InitValue(&GetAirQualityStr_Value);
			GetAirQualityStr_trigger(value, &GetAirQualityStr_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(GetAirQualityStr, triggered), &GetAirQualityStr_Value);
			ATMO_FreeValue(&GetAirQualityStr_Value);
			break;
		}
		case ATMO_ABILITY(CCS811AirQuality, trigger):
		{
			ATMO_Value_t CCS811AirQuality_Value;
			ATMO_InitValue(&CCS811AirQuality_Value);
			CCS811AirQuality_trigger(value, &CCS811AirQuality_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(CCS811AirQuality, triggered), &CCS811AirQuality_Value);
			ATMO_FreeValue(&CCS811AirQuality_Value);
			break;
		}
		case ATMO_ABILITY(CCS811AirQuality, setup):
		{
			ATMO_Value_t CCS811AirQuality_Value;
			ATMO_InitValue(&CCS811AirQuality_Value);
			CCS811AirQuality_setup(value, &CCS811AirQuality_Value);
			ATMO_FreeValue(&CCS811AirQuality_Value);
			break;
		}
		case ATMO_ABILITY(CCS811AirQuality, setEnabled):
		{
			ATMO_Value_t CCS811AirQuality_Value;
			ATMO_InitValue(&CCS811AirQuality_Value);
			CCS811AirQuality_setEnabled(value, &CCS811AirQuality_Value);
			ATMO_FreeValue(&CCS811AirQuality_Value);
			break;
		}
		case ATMO_ABILITY(CCS811AirQuality, setDisabled):
		{
			ATMO_Value_t CCS811AirQuality_Value;
			ATMO_InitValue(&CCS811AirQuality_Value);
			CCS811AirQuality_setDisabled(value, &CCS811AirQuality_Value);
			ATMO_FreeValue(&CCS811AirQuality_Value);
			break;
		}
		case ATMO_ABILITY(CCS811AirQuality, setEnabledDisabled):
		{
			ATMO_Value_t CCS811AirQuality_Value;
			ATMO_InitValue(&CCS811AirQuality_Value);
			CCS811AirQuality_setEnabledDisabled(value, &CCS811AirQuality_Value);
			ATMO_FreeValue(&CCS811AirQuality_Value);
			break;
		}
		case ATMO_ABILITY(CCS811AirQuality, readTVOC):
		{
			ATMO_Value_t CCS811AirQuality_Value;
			ATMO_InitValue(&CCS811AirQuality_Value);
			CCS811AirQuality_readTVOC(value, &CCS811AirQuality_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(CCS811AirQuality, TVOCRead), &CCS811AirQuality_Value);
			ATMO_FreeValue(&CCS811AirQuality_Value);
			break;
		}
		case ATMO_ABILITY(CCS811AirQuality, readCO2):
		{
			ATMO_Value_t CCS811AirQuality_Value;
			ATMO_InitValue(&CCS811AirQuality_Value);
			CCS811AirQuality_readCO2(value, &CCS811AirQuality_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(CCS811AirQuality, CO2Read), &CCS811AirQuality_Value);
			ATMO_FreeValue(&CCS811AirQuality_Value);
			break;
		}
		case ATMO_ABILITY(GetCO2Str, trigger):
		{
			ATMO_Value_t GetCO2Str_Value;
			ATMO_InitValue(&GetCO2Str_Value);
			GetCO2Str_trigger(value, &GetCO2Str_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(GetCO2Str, triggered), &GetCO2Str_Value);
			ATMO_FreeValue(&GetCO2Str_Value);
			break;
		}
		case ATMO_ABILITY(CCS811AirQuality1, trigger):
		{
			ATMO_Value_t CCS811AirQuality1_Value;
			ATMO_InitValue(&CCS811AirQuality1_Value);
			CCS811AirQuality1_trigger(value, &CCS811AirQuality1_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(CCS811AirQuality1, triggered), &CCS811AirQuality1_Value);
			ATMO_FreeValue(&CCS811AirQuality1_Value);
			break;
		}
		case ATMO_ABILITY(CCS811AirQuality1, setup):
		{
			ATMO_Value_t CCS811AirQuality1_Value;
			ATMO_InitValue(&CCS811AirQuality1_Value);
			CCS811AirQuality1_setup(value, &CCS811AirQuality1_Value);
			ATMO_FreeValue(&CCS811AirQuality1_Value);
			break;
		}
		case ATMO_ABILITY(CCS811AirQuality1, setEnabled):
		{
			ATMO_Value_t CCS811AirQuality1_Value;
			ATMO_InitValue(&CCS811AirQuality1_Value);
			CCS811AirQuality1_setEnabled(value, &CCS811AirQuality1_Value);
			ATMO_FreeValue(&CCS811AirQuality1_Value);
			break;
		}
		case ATMO_ABILITY(CCS811AirQuality1, setDisabled):
		{
			ATMO_Value_t CCS811AirQuality1_Value;
			ATMO_InitValue(&CCS811AirQuality1_Value);
			CCS811AirQuality1_setDisabled(value, &CCS811AirQuality1_Value);
			ATMO_FreeValue(&CCS811AirQuality1_Value);
			break;
		}
		case ATMO_ABILITY(CCS811AirQuality1, setEnabledDisabled):
		{
			ATMO_Value_t CCS811AirQuality1_Value;
			ATMO_InitValue(&CCS811AirQuality1_Value);
			CCS811AirQuality1_setEnabledDisabled(value, &CCS811AirQuality1_Value);
			ATMO_FreeValue(&CCS811AirQuality1_Value);
			break;
		}
		case ATMO_ABILITY(CCS811AirQuality1, readTVOC):
		{
			ATMO_Value_t CCS811AirQuality1_Value;
			ATMO_InitValue(&CCS811AirQuality1_Value);
			CCS811AirQuality1_readTVOC(value, &CCS811AirQuality1_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(CCS811AirQuality1, TVOCRead), &CCS811AirQuality1_Value);
			ATMO_FreeValue(&CCS811AirQuality1_Value);
			break;
		}
		case ATMO_ABILITY(CCS811AirQuality1, readCO2):
		{
			ATMO_Value_t CCS811AirQuality1_Value;
			ATMO_InitValue(&CCS811AirQuality1_Value);
			CCS811AirQuality1_readCO2(value, &CCS811AirQuality1_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(CCS811AirQuality1, CO2Read), &CCS811AirQuality1_Value);
			ATMO_FreeValue(&CCS811AirQuality1_Value);
			break;
		}
		case ATMO_ABILITY(CO2_Pag, trigger):
		{
			ATMO_Value_t CO2_Pag_Value;
			ATMO_InitValue(&CO2_Pag_Value);
			CO2_Pag_trigger(value, &CO2_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(CO2_Pag, triggered), &CO2_Pag_Value);
			ATMO_FreeValue(&CO2_Pag_Value);
			break;
		}
		case ATMO_ABILITY(CO2_Pag, displayPage):
		{
			ATMO_Value_t CO2_Pag_Value;
			ATMO_InitValue(&CO2_Pag_Value);
			CO2_Pag_displayPage(value, &CO2_Pag_Value);
			ATMO_FreeValue(&CO2_Pag_Value);
			break;
		}
		case ATMO_ABILITY(CO2_Pag, onDisplayed):
		{
			ATMO_Value_t CO2_Pag_Value;
			ATMO_InitValue(&CO2_Pag_Value);
			CO2_Pag_onDisplayed(value, &CO2_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(CO2_Pag, onDisplayed), &CO2_Pag_Value);
			ATMO_FreeValue(&CO2_Pag_Value);
			break;
		}
		case ATMO_ABILITY(CO2_Pag, topRightButtonPressed):
		{
			ATMO_Value_t CO2_Pag_Value;
			ATMO_InitValue(&CO2_Pag_Value);
			CO2_Pag_topRightButtonPressed(value, &CO2_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(CO2_Pag, topRightButtonPressed), &CO2_Pag_Value);
			ATMO_FreeValue(&CO2_Pag_Value);
			break;
		}
		case ATMO_ABILITY(CO2_Pag, bottomRightButtonPressed):
		{
			ATMO_Value_t CO2_Pag_Value;
			ATMO_InitValue(&CO2_Pag_Value);
			CO2_Pag_bottomRightButtonPressed(value, &CO2_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(CO2_Pag, bottomRightButtonPressed), &CO2_Pag_Value);
			ATMO_FreeValue(&CO2_Pag_Value);
			break;
		}
		case ATMO_ABILITY(CO2_Pag, topLeftButtonPressed):
		{
			ATMO_Value_t CO2_Pag_Value;
			ATMO_InitValue(&CO2_Pag_Value);
			CO2_Pag_topLeftButtonPressed(value, &CO2_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(CO2_Pag, topLeftButtonPressed), &CO2_Pag_Value);
			ATMO_FreeValue(&CO2_Pag_Value);
			break;
		}
		case ATMO_ABILITY(CO2_Pag, bottomLeftButtonPressed):
		{
			ATMO_Value_t CO2_Pag_Value;
			ATMO_InitValue(&CO2_Pag_Value);
			CO2_Pag_bottomLeftButtonPressed(value, &CO2_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(CO2_Pag, bottomLeftButtonPressed), &CO2_Pag_Value);
			ATMO_FreeValue(&CO2_Pag_Value);
			break;
		}
		case ATMO_ABILITY(CO2_Pag, setup):
		{
			ATMO_Value_t CO2_Pag_Value;
			ATMO_InitValue(&CO2_Pag_Value);
			CO2_Pag_setup(value, &CO2_Pag_Value);
			ATMO_FreeValue(&CO2_Pag_Value);
			break;
		}
		case ATMO_ABILITY(CO2_Pag, onLeave):
		{
			ATMO_Value_t CO2_Pag_Value;
			ATMO_InitValue(&CO2_Pag_Value);
			CO2_Pag_onLeave(value, &CO2_Pag_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(CO2_Pag, onLeave), &CO2_Pag_Value);
			ATMO_FreeValue(&CO2_Pag_Value);
			break;
		}
		case ATMO_ABILITY(CO2_Pag, setLabel):
		{
			ATMO_Value_t CO2_Pag_Value;
			ATMO_InitValue(&CO2_Pag_Value);
			CO2_Pag_setLabel(value, &CO2_Pag_Value);
			ATMO_FreeValue(&CO2_Pag_Value);
			break;
		}
		case ATMO_ABILITY(CO2Characteristic, trigger):
		{
			ATMO_Value_t CO2Characteristic_Value;
			ATMO_InitValue(&CO2Characteristic_Value);
			CO2Characteristic_trigger(value, &CO2Characteristic_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(CO2Characteristic, triggered), &CO2Characteristic_Value);
			ATMO_FreeValue(&CO2Characteristic_Value);
			break;
		}
		case ATMO_ABILITY(CO2Characteristic, setup):
		{
			ATMO_Value_t CO2Characteristic_Value;
			ATMO_InitValue(&CO2Characteristic_Value);
			CO2Characteristic_setup(value, &CO2Characteristic_Value);
			ATMO_FreeValue(&CO2Characteristic_Value);
			break;
		}
		case ATMO_ABILITY(CO2Characteristic, setValue):
		{
			ATMO_Value_t CO2Characteristic_Value;
			ATMO_InitValue(&CO2Characteristic_Value);
			CO2Characteristic_setValue(value, &CO2Characteristic_Value);
			ATMO_FreeValue(&CO2Characteristic_Value);
			break;
		}
		case ATMO_ABILITY(CO2Characteristic, written):
		{
			ATMO_Value_t CO2Characteristic_Value;
			ATMO_InitValue(&CO2Characteristic_Value);
			CO2Characteristic_written(value, &CO2Characteristic_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(CO2Characteristic, written), &CO2Characteristic_Value);
			ATMO_FreeValue(&CO2Characteristic_Value);
			break;
		}
		case ATMO_ABILITY(CO2Characteristic, subscibed):
		{
			ATMO_Value_t CO2Characteristic_Value;
			ATMO_InitValue(&CO2Characteristic_Value);
			CO2Characteristic_subscibed(value, &CO2Characteristic_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(CO2Characteristic, subscibed), &CO2Characteristic_Value);
			ATMO_FreeValue(&CO2Characteristic_Value);
			break;
		}
		case ATMO_ABILITY(CO2Characteristic, unsubscribed):
		{
			ATMO_Value_t CO2Characteristic_Value;
			ATMO_InitValue(&CO2Characteristic_Value);
			CO2Characteristic_unsubscribed(value, &CO2Characteristic_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(CO2Characteristic, unsubscribed), &CO2Characteristic_Value);
			ATMO_FreeValue(&CO2Characteristic_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkUserButtons, trigger):
		{
			ATMO_Value_t EmbeddedNxpRpkUserButtons_Value;
			ATMO_InitValue(&EmbeddedNxpRpkUserButtons_Value);
			EmbeddedNxpRpkUserButtons_trigger(value, &EmbeddedNxpRpkUserButtons_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedNxpRpkUserButtons, triggered), &EmbeddedNxpRpkUserButtons_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkUserButtons_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkUserButtons, setup):
		{
			ATMO_Value_t EmbeddedNxpRpkUserButtons_Value;
			ATMO_InitValue(&EmbeddedNxpRpkUserButtons_Value);
			EmbeddedNxpRpkUserButtons_setup(value, &EmbeddedNxpRpkUserButtons_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkUserButtons_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkUserButtons, topRightPushed):
		{
			ATMO_Value_t EmbeddedNxpRpkUserButtons_Value;
			ATMO_InitValue(&EmbeddedNxpRpkUserButtons_Value);
			EmbeddedNxpRpkUserButtons_topRightPushed(value, &EmbeddedNxpRpkUserButtons_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedNxpRpkUserButtons, topRightPushed), &EmbeddedNxpRpkUserButtons_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkUserButtons_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkUserButtons, bottomRightPushed):
		{
			ATMO_Value_t EmbeddedNxpRpkUserButtons_Value;
			ATMO_InitValue(&EmbeddedNxpRpkUserButtons_Value);
			EmbeddedNxpRpkUserButtons_bottomRightPushed(value, &EmbeddedNxpRpkUserButtons_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedNxpRpkUserButtons, bottomRightPushed), &EmbeddedNxpRpkUserButtons_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkUserButtons_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkUserButtons, topLeftPushed):
		{
			ATMO_Value_t EmbeddedNxpRpkUserButtons_Value;
			ATMO_InitValue(&EmbeddedNxpRpkUserButtons_Value);
			EmbeddedNxpRpkUserButtons_topLeftPushed(value, &EmbeddedNxpRpkUserButtons_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedNxpRpkUserButtons, topLeftPushed), &EmbeddedNxpRpkUserButtons_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkUserButtons_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkUserButtons, bottomLeftPushed):
		{
			ATMO_Value_t EmbeddedNxpRpkUserButtons_Value;
			ATMO_InitValue(&EmbeddedNxpRpkUserButtons_Value);
			EmbeddedNxpRpkUserButtons_bottomLeftPushed(value, &EmbeddedNxpRpkUserButtons_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedNxpRpkUserButtons, bottomLeftPushed), &EmbeddedNxpRpkUserButtons_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkUserButtons_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkBacklight, trigger):
		{
			ATMO_Value_t EmbeddedNxpRpkBacklight_Value;
			ATMO_InitValue(&EmbeddedNxpRpkBacklight_Value);
			EmbeddedNxpRpkBacklight_trigger(value, &EmbeddedNxpRpkBacklight_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedNxpRpkBacklight, triggered), &EmbeddedNxpRpkBacklight_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkBacklight_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkBacklight, setup):
		{
			ATMO_Value_t EmbeddedNxpRpkBacklight_Value;
			ATMO_InitValue(&EmbeddedNxpRpkBacklight_Value);
			EmbeddedNxpRpkBacklight_setup(value, &EmbeddedNxpRpkBacklight_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkBacklight_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkBacklight, setBacklightOff):
		{
			ATMO_Value_t EmbeddedNxpRpkBacklight_Value;
			ATMO_InitValue(&EmbeddedNxpRpkBacklight_Value);
			EmbeddedNxpRpkBacklight_setBacklightOff(value, &EmbeddedNxpRpkBacklight_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedNxpRpkBacklight, backlightSet), &EmbeddedNxpRpkBacklight_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkBacklight_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkBacklight, setBacklightLow):
		{
			ATMO_Value_t EmbeddedNxpRpkBacklight_Value;
			ATMO_InitValue(&EmbeddedNxpRpkBacklight_Value);
			EmbeddedNxpRpkBacklight_setBacklightLow(value, &EmbeddedNxpRpkBacklight_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedNxpRpkBacklight, backlightSet), &EmbeddedNxpRpkBacklight_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkBacklight_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkBacklight, setBacklightMedium):
		{
			ATMO_Value_t EmbeddedNxpRpkBacklight_Value;
			ATMO_InitValue(&EmbeddedNxpRpkBacklight_Value);
			EmbeddedNxpRpkBacklight_setBacklightMedium(value, &EmbeddedNxpRpkBacklight_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedNxpRpkBacklight, backlightSet), &EmbeddedNxpRpkBacklight_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkBacklight_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkBacklight, setBacklightHigh):
		{
			ATMO_Value_t EmbeddedNxpRpkBacklight_Value;
			ATMO_InitValue(&EmbeddedNxpRpkBacklight_Value);
			EmbeddedNxpRpkBacklight_setBacklightHigh(value, &EmbeddedNxpRpkBacklight_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedNxpRpkBacklight, backlightSet), &EmbeddedNxpRpkBacklight_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkBacklight_Value);
			break;
		}
		case ATMO_ABILITY(Interval1, trigger):
		{
			ATMO_Value_t Interval1_Value;
			ATMO_InitValue(&Interval1_Value);
			Interval1_trigger(value, &Interval1_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Interval1, triggered), &Interval1_Value);
			ATMO_FreeValue(&Interval1_Value);
			break;
		}
		case ATMO_ABILITY(Interval1, setup):
		{
			ATMO_Value_t Interval1_Value;
			ATMO_InitValue(&Interval1_Value);
			Interval1_setup(value, &Interval1_Value);
			ATMO_FreeValue(&Interval1_Value);
			break;
		}
		case ATMO_ABILITY(Interval1, interval):
		{
			ATMO_Value_t Interval1_Value;
			ATMO_InitValue(&Interval1_Value);
			Interval1_interval(value, &Interval1_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Interval1, interval), &Interval1_Value);
			ATMO_FreeValue(&Interval1_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedComparison, trigger):
		{
			ATMO_Value_t EmbeddedComparison_Value;
			ATMO_InitValue(&EmbeddedComparison_Value);
			EmbeddedComparison_trigger(value, &EmbeddedComparison_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedComparison, triggered), &EmbeddedComparison_Value);
			ATMO_FreeValue(&EmbeddedComparison_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedComparison, setup):
		{
			ATMO_Value_t EmbeddedComparison_Value;
			ATMO_InitValue(&EmbeddedComparison_Value);
			EmbeddedComparison_setup(value, &EmbeddedComparison_Value);
			ATMO_FreeValue(&EmbeddedComparison_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedComparison, evaluate):
		{
			ATMO_Value_t EmbeddedComparison_Value;
			ATMO_InitValue(&EmbeddedComparison_Value);
			EmbeddedComparison_evaluate(value, &EmbeddedComparison_Value);
			ATMO_FreeValue(&EmbeddedComparison_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkRgbLed, trigger):
		{
			ATMO_Value_t EmbeddedNxpRpkRgbLed_Value;
			ATMO_InitValue(&EmbeddedNxpRpkRgbLed_Value);
			EmbeddedNxpRpkRgbLed_trigger(value, &EmbeddedNxpRpkRgbLed_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedNxpRpkRgbLed, triggered), &EmbeddedNxpRpkRgbLed_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkRgbLed_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkRgbLed, setup):
		{
			ATMO_Value_t EmbeddedNxpRpkRgbLed_Value;
			ATMO_InitValue(&EmbeddedNxpRpkRgbLed_Value);
			EmbeddedNxpRpkRgbLed_setup(value, &EmbeddedNxpRpkRgbLed_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkRgbLed_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkRgbLed, setColorPreset):
		{
			ATMO_Value_t EmbeddedNxpRpkRgbLed_Value;
			ATMO_InitValue(&EmbeddedNxpRpkRgbLed_Value);
			EmbeddedNxpRpkRgbLed_setColorPreset(value, &EmbeddedNxpRpkRgbLed_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkRgbLed_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkRgbLed, setBrightnessLow):
		{
			ATMO_Value_t EmbeddedNxpRpkRgbLed_Value;
			ATMO_InitValue(&EmbeddedNxpRpkRgbLed_Value);
			EmbeddedNxpRpkRgbLed_setBrightnessLow(value, &EmbeddedNxpRpkRgbLed_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedNxpRpkRgbLed, brightnessSet), &EmbeddedNxpRpkRgbLed_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkRgbLed_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkRgbLed, setBrightnessOff):
		{
			ATMO_Value_t EmbeddedNxpRpkRgbLed_Value;
			ATMO_InitValue(&EmbeddedNxpRpkRgbLed_Value);
			EmbeddedNxpRpkRgbLed_setBrightnessOff(value, &EmbeddedNxpRpkRgbLed_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedNxpRpkRgbLed, brightnessSet), &EmbeddedNxpRpkRgbLed_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkRgbLed_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkRgbLed, setBrightnessMedium):
		{
			ATMO_Value_t EmbeddedNxpRpkRgbLed_Value;
			ATMO_InitValue(&EmbeddedNxpRpkRgbLed_Value);
			EmbeddedNxpRpkRgbLed_setBrightnessMedium(value, &EmbeddedNxpRpkRgbLed_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedNxpRpkRgbLed, brightnessSet), &EmbeddedNxpRpkRgbLed_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkRgbLed_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkRgbLed, setBrightnessHigh):
		{
			ATMO_Value_t EmbeddedNxpRpkRgbLed_Value;
			ATMO_InitValue(&EmbeddedNxpRpkRgbLed_Value);
			EmbeddedNxpRpkRgbLed_setBrightnessHigh(value, &EmbeddedNxpRpkRgbLed_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedNxpRpkRgbLed, brightnessSet), &EmbeddedNxpRpkRgbLed_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkRgbLed_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkRgbLed, setRedOn):
		{
			ATMO_Value_t EmbeddedNxpRpkRgbLed_Value;
			ATMO_InitValue(&EmbeddedNxpRpkRgbLed_Value);
			EmbeddedNxpRpkRgbLed_setRedOn(value, &EmbeddedNxpRpkRgbLed_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkRgbLed_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkRgbLed, setGreenOn):
		{
			ATMO_Value_t EmbeddedNxpRpkRgbLed_Value;
			ATMO_InitValue(&EmbeddedNxpRpkRgbLed_Value);
			EmbeddedNxpRpkRgbLed_setGreenOn(value, &EmbeddedNxpRpkRgbLed_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkRgbLed_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkRgbLed, setBlueOn):
		{
			ATMO_Value_t EmbeddedNxpRpkRgbLed_Value;
			ATMO_InitValue(&EmbeddedNxpRpkRgbLed_Value);
			EmbeddedNxpRpkRgbLed_setBlueOn(value, &EmbeddedNxpRpkRgbLed_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkRgbLed_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkRgbLed, setWhiteOn):
		{
			ATMO_Value_t EmbeddedNxpRpkRgbLed_Value;
			ATMO_InitValue(&EmbeddedNxpRpkRgbLed_Value);
			EmbeddedNxpRpkRgbLed_setWhiteOn(value, &EmbeddedNxpRpkRgbLed_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkRgbLed_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkRgbLed, toggleRed):
		{
			ATMO_Value_t EmbeddedNxpRpkRgbLed_Value;
			ATMO_InitValue(&EmbeddedNxpRpkRgbLed_Value);
			EmbeddedNxpRpkRgbLed_toggleRed(value, &EmbeddedNxpRpkRgbLed_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkRgbLed_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkRgbLed, toggleGreen):
		{
			ATMO_Value_t EmbeddedNxpRpkRgbLed_Value;
			ATMO_InitValue(&EmbeddedNxpRpkRgbLed_Value);
			EmbeddedNxpRpkRgbLed_toggleGreen(value, &EmbeddedNxpRpkRgbLed_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkRgbLed_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkRgbLed, toggleBlue):
		{
			ATMO_Value_t EmbeddedNxpRpkRgbLed_Value;
			ATMO_InitValue(&EmbeddedNxpRpkRgbLed_Value);
			EmbeddedNxpRpkRgbLed_toggleBlue(value, &EmbeddedNxpRpkRgbLed_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkRgbLed_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkRgbLed, setOff):
		{
			ATMO_Value_t EmbeddedNxpRpkRgbLed_Value;
			ATMO_InitValue(&EmbeddedNxpRpkRgbLed_Value);
			EmbeddedNxpRpkRgbLed_setOff(value, &EmbeddedNxpRpkRgbLed_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkRgbLed_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkRgbLed, setColorHex):
		{
			ATMO_Value_t EmbeddedNxpRpkRgbLed_Value;
			ATMO_InitValue(&EmbeddedNxpRpkRgbLed_Value);
			EmbeddedNxpRpkRgbLed_setColorHex(value, &EmbeddedNxpRpkRgbLed_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedNxpRpkRgbLed, colorSet), &EmbeddedNxpRpkRgbLed_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkRgbLed_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedComparison1, trigger):
		{
			ATMO_Value_t EmbeddedComparison1_Value;
			ATMO_InitValue(&EmbeddedComparison1_Value);
			EmbeddedComparison1_trigger(value, &EmbeddedComparison1_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedComparison1, triggered), &EmbeddedComparison1_Value);
			ATMO_FreeValue(&EmbeddedComparison1_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedComparison1, setup):
		{
			ATMO_Value_t EmbeddedComparison1_Value;
			ATMO_InitValue(&EmbeddedComparison1_Value);
			EmbeddedComparison1_setup(value, &EmbeddedComparison1_Value);
			ATMO_FreeValue(&EmbeddedComparison1_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedComparison1, evaluate):
		{
			ATMO_Value_t EmbeddedComparison1_Value;
			ATMO_InitValue(&EmbeddedComparison1_Value);
			EmbeddedComparison1_evaluate(value, &EmbeddedComparison1_Value);
			ATMO_FreeValue(&EmbeddedComparison1_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkRgbLed1, trigger):
		{
			ATMO_Value_t EmbeddedNxpRpkRgbLed1_Value;
			ATMO_InitValue(&EmbeddedNxpRpkRgbLed1_Value);
			EmbeddedNxpRpkRgbLed1_trigger(value, &EmbeddedNxpRpkRgbLed1_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedNxpRpkRgbLed1, triggered), &EmbeddedNxpRpkRgbLed1_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkRgbLed1_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkRgbLed1, setup):
		{
			ATMO_Value_t EmbeddedNxpRpkRgbLed1_Value;
			ATMO_InitValue(&EmbeddedNxpRpkRgbLed1_Value);
			EmbeddedNxpRpkRgbLed1_setup(value, &EmbeddedNxpRpkRgbLed1_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkRgbLed1_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkRgbLed1, setColorPreset):
		{
			ATMO_Value_t EmbeddedNxpRpkRgbLed1_Value;
			ATMO_InitValue(&EmbeddedNxpRpkRgbLed1_Value);
			EmbeddedNxpRpkRgbLed1_setColorPreset(value, &EmbeddedNxpRpkRgbLed1_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkRgbLed1_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkRgbLed1, setBrightnessLow):
		{
			ATMO_Value_t EmbeddedNxpRpkRgbLed1_Value;
			ATMO_InitValue(&EmbeddedNxpRpkRgbLed1_Value);
			EmbeddedNxpRpkRgbLed1_setBrightnessLow(value, &EmbeddedNxpRpkRgbLed1_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedNxpRpkRgbLed1, brightnessSet), &EmbeddedNxpRpkRgbLed1_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkRgbLed1_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkRgbLed1, setBrightnessOff):
		{
			ATMO_Value_t EmbeddedNxpRpkRgbLed1_Value;
			ATMO_InitValue(&EmbeddedNxpRpkRgbLed1_Value);
			EmbeddedNxpRpkRgbLed1_setBrightnessOff(value, &EmbeddedNxpRpkRgbLed1_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedNxpRpkRgbLed1, brightnessSet), &EmbeddedNxpRpkRgbLed1_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkRgbLed1_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkRgbLed1, setBrightnessMedium):
		{
			ATMO_Value_t EmbeddedNxpRpkRgbLed1_Value;
			ATMO_InitValue(&EmbeddedNxpRpkRgbLed1_Value);
			EmbeddedNxpRpkRgbLed1_setBrightnessMedium(value, &EmbeddedNxpRpkRgbLed1_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedNxpRpkRgbLed1, brightnessSet), &EmbeddedNxpRpkRgbLed1_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkRgbLed1_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkRgbLed1, setBrightnessHigh):
		{
			ATMO_Value_t EmbeddedNxpRpkRgbLed1_Value;
			ATMO_InitValue(&EmbeddedNxpRpkRgbLed1_Value);
			EmbeddedNxpRpkRgbLed1_setBrightnessHigh(value, &EmbeddedNxpRpkRgbLed1_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedNxpRpkRgbLed1, brightnessSet), &EmbeddedNxpRpkRgbLed1_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkRgbLed1_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkRgbLed1, setRedOn):
		{
			ATMO_Value_t EmbeddedNxpRpkRgbLed1_Value;
			ATMO_InitValue(&EmbeddedNxpRpkRgbLed1_Value);
			EmbeddedNxpRpkRgbLed1_setRedOn(value, &EmbeddedNxpRpkRgbLed1_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkRgbLed1_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkRgbLed1, setGreenOn):
		{
			ATMO_Value_t EmbeddedNxpRpkRgbLed1_Value;
			ATMO_InitValue(&EmbeddedNxpRpkRgbLed1_Value);
			EmbeddedNxpRpkRgbLed1_setGreenOn(value, &EmbeddedNxpRpkRgbLed1_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkRgbLed1_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkRgbLed1, setBlueOn):
		{
			ATMO_Value_t EmbeddedNxpRpkRgbLed1_Value;
			ATMO_InitValue(&EmbeddedNxpRpkRgbLed1_Value);
			EmbeddedNxpRpkRgbLed1_setBlueOn(value, &EmbeddedNxpRpkRgbLed1_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkRgbLed1_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkRgbLed1, setWhiteOn):
		{
			ATMO_Value_t EmbeddedNxpRpkRgbLed1_Value;
			ATMO_InitValue(&EmbeddedNxpRpkRgbLed1_Value);
			EmbeddedNxpRpkRgbLed1_setWhiteOn(value, &EmbeddedNxpRpkRgbLed1_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkRgbLed1_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkRgbLed1, toggleRed):
		{
			ATMO_Value_t EmbeddedNxpRpkRgbLed1_Value;
			ATMO_InitValue(&EmbeddedNxpRpkRgbLed1_Value);
			EmbeddedNxpRpkRgbLed1_toggleRed(value, &EmbeddedNxpRpkRgbLed1_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkRgbLed1_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkRgbLed1, toggleGreen):
		{
			ATMO_Value_t EmbeddedNxpRpkRgbLed1_Value;
			ATMO_InitValue(&EmbeddedNxpRpkRgbLed1_Value);
			EmbeddedNxpRpkRgbLed1_toggleGreen(value, &EmbeddedNxpRpkRgbLed1_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkRgbLed1_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkRgbLed1, toggleBlue):
		{
			ATMO_Value_t EmbeddedNxpRpkRgbLed1_Value;
			ATMO_InitValue(&EmbeddedNxpRpkRgbLed1_Value);
			EmbeddedNxpRpkRgbLed1_toggleBlue(value, &EmbeddedNxpRpkRgbLed1_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkRgbLed1_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkRgbLed1, setOff):
		{
			ATMO_Value_t EmbeddedNxpRpkRgbLed1_Value;
			ATMO_InitValue(&EmbeddedNxpRpkRgbLed1_Value);
			EmbeddedNxpRpkRgbLed1_setOff(value, &EmbeddedNxpRpkRgbLed1_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkRgbLed1_Value);
			break;
		}
		case ATMO_ABILITY(EmbeddedNxpRpkRgbLed1, setColorHex):
		{
			ATMO_Value_t EmbeddedNxpRpkRgbLed1_Value;
			ATMO_InitValue(&EmbeddedNxpRpkRgbLed1_Value);
			EmbeddedNxpRpkRgbLed1_setColorHex(value, &EmbeddedNxpRpkRgbLed1_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedNxpRpkRgbLed1, colorSet), &EmbeddedNxpRpkRgbLed1_Value);
			ATMO_FreeValue(&EmbeddedNxpRpkRgbLed1_Value);
			break;
		}
		case ATMO_ABILITY(Interval2, trigger):
		{
			ATMO_Value_t Interval2_Value;
			ATMO_InitValue(&Interval2_Value);
			Interval2_trigger(value, &Interval2_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Interval2, triggered), &Interval2_Value);
			ATMO_FreeValue(&Interval2_Value);
			break;
		}
		case ATMO_ABILITY(Interval2, setup):
		{
			ATMO_Value_t Interval2_Value;
			ATMO_InitValue(&Interval2_Value);
			Interval2_setup(value, &Interval2_Value);
			ATMO_FreeValue(&Interval2_Value);
			break;
		}
		case ATMO_ABILITY(Interval2, interval):
		{
			ATMO_Value_t Interval2_Value;
			ATMO_InitValue(&Interval2_Value);
			Interval2_interval(value, &Interval2_Value);
			ATMO_TriggerHandler(ATMO_TRIGGER(Interval2, interval), &Interval2_Value);
			ATMO_FreeValue(&Interval2_Value);
			break;
		}
	}

}

#ifdef __cplusplus
}
#endif
