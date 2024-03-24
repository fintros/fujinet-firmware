/* FujiNet Hardware Pin Mapping */
#ifdef PINMAP_ATARI_XDRIVE

/* SD Card */
#define PIN_CARD_DETECT         GPIO_NUM_8 // fnSystem.h
#define PIN_SD_HOST_CS          GPIO_NUM_10  // fnFsSD.cpp
#define PIN_SD_HOST_MISO        GPIO_NUM_2
#define PIN_SD_HOST_MOSI        GPIO_NUM_7
#define PIN_SD_HOST_SCK         GPIO_NUM_6

/* UART */
#define PIN_UART0_RX            GPIO_NUM_20  // fnUART.cpp
#define PIN_UART0_TX            GPIO_NUM_21
#define PIN_UART1_RX            GPIO_NUM_20
#define PIN_UART1_TX            GPIO_NUM_21
#define PIN_UART2_RX            GPIO_NUM_20
#define PIN_UART2_TX            GPIO_NUM_21

/* Buttons */
#define PIN_BUTTON_A            GPIO_NUM_NC 
#define PIN_BUTTON_B            GPIO_NUM_NC
#define PIN_BUTTON_C            GPIO_NUM_NC

/* LEDs */
#define PIN_LED_WIFI            GPIO_NUM_NC // led.cpp
#define PIN_LED_BUS             GPIO_NUM_NC
#define PIN_LED_BT              GPIO_NUM_NC

/* Atari SIO Pins */
#define PIN_INT                 GPIO_NUM_NC // sio.h
#define PIN_PROC                GPIO_NUM_NC
#define PIN_CKO                 GPIO_NUM_NC
#define PIN_CKI                 GPIO_NUM_NC
#define PIN_MTR                 GPIO_NUM_5
#define PIN_CMD                 GPIO_NUM_4

/* Audio Output */
#define PIN_DAC1                GPIO_NUM_3 // samlib.h

#endif /* PINMAP_ATARI_XDRIVE */
