#ifndef __ATMO_CLOUD_CONFIG_H_
#define __ATMO_CLOUD_CONFIG_H_

#define ATMO_CLOUD_SHIFT (24)

typedef enum {
    ATMO_CLOUD_CONFIG_WIFI_SSID = 0x0,
    ATMO_CLOUD_CONFIG_WIFI_PASS,
    ATMO_CLOUD_CONFIG_SIGFOX_DEVICE_ID,
    ATMO_CLOUD_NUM_CONFIGS,
} ATMO_CLOUD_ProtocolConfig_t;

#define ATMO_CLOUD_CONFIG(PROTOCOL, CONFIG) (ATMO_CLOUD_CONFIG_ ## PROTOCOL ## _ ## CONFIG)


#endif