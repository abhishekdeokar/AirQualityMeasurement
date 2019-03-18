/*
 * ndef_message.h
 *
 *  Created on: 13.08.2014
 *      Author: NXP67729
 */

/*Default NDEF message: SmartPoster
 * Title: NTAG I2C Explorer
 * Link: http://www.nxp.com/demoboard/OM5569
 */
static const uint8_t Default_NDEF_Message[] = {
		0x03, 0x63, 0x91, 0x02,
		0x35, 0x53, 0x70, 0x91,
		0x01, 0x14, 0x54, 0x02,
		0x65, 0x6E, 0x4E, 0x54,
		0x41, 0x47, 0x20, 0x49,
		0x32, 0x43, 0x20, 0x45,
		0x58, 0x50, 0x4C, 0x4F,
		0x52, 0x45, 0x52, 0x51,
		0x01, 0x19, 0x55, 0x01,
		0x6E, 0x78, 0x70, 0x2E,
		0x63, 0x6F, 0x6D, 0x2F,
		0x64, 0x65, 0x6D, 0x6F,
		0x62, 0x6F, 0x61, 0x72,
		0x64, 0x2F, 0x4F, 0x4D,
		0x35, 0x35, 0x36, 0x39,
		0x54, 0x0F, 0x17, 0x61,
		0x6E, 0x64, 0x72, 0x6F,
		0x69, 0x64, 0x2E, 0x63,
		0x6F, 0x6D, 0x3A, 0x70,
		0x6B, 0x67, 0x63, 0x6F,
		0x6D, 0x2E, 0x6E, 0x78,
		0x70, 0x2E, 0x6E, 0x74,
		0x61, 0x67, 0x69, 0x32,
		0x63, 0x64, 0x65, 0x6D,
		0x6F, 0x5F, 0x64, 0x65,
		0x76, 0xFE};

static const uint8_t Default_BeginingOfMemory[] = {
		0xAA, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00,
		0xE1, 0x10, 0x6D, 0x00,
		0x03, 0x5F, 0x91, 0x02,
		0x35, 0x53, 0x70, 0x91,
		0x01, 0x14, 0x54, 0x02,
		0x65, 0x6E, 0x4E, 0x54,
		0x41, 0x47, 0x20, 0x49,
		0x32, 0x43, 0x20, 0x45,
		0x58, 0x50, 0x4C, 0x4F,
		0x52, 0x45, 0x52, 0x51,
		0x01, 0x19, 0x55, 0x01,
		0x6E, 0x78, 0x70, 0x2E,
		0x63, 0x6F, 0x6D, 0x2F,
		0x64, 0x65, 0x6D, 0x6F,
		0x62, 0x6F, 0x61, 0x72,
		0x64, 0x2F, 0x4F, 0x4D,
		0x35, 0x35, 0x36, 0x39,
		0x54, 0x0F, 0x13, 0x61,
		0x6E, 0x64, 0x72, 0x6F,
		0x69, 0x64, 0x2E, 0x63,
		0x6F, 0x6D, 0x3A, 0x70,
		0x6B, 0x67, 0x63, 0x6F,
		0x6D, 0x2E, 0x6E, 0x78,
		0x70, 0x2E, 0x6E, 0x74,
		0x61, 0x67, 0x69, 0x32,
		0x63, 0x64, 0x65, 0x6D,
		0x6F, 0xFE, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00};

static const uint8_t Null_Block[] = {
		0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00};

static const uint8_t Default_Page_56[] = {
		0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0xFF};

static const uint8_t Default_Page_57[] = {
		0x00, 0x00, 0x00, 0x00,
		0xFF, 0xFF, 0xFF, 0xFF,
		0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00};

static const uint8_t Default_Page_58[] = {
		0x01, 0x00, 0xF8, 0x48,
		0x08, 0x01, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00,
		0x00, 0x00, 0x00, 0x00};

static const uint32_t Default_NDEF_Message_length = sizeof(Default_NDEF_Message);
static const uint32_t Default_BeginingOfMemory_length = sizeof(Default_BeginingOfMemory);
static const uint32_t Null_Block_length = sizeof(Null_Block);
static const uint32_t Default_Page_56_length = sizeof(Default_Page_56);
static const uint32_t Default_Page_57_length = sizeof(Default_Page_57);
static const uint32_t Default_Page_58_length = sizeof(Default_Page_58);
