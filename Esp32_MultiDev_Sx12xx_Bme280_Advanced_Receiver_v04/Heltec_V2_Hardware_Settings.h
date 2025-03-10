/**
* This are the hardware definitions for a
* Heltec WiFi LoRa 32 V2 Development board
* The board has onboard a LoRa module 'SX1276', an OLED display with 128 * 64 px and an LED
* Additionally the board has a battery connector with included voltage metering and the
* possibility to shut down external devices by setting the 3.3 power to off.
*/

// LoRa module
#define SX_NSS 18      // select pin on LoRa device
#define SX_SCK 5       // SCK on SPI3
#define SX_MISO 19     // MISO on SPI3 
#define SX_MOSI 27     // MOSI on SPI3 
#define SX_NRESET 14   // reset pin on LoRa device
#define SX_RFBUSY -1   // busy line, not available
#define SX_DIO0 26     // DIO0 pin on LoRa device, used for RX and TX done 
#define LORA_DEVICE DEVICE_SX1276 // we need to define the device we are using

// OLED module
#define IS_OLED // uncomment this if not included
#define OLED_I2C_ADDRESS 0x3C
#define OLED_I2C_SDA_PIN 4
#define OLED_I2C_SCL_PIN 15
#define OLED_I2C_RST_PIN 16 // set this to -1 if the OLED display has no RST terminal connected

// LED, if no LED is attached or unwanted set this to -1
#define LED_PIN 25     // on board LED, high for on

// BOOT or USR or PRG button pin or any other button attached to the device
#define BOOT_BUTTON_PIN 0

// Buzzer
#define BUZZER_PIN -1   // pin for buzzer, set to -1 if not used 

// Control external power
#define IS_VEXT_CONTROL // uncomment this if not available
#define VEXT_POWER_CONTROL_PIN 21 // pin controls power to external devices

#define IS_BATTERY_MANAGEMENT
#define BATTERY_VOLTAGE_ADC_MEASURE_CONTROL_PIN 21 // pin controls the measuring of the battery voltage
#define BATTERY_VOLTAGE_ADC_PIN 37 // adc pin to measure the battery voltage, on V2 boards it is GPIO 13 !


// BME280 temperature, humidity and barometric air pressure sensor
//#define IS_BME280
// a note on the PIN definitions: usually you will use the same I2C pins as used for the display
#define BME280_I2C_SDA_PIN 4
#define BME280_I2C_SCL_PIN 15

// NEO-6M GPS module
//#define IS_NEO_6M
#define NEO6M_GPS_RX_PIN 12 // The GPS board has an RX terminal - connect it with GPIO 12
#define NEO6M_GPS_TX_PIN 13 // The GPS board has a  TX terminal - connect it with GPIO 13
