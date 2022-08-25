// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using std::isnan;
using std::min;
using std::max;
using namespace binary_sensor;
using namespace switch_;
using namespace light;
logger::Logger *logger_logger;
wifi::WiFiComponent *wifi_wificomponent;
mdns::MDNSComponent *mdns_mdnscomponent;
ota::OTAComponent *ota_otacomponent;
api::APIServer *api_apiserver;
using namespace api;
using namespace sensor;
preferences::IntervalSyncer *preferences_intervalsyncer;
gpio::GPIOBinarySensor *gpio_gpiobinarysensor;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin;
status::StatusBinarySensor *status_statusbinarysensor;
gpio::GPIOSwitch *gpio_gpioswitch;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin_2;
using namespace output;
esp8266_pwm::ESP8266PWM *pow_sw2_green_led;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin_3;
monochromatic::MonochromaticLightOutput *monochromatic_monochromaticlightoutput;
light::LightState *light_lightstate;
using namespace uart;
uart::ESP8266UartComponent *uart_esp8266uartcomponent;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin_4;
cse7766::CSE7766Component *cse7766_cse7766component;
sensor::Sensor *sensor_sensor_2;
sensor::Sensor *sensor_sensor;
sensor::Sensor *sensor_sensor_3;
const uint8_t ESPHOME_ESP8266_GPIO_INITIAL_MODE[16] = {INPUT_PULLUP, 255, 255, INPUT, 255, 255, 255, 255, 255, 255, 255, 255, OUTPUT, OUTPUT, 255, 255};
const uint8_t ESPHOME_ESP8266_GPIO_INITIAL_LEVEL[16] = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 0, 1, 255, 255};
#define yield() esphome::yield()
#define millis() esphome::millis()
#define micros() esphome::micros()
#define delay(x) esphome::delay(x)
#define delayMicroseconds(x) esphome::delayMicroseconds(x)
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ========== AUTO GENERATED CODE BEGIN ===========
  // esp8266:
  //   board_flash_mode: dout
  //   board: esp01_1m
  //   framework:
  //     version: 3.0.2
  //     source: ~3.30002.0
  //     platform_version: platformio/espressif8266 @ 3.2.0
  //   restore_from_flash: false
  //   early_pin_init: true
  esphome::esp8266::setup_preferences();
  // esphome:
  //   name: esphome_pow_sw2
  //   build_path: .esphome/build/esphome_pow_sw2
  //   platformio_options: {}
  //   includes: []
  //   libraries: []
  //   name_add_mac_suffix: false
  App.pre_setup("esphome_pow_sw2", __DATE__ ", " __TIME__, false);
  // binary_sensor:
  // switch:
  // light:
  // logger:
  //   baud_rate: 0
  //   id: logger_logger
  //   tx_buffer_size: 512
  //   deassert_rts_dtr: false
  //   hardware_uart: UART0
  //   level: DEBUG
  //   logs: {}
  //   esp8266_store_log_strings_in_flash: true
  logger_logger = new logger::Logger(0, 512, logger::UART_SELECTION_UART0);
  logger_logger->pre_setup();
  logger_logger->set_component_source("logger");
  App.register_component(logger_logger);
  // wifi:
  //   manual_ip:
  //     static_ip: 192.168.0.37
  //     gateway: !secret 'wifi_gateway'
  //     subnet: 255.255.255.0
  //     dns1: 0.0.0.0
  //     dns2: 0.0.0.0
  //   id: wifi_wificomponent
  //   domain: .local
  //   reboot_timeout: 15min
  //   power_save_mode: NONE
  //   fast_connect: false
  //   output_power: 20.0
  //   networks:
  //   - ssid: !secret 'wifi_ssid_wlan'
  //     password: !secret 'wifi_pwd'
  //     id: wifi_wifiap
  //     priority: 0.0
  //   use_address: 192.168.0.37
  wifi_wificomponent = new wifi::WiFiComponent();
  wifi_wificomponent->set_use_address("192.168.0.37");
  wifi::WiFiAP wifi_wifiap = wifi::WiFiAP();
  wifi_wifiap.set_ssid("WLAN.alvarea.net");
  wifi_wifiap.set_password("3286202581200");
  wifi_wifiap.set_manual_ip(wifi::ManualIP{
      .static_ip = network::IPAddress(192, 168, 0, 37),
      .gateway = network::IPAddress(192, 168, 0, 1),
      .subnet = network::IPAddress(255, 255, 255, 0),
      .dns1 = network::IPAddress(0, 0, 0, 0),
      .dns2 = network::IPAddress(0, 0, 0, 0),
  });
  wifi_wifiap.set_priority(0.0f);
  wifi_wificomponent->add_sta(wifi_wifiap);
  wifi_wificomponent->set_reboot_timeout(900000);
  wifi_wificomponent->set_power_save_mode(wifi::WIFI_POWER_SAVE_NONE);
  wifi_wificomponent->set_fast_connect(false);
  wifi_wificomponent->set_output_power(20.0f);
  wifi_wificomponent->set_component_source("wifi");
  App.register_component(wifi_wificomponent);
  // mdns:
  //   id: mdns_mdnscomponent
  //   disabled: false
  mdns_mdnscomponent = new mdns::MDNSComponent();
  mdns_mdnscomponent->set_component_source("mdns");
  App.register_component(mdns_mdnscomponent);
  // ota:
  //   id: ota_otacomponent
  //   safe_mode: true
  //   port: 8266
  //   reboot_timeout: 5min
  //   num_attempts: 10
  ota_otacomponent = new ota::OTAComponent();
  ota_otacomponent->set_port(8266);
  ota_otacomponent->set_component_source("ota");
  App.register_component(ota_otacomponent);
  if (ota_otacomponent->should_enter_safe_mode(10, 300000)) return;
  // api:
  //   id: api_apiserver
  //   port: 6053
  //   password: ''
  //   reboot_timeout: 15min
  api_apiserver = new api::APIServer();
  api_apiserver->set_component_source("api");
  App.register_component(api_apiserver);
  api_apiserver->set_port(6053);
  api_apiserver->set_password("");
  api_apiserver->set_reboot_timeout(900000);
  // sensor:
  // preferences:
  //   id: preferences_intervalsyncer
  //   flash_write_interval: 60s
  preferences_intervalsyncer = new preferences::IntervalSyncer();
  preferences_intervalsyncer->set_write_interval(60000);
  preferences_intervalsyncer->set_component_source("preferences");
  App.register_component(preferences_intervalsyncer);
  // binary_sensor.gpio:
  //   platform: gpio
  //   pin:
  //     number: 0
  //     mode:
  //       input: true
  //       pullup: true
  //       analog: false
  //       output: false
  //       open_drain: false
  //       pulldown: false
  //     inverted: true
  //     id: esphome_esp8266_esp8266gpiopin
  //   name: esphome pow sw2 boton
  //   disabled_by_default: false
  //   id: gpio_gpiobinarysensor
  gpio_gpiobinarysensor = new gpio::GPIOBinarySensor();
  App.register_binary_sensor(gpio_gpiobinarysensor);
  gpio_gpiobinarysensor->set_name("esphome pow sw2 boton");
  gpio_gpiobinarysensor->set_disabled_by_default(false);
  gpio_gpiobinarysensor->set_component_source("gpio.binary_sensor");
  App.register_component(gpio_gpiobinarysensor);
  esphome_esp8266_esp8266gpiopin = new esphome::esp8266::ESP8266GPIOPin();
  esphome_esp8266_esp8266gpiopin->set_pin(0);
  esphome_esp8266_esp8266gpiopin->set_inverted(true);
  esphome_esp8266_esp8266gpiopin->set_flags((gpio::Flags::FLAG_INPUT | gpio::Flags::FLAG_PULLUP));
  gpio_gpiobinarysensor->set_pin(esphome_esp8266_esp8266gpiopin);
  // binary_sensor.status:
  //   platform: status
  //   name: esphome pow sw2 status
  //   disabled_by_default: false
  //   id: status_statusbinarysensor
  //   entity_category: diagnostic
  //   device_class: connectivity
  status_statusbinarysensor = new status::StatusBinarySensor();
  App.register_binary_sensor(status_statusbinarysensor);
  status_statusbinarysensor->set_name("esphome pow sw2 status");
  status_statusbinarysensor->set_disabled_by_default(false);
  status_statusbinarysensor->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  status_statusbinarysensor->set_device_class("connectivity");
  status_statusbinarysensor->set_component_source("status.binary_sensor");
  App.register_component(status_statusbinarysensor);
  // switch.gpio:
  //   platform: gpio
  //   name: esphome pow sw2
  //   pin:
  //     number: 12
  //     mode:
  //       output: true
  //       analog: false
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esphome_esp8266_esp8266gpiopin_2
  //     inverted: false
  //   disabled_by_default: false
  //   id: gpio_gpioswitch
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   interlock_wait_time: 0ms
  gpio_gpioswitch = new gpio::GPIOSwitch();
  gpio_gpioswitch->set_component_source("gpio.switch");
  App.register_component(gpio_gpioswitch);
  App.register_switch(gpio_gpioswitch);
  gpio_gpioswitch->set_name("esphome pow sw2");
  gpio_gpioswitch->set_disabled_by_default(false);
  esphome_esp8266_esp8266gpiopin_2 = new esphome::esp8266::ESP8266GPIOPin();
  esphome_esp8266_esp8266gpiopin_2->set_pin(12);
  esphome_esp8266_esp8266gpiopin_2->set_inverted(false);
  esphome_esp8266_esp8266gpiopin_2->set_flags(gpio::Flags::FLAG_OUTPUT);
  gpio_gpioswitch->set_pin(esphome_esp8266_esp8266gpiopin_2);
  gpio_gpioswitch->set_restore_mode(gpio::GPIO_SWITCH_RESTORE_DEFAULT_OFF);
  // output:
  // output.esp8266_pwm:
  //   platform: esp8266_pwm
  //   id: pow_sw2_green_led
  //   pin:
  //     number: 13
  //     inverted: true
  //     mode:
  //       output: true
  //       analog: false
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esphome_esp8266_esp8266gpiopin_3
  //   zero_means_zero: false
  //   frequency: 1000.0
  pow_sw2_green_led = new esp8266_pwm::ESP8266PWM();
  pow_sw2_green_led->set_component_source("esp8266_pwm.output");
  App.register_component(pow_sw2_green_led);
  pow_sw2_green_led->set_zero_means_zero(false);
  esphome_esp8266_esp8266gpiopin_3 = new esphome::esp8266::ESP8266GPIOPin();
  esphome_esp8266_esp8266gpiopin_3->set_pin(13);
  esphome_esp8266_esp8266gpiopin_3->set_inverted(true);
  esphome_esp8266_esp8266gpiopin_3->set_flags(gpio::Flags::FLAG_OUTPUT);
  pow_sw2_green_led->set_pin(esphome_esp8266_esp8266gpiopin_3);
  pow_sw2_green_led->set_frequency(1000.0f);
  // light.monochromatic:
  //   platform: monochromatic
  //   name: esphome pow sw2 led
  //   output: pow_sw2_green_led
  //   disabled_by_default: false
  //   id: light_lightstate
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   gamma_correct: 2.8
  //   default_transition_length: 1s
  //   flash_transition_length: 0s
  //   output_id: monochromatic_monochromaticlightoutput
  monochromatic_monochromaticlightoutput = new monochromatic::MonochromaticLightOutput();
  light_lightstate = new light::LightState(monochromatic_monochromaticlightoutput);
  App.register_light(light_lightstate);
  light_lightstate->set_component_source("light");
  App.register_component(light_lightstate);
  light_lightstate->set_name("esphome pow sw2 led");
  light_lightstate->set_disabled_by_default(false);
  light_lightstate->set_restore_mode(light::LIGHT_RESTORE_DEFAULT_OFF);
  light_lightstate->set_default_transition_length(1000);
  light_lightstate->set_flash_transition_length(0);
  light_lightstate->set_gamma_correct(2.8f);
  light_lightstate->add_effects({});
  monochromatic_monochromaticlightoutput->set_output(pow_sw2_green_led);
  // uart:
  //   rx_pin:
  //     number: 3
  //     mode:
  //       input: true
  //       analog: false
  //       output: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     id: esphome_esp8266_esp8266gpiopin_4
  //     inverted: false
  //   baud_rate: 4800
  //   id: uart_esp8266uartcomponent
  //   rx_buffer_size: 256
  //   stop_bits: 1
  //   data_bits: 8
  //   parity: NONE
  uart_esp8266uartcomponent = new uart::ESP8266UartComponent();
  uart_esp8266uartcomponent->set_component_source("uart");
  App.register_component(uart_esp8266uartcomponent);
  uart_esp8266uartcomponent->set_baud_rate(4800);
  esphome_esp8266_esp8266gpiopin_4 = new esphome::esp8266::ESP8266GPIOPin();
  esphome_esp8266_esp8266gpiopin_4->set_pin(3);
  esphome_esp8266_esp8266gpiopin_4->set_inverted(false);
  esphome_esp8266_esp8266gpiopin_4->set_flags(gpio::Flags::FLAG_INPUT);
  uart_esp8266uartcomponent->set_rx_pin(esphome_esp8266_esp8266gpiopin_4);
  uart_esp8266uartcomponent->set_rx_buffer_size(256);
  uart_esp8266uartcomponent->set_stop_bits(1);
  uart_esp8266uartcomponent->set_data_bits(8);
  uart_esp8266uartcomponent->set_parity(uart::UART_CONFIG_PARITY_NONE);
  // sensor.cse7766:
  //   platform: cse7766
  //   update_interval: 30s
  //   current:
  //     name: esphome pow sw2 Current
  //     disabled_by_default: false
  //     id: sensor_sensor
  //     force_update: false
  //     unit_of_measurement: A
  //     accuracy_decimals: 2
  //     device_class: current
  //     state_class: measurement
  //   voltage:
  //     name: esphome pow sw2 Voltage
  //     disabled_by_default: false
  //     id: sensor_sensor_2
  //     force_update: false
  //     unit_of_measurement: V
  //     accuracy_decimals: 1
  //     device_class: voltage
  //     state_class: measurement
  //   power:
  //     name: esphome pow sw2 Power
  //     disabled_by_default: false
  //     id: sensor_sensor_3
  //     force_update: false
  //     unit_of_measurement: W
  //     accuracy_decimals: 1
  //     device_class: power
  //     state_class: measurement
  //   id: cse7766_cse7766component
  //   uart_id: uart_esp8266uartcomponent
  cse7766_cse7766component = new cse7766::CSE7766Component();
  cse7766_cse7766component->set_update_interval(30000);
  cse7766_cse7766component->set_component_source("cse7766.sensor");
  App.register_component(cse7766_cse7766component);
  cse7766_cse7766component->set_uart_parent(uart_esp8266uartcomponent);
  sensor_sensor_2 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_2);
  sensor_sensor_2->set_name("esphome pow sw2 Voltage");
  sensor_sensor_2->set_disabled_by_default(false);
  sensor_sensor_2->set_device_class("voltage");
  sensor_sensor_2->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_2->set_unit_of_measurement("V");
  sensor_sensor_2->set_accuracy_decimals(1);
  sensor_sensor_2->set_force_update(false);
  cse7766_cse7766component->set_voltage_sensor(sensor_sensor_2);
  sensor_sensor = new sensor::Sensor();
  App.register_sensor(sensor_sensor);
  sensor_sensor->set_name("esphome pow sw2 Current");
  sensor_sensor->set_disabled_by_default(false);
  sensor_sensor->set_device_class("current");
  sensor_sensor->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor->set_unit_of_measurement("A");
  sensor_sensor->set_accuracy_decimals(2);
  sensor_sensor->set_force_update(false);
  cse7766_cse7766component->set_current_sensor(sensor_sensor);
  sensor_sensor_3 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_3);
  sensor_sensor_3->set_name("esphome pow sw2 Power");
  sensor_sensor_3->set_disabled_by_default(false);
  sensor_sensor_3->set_device_class("power");
  sensor_sensor_3->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_3->set_unit_of_measurement("W");
  sensor_sensor_3->set_accuracy_decimals(1);
  sensor_sensor_3->set_force_update(false);
  cse7766_cse7766component->set_power_sensor(sensor_sensor_3);
  // network:
  //   {}
  // socket:
  //   implementation: lwip_tcp
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
