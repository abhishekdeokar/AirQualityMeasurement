#include "atmosphere_callbacks.h"

//HEADER START

//HEADER END

void ATMO_Setup() {


}


ATMO_Status_t AirQualityCharacteristic_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t AirQualityCharacteristic_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_BLE_GATTSAddService(
		ATMO_PROPERTY(AirQualityCharacteristic, instance),
		&ATMO_VARIABLE(AirQualityCharacteristic, bleServiceHandle), 
		ATMO_PROPERTY(AirQualityCharacteristic, bleServiceUuid));
	
	uint8_t property = 0;
	uint8_t permission = 0;
	
	property |= ATMO_PROPERTY(AirQualityCharacteristic, read) ? ATMO_BLE_Property_Read : 0;
	property |= ATMO_PROPERTY(AirQualityCharacteristic, write) ? ATMO_BLE_Property_Write : 0;
	property |= ATMO_PROPERTY(AirQualityCharacteristic, notify) ? ATMO_BLE_Property_Notify : 0;

	permission |= ATMO_PROPERTY(AirQualityCharacteristic, read) ? ATMO_BLE_Permission_Read : 0;
	permission |= ATMO_PROPERTY(AirQualityCharacteristic, write) ? ATMO_BLE_Permission_Write : 0;

	ATMO_DATATYPE types[3] = {ATMO_PROPERTY(AirQualityCharacteristic, writeDataType), ATMO_PROPERTY(AirQualityCharacteristic, readDataType), ATMO_PROPERTY(AirQualityCharacteristic, notifyDataType)};
	
	ATMO_BLE_GATTSAddCharacteristic(
		ATMO_PROPERTY(AirQualityCharacteristic, instance),
		&ATMO_VARIABLE(AirQualityCharacteristic, bleCharacteristicHandle), 
		ATMO_VARIABLE(AirQualityCharacteristic, bleServiceHandle), 
		ATMO_PROPERTY(AirQualityCharacteristic, bleCharacteristicUuid), 
		property, permission, ATMO_GetMaxValueSize(3, 64, types));
	
	ATMO_BLE_GATTSRegisterCharacteristicAbilityHandle(
		ATMO_PROPERTY(AirQualityCharacteristic, instance),
		ATMO_VARIABLE(AirQualityCharacteristic, bleCharacteristicHandle), 
		ATMO_BLE_Characteristic_Written, 
		ATMO_ABILITY(AirQualityCharacteristic, written));
	
	return ATMO_Status_Success;
	
}


ATMO_Status_t AirQualityCharacteristic_setValue(ATMO_Value_t *in, ATMO_Value_t *out) {

	
	// Convert to the desired write data type
	ATMO_Value_t convertedValue;
	ATMO_InitValue(&convertedValue);
	ATMO_CreateValueConverted(&convertedValue, ATMO_PROPERTY(AirQualityCharacteristic, readDataType), in);

	ATMO_BLE_GATTSSetCharacteristic(
		ATMO_PROPERTY(AirQualityCharacteristic, instance),
		ATMO_VARIABLE(AirQualityCharacteristic, bleCharacteristicHandle),
		convertedValue.size, 
		(uint8_t *)convertedValue.data,
		NULL);
	
	ATMO_FreeValue(&convertedValue);
		
	return ATMO_Status_Success;
	
}


ATMO_Status_t AirQualityCharacteristic_written(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_CreateValueConverted(out, ATMO_PROPERTY(AirQualityCharacteristic, writeDataType), in);
	return ATMO_Status_Success;
	
}


ATMO_Status_t AirQualityCharacteristic_subscibed(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t AirQualityCharacteristic_unsubscribed(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t SX9500Touch_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t SX9500Touch_setup(ATMO_Value_t *in, ATMO_Value_t *out) {
	ATMO_SX9500_Config_t config;
	config.address = ATMO_PROPERTY(SX9500Touch, i2cAddress);
	config.i2cDriverInstance = ATMO_PROPERTY(SX9500Touch, i2cInstance);
	config.gpioDriverInstance = ATMO_PROPERTY(SX9500Touch, gpioInstance);
	config.interruptEnabled = ATMO_PROPERTY(SX9500Touch, interruptEnabled);
	config.interruptPin = ATMO_PROPERTY(SX9500Touch, interruptGpio);
	ATMO_SX9500_Init(&config);
	ATMO_SX9500_RegisterTouchedAbilityHandle(SX9500_Touched_Up, ATMO_ABILITY(SX9500Touch, pressUp));
	ATMO_SX9500_RegisterTouchedAbilityHandle(SX9500_Touched_Down, ATMO_ABILITY(SX9500Touch, pressDown));
	ATMO_SX9500_RegisterTouchedAbilityHandle(SX9500_Touched_Left, ATMO_ABILITY(SX9500Touch, pressLeft));
	ATMO_SX9500_RegisterTouchedAbilityHandle(SX9500_Touched_Right, ATMO_ABILITY(SX9500Touch, pressRight));
	return ATMO_Status_Success;
}


ATMO_Status_t SX9500Touch_getTouchData(ATMO_Value_t *in, ATMO_Value_t *out) {
	return;
}


ATMO_Status_t SX9500Touch_pressUp(ATMO_Value_t *in, ATMO_Value_t *out) {
SX9500_TouchState_t touchState;
ATMO_GetBinary(in, &touchState, sizeof(touchState));
ATMO_CreateValueBinary(out, &touchState, sizeof(touchState));
return ATMO_Status_Success;
}


ATMO_Status_t SX9500Touch_pressDown(ATMO_Value_t *in, ATMO_Value_t *out) {
SX9500_TouchState_t touchState;
ATMO_GetBinary(in, &touchState, sizeof(touchState));
ATMO_CreateValueBinary(out, &touchState, sizeof(touchState));
return ATMO_Status_Success;
}


ATMO_Status_t SX9500Touch_pressLeft(ATMO_Value_t *in, ATMO_Value_t *out) {
SX9500_TouchState_t touchState;
ATMO_GetBinary(in, &touchState, sizeof(touchState));
ATMO_CreateValueBinary(out, &touchState, sizeof(touchState));
return ATMO_Status_Success;
}


ATMO_Status_t SX9500Touch_pressRight(ATMO_Value_t *in, ATMO_Value_t *out) {
SX9500_TouchState_t touchState;
ATMO_GetBinary(in, &touchState, sizeof(touchState));
ATMO_CreateValueBinary(out, &touchState, sizeof(touchState));
return ATMO_Status_Success;
}


ATMO_Status_t EmbeddedPageController_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t EmbeddedPageController_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_UI_PAGE_CONTROLLER_Config_t config;
	config.enableUpDownNavLabels = ATMO_PROPERTY(EmbeddedPageController, upDownNavigationLabelsEnabled);
	config.enableLeftRightNavLabels = ATMO_PROPERTY(EmbeddedPageController, leftRightNavigationLabelsEnabled);
	ATMO_UI_Page_SetConfiguration(&config);
    return ATMO_Status_Success;
	
}


ATMO_Status_t EmbeddedPageController_displayRootPage(ATMO_Value_t *in, ATMO_Value_t *out) {

	
	ATMO_UI_Page_DisplayRootPage();
	return ATMO_Status_Success;
	
}


ATMO_Status_t EmbeddedPageController_navigateUp(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_UI_Page_ProcessNavButton(ATMO_UI_PAGE_NAV_UP);
	return ATMO_Status_Success;
	
}


ATMO_Status_t EmbeddedPageController_navigateDown(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_UI_Page_ProcessNavButton(ATMO_UI_PAGE_NAV_DOWN);
	return ATMO_Status_Success;
	
}


ATMO_Status_t EmbeddedPageController_navigateLeft(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_UI_Page_ProcessNavButton(ATMO_UI_PAGE_NAV_LEFT);
	return ATMO_Status_Success;
	
}


ATMO_Status_t EmbeddedPageController_navigateRight(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_UI_Page_ProcessNavButton(ATMO_UI_PAGE_NAV_RIGHT);
	return ATMO_Status_Success;
	
}


ATMO_Status_t EmbeddedPageController_processTopRightButton(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_UI_Page_ProcessUserButton(1);
	return ATMO_Status_Success;
	
}


ATMO_Status_t EmbeddedPageController_processBottomRightButton(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_UI_Page_ProcessUserButton(2);
	return ATMO_Status_Success;
	
}


ATMO_Status_t EmbeddedPageController_processTopLeftButton(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_UI_Page_ProcessUserButton(3);
	return ATMO_Status_Success;
	
}


ATMO_Status_t EmbeddedPageController_processBottomLeftButton(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_UI_Page_ProcessUserButton(4);
	return ATMO_Status_Success;
	
}


ATMO_Status_t AirQuality_Pag_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t AirQuality_Pag_displayPage(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_UI_Page_DisplayPageByCoord(ATMO_PROPERTY(AirQuality_Pag, x), ATMO_PROPERTY(AirQuality_Pag, y), false);
	return ATMO_Status_Success;
	
}


ATMO_Status_t AirQuality_Pag_onDisplayed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
    
}


ATMO_Status_t AirQuality_Pag_topRightButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t AirQuality_Pag_bottomRightButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t AirQuality_Pag_topLeftButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t AirQuality_Pag_bottomLeftButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t AirQuality_Pag_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

    ATMO_UI_PAGE_Config_t config;
	config.hidden = ATMO_PROPERTY(AirQuality_Pag, pageHidden);
	config.textColor = ATMO_PROPERTY(AirQuality_Pag, textColor);
    config.activeButtons = ATMO_UI_Page_GetButtonMask(ATMO_PROPERTY(AirQuality_Pag, topRightButtonEnabled),
    ATMO_PROPERTY(AirQuality_Pag,bottomRightButtonEnabled), ATMO_PROPERTY(AirQuality_Pag, topLeftButtonEnabled), ATMO_PROPERTY(AirQuality_Pag, bottomLeftButtonEnabled));
	config.x = ATMO_PROPERTY(AirQuality_Pag, x);
    config.x = ATMO_PROPERTY(AirQuality_Pag, x);
    config.y = ATMO_PROPERTY(AirQuality_Pag, y);
	strncpy(config.topLeftButtonLabel, ATMO_PROPERTY(AirQuality_Pag, topLeftButtonLabel), ATMO_BUTTON_LABEL_MAXLEN);
	strncpy(config.topRightButtonLabel, ATMO_PROPERTY(AirQuality_Pag, topRightButtonLabel), ATMO_BUTTON_LABEL_MAXLEN);
	strncpy(config.bottomLeftButtonLabel, ATMO_PROPERTY(AirQuality_Pag, bottomLeftButtonLabel), ATMO_BUTTON_LABEL_MAXLEN);
	strncpy(config.bottomRightButtonLabel, ATMO_PROPERTY(AirQuality_Pag, bottomRightButtonLabel), ATMO_BUTTON_LABEL_MAXLEN);
    config.spanX = ATMO_PROPERTY(AirQuality_Pag, spanX);
	config.spanY = ATMO_PROPERTY(AirQuality_Pag, spanY);
    config.title = ATMO_PROPERTY(AirQuality_Pag, pageTitle);
    config.titleHidden = ATMO_PROPERTY(AirQuality_Pag, titleHidden);
	ATMO_UI_SINGLEICONTEXT_Init(&config);
	ATMO_VARIABLE(AirQuality_Pag, pageHandle) = config.templateInstance;
    ATMO_UI_SINGLEICONTEXT_SetMainText(config.templateInstance, ATMO_PROPERTY(AirQuality_Pag, label));
    ATMO_UI_SINGLEICONTEXT_SetIcon(config.templateInstance, ATMO_PROPERTY(AirQuality_Pag, icon));
    ATMO_UI_SINGLEICONTEXT_RegisterOnDisplayedAbilityHandle(ATMO_VARIABLE(AirQuality_Pag,pageHandle), ATMO_ABILITY(AirQuality_Pag, onDisplayed));
    ATMO_UI_SINGLEICONTEXT_RegisterButtonAbilityHandle(ATMO_VARIABLE(AirQuality_Pag,pageHandle), 1, ATMO_ABILITY(AirQuality_Pag, topRightButtonPressed));
	ATMO_UI_SINGLEICONTEXT_RegisterButtonAbilityHandle(ATMO_VARIABLE(AirQuality_Pag,pageHandle), 2, ATMO_ABILITY(AirQuality_Pag, bottomRightButtonPressed));
	ATMO_UI_SINGLEICONTEXT_RegisterButtonAbilityHandle(ATMO_VARIABLE(AirQuality_Pag,pageHandle), 3, ATMO_ABILITY(AirQuality_Pag, topLeftButtonPressed));
    ATMO_UI_SINGLEICONTEXT_RegisterButtonAbilityHandle(ATMO_VARIABLE(AirQuality_Pag,pageHandle), 4, ATMO_ABILITY(AirQuality_Pag, bottomLeftButtonPressed));
    ATMO_UI_SINGLEICONTEXT_RegisterOnLeaveAbilityHandle(config.templateInstance, ATMO_ABILITY(AirQuality_Pag, onLeave));
	return ATMO_Status_Success;
    
}


ATMO_Status_t AirQuality_Pag_onLeave(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t AirQuality_Pag_setLabel(ATMO_Value_t *in, ATMO_Value_t *out) {

    char label[32];
    if(ATMO_GetString(in, label, 32) == ATMO_Status_Success)
    {
        ATMO_UI_SINGLEICONTEXT_SetMainText(ATMO_VARIABLE(AirQuality_Pag,pageHandle), label);
    }
    else
    {
        return ATMO_Status_Fail;
    }

    return ATMO_Status_Success;
    
}


ATMO_Status_t Interval_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t Interval_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_INTERVAL_Handle_t intervalHandle;
    ATMO_INTERVAL_AddAbilityInterval(
		ATMO_PROPERTY(Interval, instance), 
		ATMO_ABILITY(Interval, interval), 
		ATMO_PROPERTY(Interval, time), 
		&intervalHandle
	);
	
	return ATMO_Status_Success;
	
}


ATMO_Status_t Interval_interval(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t GetAirQualityStr_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	int temp = 0;
	ATMO_GetInt(in, &temp);
	char str[32];
	sprintf(str, "%d ppb", temp);
	ATMO_CreateValueString(out, str);
	return ATMO_Status_Success;
}


ATMO_Status_t CCS811AirQuality_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t CCS811AirQuality_setup(ATMO_Value_t *in, ATMO_Value_t *out) {
	ATMO_CCS811_Config_t config;
	config.operatingMode = ATMO_PROPERTY(CCS811AirQuality, operatingMode);
	config.address = ATMO_PROPERTY(CCS811AirQuality, i2cAddress);
	config.i2cDriverInstance = ATMO_PROPERTY(CCS811AirQuality, i2cInstance);

	return ( ATMO_CCS811_Init(&config) == ATMO_CCS811_Status_Success ) ? ATMO_Status_Success : ATMO_Status_Fail;

}


ATMO_Status_t CCS811AirQuality_setEnabled(ATMO_Value_t *in, ATMO_Value_t *out) {
ATMO_CCS811_SetEnabled(true);
return ATMO_Status_Success;
}


ATMO_Status_t CCS811AirQuality_setDisabled(ATMO_Value_t *in, ATMO_Value_t *out) {
ATMO_CCS811_SetEnabled(false);
return ATMO_Status_Success;
}


ATMO_Status_t CCS811AirQuality_setEnabledDisabled(ATMO_Value_t *in, ATMO_Value_t *out) {
bool enabled = false;
ATMO_GetBool(in, &enabled);
ATMO_CCS811_SetEnabled(enabled);
return ATMO_Status_Success;
}


ATMO_Status_t CCS811AirQuality_readTVOC(ATMO_Value_t *in, ATMO_Value_t *out) {
    uint16_t tvoc;

    if(ATMO_CCS811_GetTVOC(&tvoc) == ATMO_CCS811_Status_Success)
    {
        ATMO_CreateValueUnsignedInt(out, (unsigned int)tvoc);
    }
    else
    {
        ATMO_CreateValueVoid(out);
    }
    
    return ATMO_Status_Success;
}


ATMO_Status_t CCS811AirQuality_readCO2(ATMO_Value_t *in, ATMO_Value_t *out) {
    uint16_t co2;
    
    if(ATMO_CCS811_GetCO2(&co2) == ATMO_CCS811_Status_Success)
    {
        ATMO_CreateValueInt(out, (int)co2);
    }
    else
    {
        ATMO_CreateValueVoid(out);
    }
  
    return ATMO_Status_Success;
}


ATMO_Status_t GetCO2Str_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	int temp = 0;
	ATMO_GetInt(in, &temp);
	char str[32];
	sprintf(str, "%d ppb", temp);
	ATMO_CreateValueString(out, str);
}


ATMO_Status_t CCS811AirQuality1_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t CCS811AirQuality1_setup(ATMO_Value_t *in, ATMO_Value_t *out) {
	ATMO_CCS811_Config_t config;
	config.operatingMode = ATMO_PROPERTY(CCS811AirQuality1, operatingMode);
	config.address = ATMO_PROPERTY(CCS811AirQuality1, i2cAddress);
	config.i2cDriverInstance = ATMO_PROPERTY(CCS811AirQuality1, i2cInstance);

	return ( ATMO_CCS811_Init(&config) == ATMO_CCS811_Status_Success ) ? ATMO_Status_Success : ATMO_Status_Fail;

}


ATMO_Status_t CCS811AirQuality1_setEnabled(ATMO_Value_t *in, ATMO_Value_t *out) {
ATMO_CCS811_SetEnabled(true);
return ATMO_Status_Success;
}


ATMO_Status_t CCS811AirQuality1_setDisabled(ATMO_Value_t *in, ATMO_Value_t *out) {
ATMO_CCS811_SetEnabled(false);
return ATMO_Status_Success;
}


ATMO_Status_t CCS811AirQuality1_setEnabledDisabled(ATMO_Value_t *in, ATMO_Value_t *out) {
bool enabled = false;
ATMO_GetBool(in, &enabled);
ATMO_CCS811_SetEnabled(enabled);
return ATMO_Status_Success;
}


ATMO_Status_t CCS811AirQuality1_readTVOC(ATMO_Value_t *in, ATMO_Value_t *out) {
    uint16_t tvoc;

    if(ATMO_CCS811_GetTVOC(&tvoc) == ATMO_CCS811_Status_Success)
    {
        ATMO_CreateValueUnsignedInt(out, (unsigned int)tvoc);
    }
    else
    {
        ATMO_CreateValueVoid(out);
    }
    
    return ATMO_Status_Success;
}


ATMO_Status_t CCS811AirQuality1_readCO2(ATMO_Value_t *in, ATMO_Value_t *out) {
    uint16_t co2;
    
    if(ATMO_CCS811_GetCO2(&co2) == ATMO_CCS811_Status_Success)
    {
        ATMO_CreateValueInt(out, (int)co2);
    }
    else
    {
        ATMO_CreateValueVoid(out);
    }
  
    return ATMO_Status_Success;
}


ATMO_Status_t CO2_Pag_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t CO2_Pag_displayPage(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_UI_Page_DisplayPageByCoord(ATMO_PROPERTY(CO2_Pag, x), ATMO_PROPERTY(CO2_Pag, y), false);
	return ATMO_Status_Success;
	
}


ATMO_Status_t CO2_Pag_onDisplayed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
    
}


ATMO_Status_t CO2_Pag_topRightButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t CO2_Pag_bottomRightButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t CO2_Pag_topLeftButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t CO2_Pag_bottomLeftButtonPressed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t CO2_Pag_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

    ATMO_UI_PAGE_Config_t config;
	config.hidden = ATMO_PROPERTY(CO2_Pag, pageHidden);
	config.textColor = ATMO_PROPERTY(CO2_Pag, textColor);
    config.activeButtons = ATMO_UI_Page_GetButtonMask(ATMO_PROPERTY(CO2_Pag, topRightButtonEnabled),
    ATMO_PROPERTY(CO2_Pag,bottomRightButtonEnabled), ATMO_PROPERTY(CO2_Pag, topLeftButtonEnabled), ATMO_PROPERTY(CO2_Pag, bottomLeftButtonEnabled));
	config.x = ATMO_PROPERTY(CO2_Pag, x);
    config.x = ATMO_PROPERTY(CO2_Pag, x);
    config.y = ATMO_PROPERTY(CO2_Pag, y);
	strncpy(config.topLeftButtonLabel, ATMO_PROPERTY(CO2_Pag, topLeftButtonLabel), ATMO_BUTTON_LABEL_MAXLEN);
	strncpy(config.topRightButtonLabel, ATMO_PROPERTY(CO2_Pag, topRightButtonLabel), ATMO_BUTTON_LABEL_MAXLEN);
	strncpy(config.bottomLeftButtonLabel, ATMO_PROPERTY(CO2_Pag, bottomLeftButtonLabel), ATMO_BUTTON_LABEL_MAXLEN);
	strncpy(config.bottomRightButtonLabel, ATMO_PROPERTY(CO2_Pag, bottomRightButtonLabel), ATMO_BUTTON_LABEL_MAXLEN);
    config.spanX = ATMO_PROPERTY(CO2_Pag, spanX);
	config.spanY = ATMO_PROPERTY(CO2_Pag, spanY);
    config.title = ATMO_PROPERTY(CO2_Pag, pageTitle);
    config.titleHidden = ATMO_PROPERTY(CO2_Pag, titleHidden);
	ATMO_UI_SINGLEICONTEXT_Init(&config);
	ATMO_VARIABLE(CO2_Pag, pageHandle) = config.templateInstance;
    ATMO_UI_SINGLEICONTEXT_SetMainText(config.templateInstance, ATMO_PROPERTY(CO2_Pag, label));
    ATMO_UI_SINGLEICONTEXT_SetIcon(config.templateInstance, ATMO_PROPERTY(CO2_Pag, icon));
    ATMO_UI_SINGLEICONTEXT_RegisterOnDisplayedAbilityHandle(ATMO_VARIABLE(CO2_Pag,pageHandle), ATMO_ABILITY(CO2_Pag, onDisplayed));
    ATMO_UI_SINGLEICONTEXT_RegisterButtonAbilityHandle(ATMO_VARIABLE(CO2_Pag,pageHandle), 1, ATMO_ABILITY(CO2_Pag, topRightButtonPressed));
	ATMO_UI_SINGLEICONTEXT_RegisterButtonAbilityHandle(ATMO_VARIABLE(CO2_Pag,pageHandle), 2, ATMO_ABILITY(CO2_Pag, bottomRightButtonPressed));
	ATMO_UI_SINGLEICONTEXT_RegisterButtonAbilityHandle(ATMO_VARIABLE(CO2_Pag,pageHandle), 3, ATMO_ABILITY(CO2_Pag, topLeftButtonPressed));
    ATMO_UI_SINGLEICONTEXT_RegisterButtonAbilityHandle(ATMO_VARIABLE(CO2_Pag,pageHandle), 4, ATMO_ABILITY(CO2_Pag, bottomLeftButtonPressed));
    ATMO_UI_SINGLEICONTEXT_RegisterOnLeaveAbilityHandle(config.templateInstance, ATMO_ABILITY(CO2_Pag, onLeave));
	return ATMO_Status_Success;
    
}


ATMO_Status_t CO2_Pag_onLeave(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t CO2_Pag_setLabel(ATMO_Value_t *in, ATMO_Value_t *out) {

    char label[32];
    if(ATMO_GetString(in, label, 32) == ATMO_Status_Success)
    {
        ATMO_UI_SINGLEICONTEXT_SetMainText(ATMO_VARIABLE(CO2_Pag,pageHandle), label);
    }
    else
    {
        return ATMO_Status_Fail;
    }

    return ATMO_Status_Success;
    
}


ATMO_Status_t CO2Characteristic_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t CO2Characteristic_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_BLE_GATTSAddService(
		ATMO_PROPERTY(CO2Characteristic, instance),
		&ATMO_VARIABLE(CO2Characteristic, bleServiceHandle), 
		ATMO_PROPERTY(CO2Characteristic, bleServiceUuid));
	
	uint8_t property = 0;
	uint8_t permission = 0;
	
	property |= ATMO_PROPERTY(CO2Characteristic, read) ? ATMO_BLE_Property_Read : 0;
	property |= ATMO_PROPERTY(CO2Characteristic, write) ? ATMO_BLE_Property_Write : 0;
	property |= ATMO_PROPERTY(CO2Characteristic, notify) ? ATMO_BLE_Property_Notify : 0;

	permission |= ATMO_PROPERTY(CO2Characteristic, read) ? ATMO_BLE_Permission_Read : 0;
	permission |= ATMO_PROPERTY(CO2Characteristic, write) ? ATMO_BLE_Permission_Write : 0;

	ATMO_DATATYPE types[3] = {ATMO_PROPERTY(CO2Characteristic, writeDataType), ATMO_PROPERTY(CO2Characteristic, readDataType), ATMO_PROPERTY(CO2Characteristic, notifyDataType)};
	
	ATMO_BLE_GATTSAddCharacteristic(
		ATMO_PROPERTY(CO2Characteristic, instance),
		&ATMO_VARIABLE(CO2Characteristic, bleCharacteristicHandle), 
		ATMO_VARIABLE(CO2Characteristic, bleServiceHandle), 
		ATMO_PROPERTY(CO2Characteristic, bleCharacteristicUuid), 
		property, permission, ATMO_GetMaxValueSize(3, 64, types));
	
	ATMO_BLE_GATTSRegisterCharacteristicAbilityHandle(
		ATMO_PROPERTY(CO2Characteristic, instance),
		ATMO_VARIABLE(CO2Characteristic, bleCharacteristicHandle), 
		ATMO_BLE_Characteristic_Written, 
		ATMO_ABILITY(CO2Characteristic, written));
	
	return ATMO_Status_Success;
	
}


ATMO_Status_t CO2Characteristic_setValue(ATMO_Value_t *in, ATMO_Value_t *out) {

	
	// Convert to the desired write data type
	ATMO_Value_t convertedValue;
	ATMO_InitValue(&convertedValue);
	ATMO_CreateValueConverted(&convertedValue, ATMO_PROPERTY(CO2Characteristic, readDataType), in);

	ATMO_BLE_GATTSSetCharacteristic(
		ATMO_PROPERTY(CO2Characteristic, instance),
		ATMO_VARIABLE(CO2Characteristic, bleCharacteristicHandle),
		convertedValue.size, 
		(uint8_t *)convertedValue.data,
		NULL);
	
	ATMO_FreeValue(&convertedValue);
		
	return ATMO_Status_Success;
	
}


ATMO_Status_t CO2Characteristic_written(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_CreateValueConverted(out, ATMO_PROPERTY(CO2Characteristic, writeDataType), in);
	return ATMO_Status_Success;
	
}


ATMO_Status_t CO2Characteristic_subscibed(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t CO2Characteristic_unsubscribed(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t EmbeddedNxpRpkUserButtons_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t EmbeddedNxpRpkUserButtons_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

    ATMO_MK64F_GPIO_EnableResetCombo(ATMO_PROPERTY(EmbeddedNxpRpkUserButtons, enableResetCombo));
    ATMO_MK64F_GPIO_EnableDisplayToggleCombo(ATMO_PROPERTY(EmbeddedNxpRpkUserButtons, enableDisplayToggleCombo));
    ATMO_MK64F_UserButton_RegisterAbilityHandle(ATMO_MK64F_SW1_Pushed, ATMO_ABILITY(EmbeddedNxpRpkUserButtons, topRightPushed));
    ATMO_MK64F_UserButton_RegisterAbilityHandle(ATMO_MK64F_SW2_Pushed, ATMO_ABILITY(EmbeddedNxpRpkUserButtons, bottomRightPushed));
    ATMO_MK64F_UserButton_RegisterAbilityHandle(ATMO_MK64F_SW3_Pushed, ATMO_ABILITY(EmbeddedNxpRpkUserButtons, topLeftPushed));
    ATMO_MK64F_UserButton_RegisterAbilityHandle(ATMO_MK64F_SW4_Pushed, ATMO_ABILITY(EmbeddedNxpRpkUserButtons, bottomLeftPushed));
	return ATMO_Status_Success;
	
}


ATMO_Status_t EmbeddedNxpRpkUserButtons_topRightPushed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
    
}


ATMO_Status_t EmbeddedNxpRpkUserButtons_bottomRightPushed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
    
}


ATMO_Status_t EmbeddedNxpRpkUserButtons_topLeftPushed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
    
}


ATMO_Status_t EmbeddedNxpRpkUserButtons_bottomLeftPushed(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
    
}


ATMO_Status_t EmbeddedNxpRpkBacklight_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t EmbeddedNxpRpkBacklight_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

    Backlight_SetLevel(ATMO_PROPERTY(EmbeddedNxpRpkBacklight, initialSetting));
	return ATMO_Status_Success;
	
}


ATMO_Status_t EmbeddedNxpRpkBacklight_setBacklightOff(ATMO_Value_t *in, ATMO_Value_t *out) {

    Backlight_SetLevel(BLIGHT_LEVEL_OFF);
	return ATMO_Status_Success;
    
}


ATMO_Status_t EmbeddedNxpRpkBacklight_setBacklightLow(ATMO_Value_t *in, ATMO_Value_t *out) {

    Backlight_SetLevel(BLIGHT_LEVEL_LOW);
	return ATMO_Status_Success;
	
}


ATMO_Status_t EmbeddedNxpRpkBacklight_setBacklightMedium(ATMO_Value_t *in, ATMO_Value_t *out) {

    Backlight_SetLevel(BLIGHT_LEVEL_MEDIUM);
	return ATMO_Status_Success;
    
}


ATMO_Status_t EmbeddedNxpRpkBacklight_setBacklightHigh(ATMO_Value_t *in, ATMO_Value_t *out) {

    Backlight_SetLevel(BLIGHT_LEVEL_HIGH);
	return ATMO_Status_Success;
	
}


ATMO_Status_t Interval1_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t Interval1_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_INTERVAL_Handle_t intervalHandle;
    ATMO_INTERVAL_AddAbilityInterval(
		ATMO_PROPERTY(Interval1, instance), 
		ATMO_ABILITY(Interval1, interval), 
		ATMO_PROPERTY(Interval1, time), 
		&intervalHandle
	);
	
	return ATMO_Status_Success;
	
}


ATMO_Status_t Interval1_interval(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t EmbeddedComparison_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t EmbeddedComparison_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t EmbeddedComparison_evaluate(ATMO_Value_t *in, ATMO_Value_t *out) {

	bool conditionTrue = false;

	// Convert property to same type as input
	ATMO_Value_t targetStr;
	ATMO_Value_t targetNum;
	
	ATMO_InitValue(&targetStr);
	ATMO_InitValue(&targetNum);
	ATMO_CreateValueString(&targetStr, ATMO_PROPERTY(EmbeddedComparison, target));
	ATMO_CreateValueConverted(&targetNum, in->type, &targetStr);
	
	if(ATMO_CompareValues(in, &targetNum, ATMO_PROPERTY(EmbeddedComparison, condition), &conditionTrue) != ATMO_Status_Success)
	{
		ATMO_Value_t value;
		ATMO_InitValue(&value);
		ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedComparison, invalidType), NULL);
		ATMO_FreeValue(&value);
		ATMO_FreeValue(&targetStr);
		ATMO_FreeValue(&targetNum);
		return ATMO_Status_Fail;
	}

	ATMO_FreeValue(&targetStr);
	ATMO_FreeValue(&targetNum);

	if(conditionTrue)
	{
		ATMO_Value_t value;
		ATMO_InitValue(&value);
		ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedComparison, conditionTrue), NULL);
		ATMO_FreeValue(&value);		
	}
	else
	{
		ATMO_Value_t value;
		ATMO_InitValue(&value);
		ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedComparison, conditionFalse), NULL);
		ATMO_FreeValue(&value);			
	}

	return ATMO_Status_Success;
	
}


ATMO_Status_t EmbeddedNxpRpkRgbLed_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t EmbeddedNxpRpkRgbLed_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

    RGB_Led_Set_State(RGB_LED_BRIGHT_HIGH, RGB_LED_COLOR_BLACK);
	return ATMO_Status_Success;
	
}


ATMO_Status_t EmbeddedNxpRpkRgbLed_setColorPreset(ATMO_Value_t *in, ATMO_Value_t *out) {

    unsigned int desiredColor = 0;
    ATMO_GetUnsignedInt(in, &desiredColor);

    uint8_t brightness = 0;
    uint8_t color = 0;
    RGB_Led_Get_State(&brightness, &color);
    RGB_Led_Set_State(brightness, desiredColor);
    return ATMO_Status_Success;
    
}


ATMO_Status_t EmbeddedNxpRpkRgbLed_setBrightnessLow(ATMO_Value_t *in, ATMO_Value_t *out) {

    uint8_t brightness = 0;
    uint8_t color = 0;
    RGB_Led_Get_State(&brightness, &color);
    RGB_Led_Set_State(RGB_LED_BRIGHT_LOW, color);
    return ATMO_Status_Success;
    
}


ATMO_Status_t EmbeddedNxpRpkRgbLed_setBrightnessOff(ATMO_Value_t *in, ATMO_Value_t *out) {

    uint8_t brightness = 0;
    uint8_t color = 0;
    RGB_Led_Get_State(&brightness, &color);
    RGB_Led_Set_State(RGB_LED_BRIGHT_OFF, color);
    return ATMO_Status_Success;
    
}


ATMO_Status_t EmbeddedNxpRpkRgbLed_setBrightnessMedium(ATMO_Value_t *in, ATMO_Value_t *out) {

    uint8_t brightness = 0;
    uint8_t color = 0;
    RGB_Led_Get_State(&brightness, &color);
    RGB_Led_Set_State(RGB_LED_BRIGHT_MEDIUM, color);
    return ATMO_Status_Success;
    
}


ATMO_Status_t EmbeddedNxpRpkRgbLed_setBrightnessHigh(ATMO_Value_t *in, ATMO_Value_t *out) {

    uint8_t brightness = 0;
    uint8_t color = 0;
    RGB_Led_Get_State(&brightness, &color);
    RGB_Led_Set_State(RGB_LED_BRIGHT_HIGH, color);
    return ATMO_Status_Success;
    
}


ATMO_Status_t EmbeddedNxpRpkRgbLed_setRedOn(ATMO_Value_t *in, ATMO_Value_t *out) {

    RGB_Led_Set_State(RGB_LED_BRIGHT_HIGH, RGB_LED_COLOR_RED);
	return ATMO_Status_Success;
    
}


ATMO_Status_t EmbeddedNxpRpkRgbLed_setGreenOn(ATMO_Value_t *in, ATMO_Value_t *out) {

    RGB_Led_Set_State(RGB_LED_BRIGHT_HIGH, RGB_LED_COLOR_GREEN);
	return ATMO_Status_Success;
    
}


ATMO_Status_t EmbeddedNxpRpkRgbLed_setBlueOn(ATMO_Value_t *in, ATMO_Value_t *out) {

    RGB_Led_Set_State(RGB_LED_BRIGHT_HIGH, RGB_LED_COLOR_BLUE);
	return ATMO_Status_Success;
    
}


ATMO_Status_t EmbeddedNxpRpkRgbLed_setWhiteOn(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t EmbeddedNxpRpkRgbLed_toggleRed(ATMO_Value_t *in, ATMO_Value_t *out) {

	uint8_t color, brightness;
    RGB_Led_Get_State(&brightness, &color);
    if(brightness == RGB_LED_BRIGHT_OFF || color == RGB_LED_COLOR_BLACK)
    {
        brightness = RGB_LED_BRIGHT_HIGH;
    }
    else
    {
        brightness = RGB_LED_BRIGHT_OFF;
    }

    RGB_Led_Set_State(brightness, RGB_LED_COLOR_RED);
    return ATMO_Status_Success;
	
}


ATMO_Status_t EmbeddedNxpRpkRgbLed_toggleGreen(ATMO_Value_t *in, ATMO_Value_t *out) {

	uint8_t color, brightness;
    RGB_Led_Get_State(&brightness, &color);
    if(brightness == RGB_LED_BRIGHT_OFF || color == RGB_LED_COLOR_BLACK)
    {
        brightness = RGB_LED_BRIGHT_HIGH;
    }
    else
    {
        brightness = RGB_LED_BRIGHT_OFF;
    }

    RGB_Led_Set_State(brightness, RGB_LED_COLOR_GREEN);
    return ATMO_Status_Success;
	
}


ATMO_Status_t EmbeddedNxpRpkRgbLed_toggleBlue(ATMO_Value_t *in, ATMO_Value_t *out) {

	uint8_t color, brightness;
    RGB_Led_Get_State(&brightness, &color);
    if(brightness == RGB_LED_BRIGHT_OFF || color == RGB_LED_COLOR_BLACK)
    {
        brightness = RGB_LED_BRIGHT_HIGH;
    }
    else
    {
        brightness = RGB_LED_BRIGHT_OFF;
    }

    RGB_Led_Set_State(brightness, RGB_LED_COLOR_BLUE);
    return ATMO_Status_Success;
	
}


ATMO_Status_t EmbeddedNxpRpkRgbLed_setOff(ATMO_Value_t *in, ATMO_Value_t *out) {

    uint8_t color, brightness;
    RGB_Led_Get_State(&brightness, &color);
    RGB_Led_Set_State(brightness, RGB_LED_COLOR_BLACK);
	return ATMO_Status_Success;
    
}


ATMO_Status_t EmbeddedNxpRpkRgbLed_setColorHex(ATMO_Value_t *in, ATMO_Value_t *out) {

    unsigned int color = 0;
    ATMO_GetUnsignedInt(in, &color);
    uint8_t red = (color >> 16) & 0xFF;
    uint8_t green = (color >> 8) & 0xFF;
    uint8_t blue = color & 0xFF;
    Rgb_Led_Set_Colors(red, green, blue);  
    ATMO_CreateValueUnsignedInt(out, color);
	return ATMO_Status_Success;
    
}


ATMO_Status_t EmbeddedComparison1_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t EmbeddedComparison1_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

	return ATMO_Status_Success;
	
}


ATMO_Status_t EmbeddedComparison1_evaluate(ATMO_Value_t *in, ATMO_Value_t *out) {

	bool conditionTrue = false;

	// Convert property to same type as input
	ATMO_Value_t targetStr;
	ATMO_Value_t targetNum;
	
	ATMO_InitValue(&targetStr);
	ATMO_InitValue(&targetNum);
	ATMO_CreateValueString(&targetStr, ATMO_PROPERTY(EmbeddedComparison1, target));
	ATMO_CreateValueConverted(&targetNum, in->type, &targetStr);
	
	if(ATMO_CompareValues(in, &targetNum, ATMO_PROPERTY(EmbeddedComparison1, condition), &conditionTrue) != ATMO_Status_Success)
	{
		ATMO_Value_t value;
		ATMO_InitValue(&value);
		ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedComparison1, invalidType), NULL);
		ATMO_FreeValue(&value);
		ATMO_FreeValue(&targetStr);
		ATMO_FreeValue(&targetNum);
		return ATMO_Status_Fail;
	}

	ATMO_FreeValue(&targetStr);
	ATMO_FreeValue(&targetNum);

	if(conditionTrue)
	{
		ATMO_Value_t value;
		ATMO_InitValue(&value);
		ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedComparison1, conditionTrue), NULL);
		ATMO_FreeValue(&value);		
	}
	else
	{
		ATMO_Value_t value;
		ATMO_InitValue(&value);
		ATMO_TriggerHandler(ATMO_TRIGGER(EmbeddedComparison1, conditionFalse), NULL);
		ATMO_FreeValue(&value);			
	}

	return ATMO_Status_Success;
	
}


ATMO_Status_t EmbeddedNxpRpkRgbLed1_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t EmbeddedNxpRpkRgbLed1_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

    RGB_Led_Set_State(RGB_LED_BRIGHT_HIGH, RGB_LED_COLOR_BLACK);
	return ATMO_Status_Success;
	
}


ATMO_Status_t EmbeddedNxpRpkRgbLed1_setColorPreset(ATMO_Value_t *in, ATMO_Value_t *out) {

    unsigned int desiredColor = 0;
    ATMO_GetUnsignedInt(in, &desiredColor);

    uint8_t brightness = 0;
    uint8_t color = 0;
    RGB_Led_Get_State(&brightness, &color);
    RGB_Led_Set_State(brightness, desiredColor);
    return ATMO_Status_Success;
    
}


ATMO_Status_t EmbeddedNxpRpkRgbLed1_setBrightnessLow(ATMO_Value_t *in, ATMO_Value_t *out) {

    uint8_t brightness = 0;
    uint8_t color = 0;
    RGB_Led_Get_State(&brightness, &color);
    RGB_Led_Set_State(RGB_LED_BRIGHT_LOW, color);
    return ATMO_Status_Success;
    
}


ATMO_Status_t EmbeddedNxpRpkRgbLed1_setBrightnessOff(ATMO_Value_t *in, ATMO_Value_t *out) {

    uint8_t brightness = 0;
    uint8_t color = 0;
    RGB_Led_Get_State(&brightness, &color);
    RGB_Led_Set_State(RGB_LED_BRIGHT_OFF, color);
    return ATMO_Status_Success;
    
}


ATMO_Status_t EmbeddedNxpRpkRgbLed1_setBrightnessMedium(ATMO_Value_t *in, ATMO_Value_t *out) {

    uint8_t brightness = 0;
    uint8_t color = 0;
    RGB_Led_Get_State(&brightness, &color);
    RGB_Led_Set_State(RGB_LED_BRIGHT_MEDIUM, color);
    return ATMO_Status_Success;
    
}


ATMO_Status_t EmbeddedNxpRpkRgbLed1_setBrightnessHigh(ATMO_Value_t *in, ATMO_Value_t *out) {

    uint8_t brightness = 0;
    uint8_t color = 0;
    RGB_Led_Get_State(&brightness, &color);
    RGB_Led_Set_State(RGB_LED_BRIGHT_HIGH, color);
    return ATMO_Status_Success;
    
}


ATMO_Status_t EmbeddedNxpRpkRgbLed1_setRedOn(ATMO_Value_t *in, ATMO_Value_t *out) {

    RGB_Led_Set_State(RGB_LED_BRIGHT_HIGH, RGB_LED_COLOR_RED);
	return ATMO_Status_Success;
    
}


ATMO_Status_t EmbeddedNxpRpkRgbLed1_setGreenOn(ATMO_Value_t *in, ATMO_Value_t *out) {

    RGB_Led_Set_State(RGB_LED_BRIGHT_HIGH, RGB_LED_COLOR_GREEN);
	return ATMO_Status_Success;
    
}


ATMO_Status_t EmbeddedNxpRpkRgbLed1_setBlueOn(ATMO_Value_t *in, ATMO_Value_t *out) {

    RGB_Led_Set_State(RGB_LED_BRIGHT_HIGH, RGB_LED_COLOR_BLUE);
	return ATMO_Status_Success;
    
}


ATMO_Status_t EmbeddedNxpRpkRgbLed1_setWhiteOn(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t EmbeddedNxpRpkRgbLed1_toggleRed(ATMO_Value_t *in, ATMO_Value_t *out) {

	uint8_t color, brightness;
    RGB_Led_Get_State(&brightness, &color);
    if(brightness == RGB_LED_BRIGHT_OFF || color == RGB_LED_COLOR_BLACK)
    {
        brightness = RGB_LED_BRIGHT_HIGH;
    }
    else
    {
        brightness = RGB_LED_BRIGHT_OFF;
    }

    RGB_Led_Set_State(brightness, RGB_LED_COLOR_RED);
    return ATMO_Status_Success;
	
}


ATMO_Status_t EmbeddedNxpRpkRgbLed1_toggleGreen(ATMO_Value_t *in, ATMO_Value_t *out) {

	uint8_t color, brightness;
    RGB_Led_Get_State(&brightness, &color);
    if(brightness == RGB_LED_BRIGHT_OFF || color == RGB_LED_COLOR_BLACK)
    {
        brightness = RGB_LED_BRIGHT_HIGH;
    }
    else
    {
        brightness = RGB_LED_BRIGHT_OFF;
    }

    RGB_Led_Set_State(brightness, RGB_LED_COLOR_GREEN);
    return ATMO_Status_Success;
	
}


ATMO_Status_t EmbeddedNxpRpkRgbLed1_toggleBlue(ATMO_Value_t *in, ATMO_Value_t *out) {

	uint8_t color, brightness;
    RGB_Led_Get_State(&brightness, &color);
    if(brightness == RGB_LED_BRIGHT_OFF || color == RGB_LED_COLOR_BLACK)
    {
        brightness = RGB_LED_BRIGHT_HIGH;
    }
    else
    {
        brightness = RGB_LED_BRIGHT_OFF;
    }

    RGB_Led_Set_State(brightness, RGB_LED_COLOR_BLUE);
    return ATMO_Status_Success;
	
}


ATMO_Status_t EmbeddedNxpRpkRgbLed1_setOff(ATMO_Value_t *in, ATMO_Value_t *out) {

    uint8_t color, brightness;
    RGB_Led_Get_State(&brightness, &color);
    RGB_Led_Set_State(brightness, RGB_LED_COLOR_BLACK);
	return ATMO_Status_Success;
    
}


ATMO_Status_t EmbeddedNxpRpkRgbLed1_setColorHex(ATMO_Value_t *in, ATMO_Value_t *out) {

    unsigned int color = 0;
    ATMO_GetUnsignedInt(in, &color);
    uint8_t red = (color >> 16) & 0xFF;
    uint8_t green = (color >> 8) & 0xFF;
    uint8_t blue = color & 0xFF;
    Rgb_Led_Set_Colors(red, green, blue);  
    ATMO_CreateValueUnsignedInt(out, color);
	return ATMO_Status_Success;
    
}


ATMO_Status_t Interval2_trigger(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}


ATMO_Status_t Interval2_setup(ATMO_Value_t *in, ATMO_Value_t *out) {

	ATMO_INTERVAL_Handle_t intervalHandle;
    ATMO_INTERVAL_AddAbilityInterval(
		ATMO_PROPERTY(Interval2, instance), 
		ATMO_ABILITY(Interval2, interval), 
		ATMO_PROPERTY(Interval2, time), 
		&intervalHandle
	);
	
	return ATMO_Status_Success;
	
}


ATMO_Status_t Interval2_interval(ATMO_Value_t *in, ATMO_Value_t *out) {
	return ATMO_Status_Success;
}

//FOOTER START

//FOOTER END

