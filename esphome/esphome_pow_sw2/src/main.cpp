// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using namespace binary_sensor;
using namespace switch_;
using namespace light;
logger::Logger *logger_logger;
wifi::WiFiComponent *wifi_wificomponent;
ota::OTAComponent *ota_otacomponent;
api::APIServer *api_apiserver;
using namespace sensor;
using namespace api;
gpio::GPIOBinarySensor *gpio_gpiobinarysensor;
status::StatusBinarySensor *status_statusbinarysensor;
gpio::GPIOSwitch *gpio_gpioswitch;
using namespace output;
esp8266_pwm::ESP8266PWM *pow_sw2_green_led;
monochromatic::MonochromaticLightOutput *monochromatic_monochromaticlightoutput;
light::LightState *light_lightstate;
using namespace uart;
uart::UARTComponent *uart_uartcomponent;
cse7766::CSE7766Component *cse7766_cse7766component;
sensor::Sensor *sensor_sensor_2;
sensor::Sensor *sensor_sensor;
sensor::Sensor *sensor_sensor_3;
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ===== DO NOT EDIT ANYTHING BELOW THIS LINE =====
  // ========== AUTO GENERATED CODE BEGIN ===========
  // async_tcp:
  // esphome:
  //   name: esphome_pow_sw2
  //   platform: ESP8266
  //   board: esp01_1m
  //   board_flash_mode: dout
  //   arduino_version: espressif8266@2.6.2
  //   build_path: esphome_pow_sw2
  //   platformio_options: {}
  //   esp8266_restore_from_flash: false
  //   includes: []
  //   libraries: []
  App.pre_setup("esphome_pow_sw2", __DATE__ ", " __TIME__);
  // binary_sensor:
  // switch:
  // light:
  // logger:
  //   baud_rate: 0
  //   id: logger_logger
  //   tx_buffer_size: 512
  //   hardware_uart: UART0
  //   level: DEBUG
  //   logs: {}
  //   esp8266_store_log_strings_in_flash: true
  logger_logger = new logger::Logger(0, 512, logger::UART_SELECTION_UART0);
  logger_logger->pre_setup();
  App.register_component(logger_logger);
  // wifi:
  //   manual_ip:
  //     static_ip: 192.168.0.37
  //     gateway: 192.168.0.1
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
  //   - ssid: WLAN.alvarea.net
  //     password: '3286202581200'
  //     id: wifi_wifiap
  //     priority: 0.0
  //   use_address: 192.168.0.37
  wifi_wificomponent = new wifi::WiFiComponent();
  wifi_wificomponent->set_use_address("192.168.0.37");
  wifi::WiFiAP wifi_wifiap = wifi::WiFiAP();
  wifi_wifiap.set_ssid("WLAN.alvarea.net");
  wifi_wifiap.set_password("3286202581200");
  wifi_wifiap.set_manual_ip(wifi::ManualIP{
      .static_ip = IPAddress(192, 168, 0, 37),
      .gateway = IPAddress(192, 168, 0, 1),
      .subnet = IPAddress(255, 255, 255, 0),
      .dns1 = IPAddress(0, 0, 0, 0),
      .dns2 = IPAddress(0, 0, 0, 0),
  });
  wifi_wifiap.set_priority(0.0f);
  wifi_wificomponent->add_sta(wifi_wifiap);
  wifi_wificomponent->set_reboot_timeout(900000);
  wifi_wificomponent->set_power_save_mode(wifi::WIFI_POWER_SAVE_NONE);
  wifi_wificomponent->set_fast_connect(false);
  wifi_wificomponent->set_output_power(20.0f);
  App.register_component(wifi_wificomponent);
  // ota:
  //   id: ota_otacomponent
  //   safe_mode: true
  //   port: 8266
  //   password: ''
  //   reboot_timeout: 5min
  //   num_attempts: 10
  ota_otacomponent = new ota::OTAComponent();
  ota_otacomponent->set_port(8266);
  ota_otacomponent->set_auth_password("");
  App.register_component(ota_otacomponent);
  if (ota_otacomponent->should_enter_safe_mode(10, 300000)) return;
  // api:
  //   id: api_apiserver
  //   port: 6053
  //   password: ''
  //   reboot_timeout: 15min
  api_apiserver = new api::APIServer();
  App.register_component(api_apiserver);
  // sensor:
  api_apiserver->set_port(6053);
  api_apiserver->set_password("");
  api_apiserver->set_reboot_timeout(900000);
  // binary_sensor.gpio:
  //   platform: gpio
  //   pin:
  //     number: 0
  //     mode: INPUT_PULLUP
  //     inverted: true
  //   name: esphome pow sw2 boton
  //   id: gpio_gpiobinarysensor
  gpio_gpiobinarysensor = new gpio::GPIOBinarySensor();
  App.register_component(gpio_gpiobinarysensor);
  // binary_sensor.status:
  //   platform: status
  //   name: esphome pow sw2 status
  //   id: status_statusbinarysensor
  //   device_class: connectivity
  status_statusbinarysensor = new status::StatusBinarySensor();
  App.register_component(status_statusbinarysensor);
  // switch.gpio:
  //   platform: gpio
  //   name: esphome pow sw2
  //   pin:
  //     number: 12
  //     mode: OUTPUT
  //     inverted: false
  //   id: gpio_gpioswitch
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   interlock_wait_time: 0ms
  gpio_gpioswitch = new gpio::GPIOSwitch();
  App.register_component(gpio_gpioswitch);
  // output:
  // output.esp8266_pwm:
  //   platform: esp8266_pwm
  //   id: pow_sw2_green_led
  //   pin:
  //     number: 13
  //     inverted: true
  //     mode: OUTPUT
  //   frequency: 1000.0
  pow_sw2_green_led = new esp8266_pwm::ESP8266PWM();
  App.register_component(pow_sw2_green_led);
  // light.monochromatic:
  //   platform: monochromatic
  //   name: esphome pow sw2 led
  //   output: pow_sw2_green_led
  //   id: light_lightstate
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   gamma_correct: 2.8
  //   default_transition_length: 1s
  //   output_id: monochromatic_monochromaticlightoutput
  monochromatic_monochromaticlightoutput = new monochromatic::MonochromaticLightOutput();
  light_lightstate = new light::LightState("esphome pow sw2 led", monochromatic_monochromaticlightoutput);
  App.register_light(light_lightstate);
  App.register_component(light_lightstate);
  // uart:
  //   rx_pin: 3
  //   baud_rate: 4800
  //   id: uart_uartcomponent
  //   rx_buffer_size: 256
  //   stop_bits: 1
  //   data_bits: 8
  //   parity: NONE
  uart_uartcomponent = new uart::UARTComponent();
  App.register_component(uart_uartcomponent);
  // sensor.cse7766:
  //   platform: cse7766
  //   update_interval: 30s
  //   current:
  //     name: esphome pow sw2 Current
  //     id: sensor_sensor
  //     force_update: false
  //     unit_of_measurement: A
  //     icon: mdi:flash
  //     accuracy_decimals: 2
  //   voltage:
  //     name: esphome pow sw2 Voltage
  //     id: sensor_sensor_2
  //     force_update: false
  //     unit_of_measurement: V
  //     icon: mdi:flash
  //     accuracy_decimals: 1
  //   power:
  //     name: esphome pow sw2 Power
  //     id: sensor_sensor_3
  //     force_update: false
  //     unit_of_measurement: W
  //     icon: mdi:flash
  //     accuracy_decimals: 1
  //   id: cse7766_cse7766component
  //   uart_id: uart_uartcomponent
  cse7766_cse7766component = new cse7766::CSE7766Component();
  cse7766_cse7766component->set_update_interval(30000);
  App.register_component(cse7766_cse7766component);
  App.register_binary_sensor(gpio_gpiobinarysensor);
  gpio_gpiobinarysensor->set_name("esphome pow sw2 boton");
  App.register_binary_sensor(status_statusbinarysensor);
  status_statusbinarysensor->set_name("esphome pow sw2 status");
  status_statusbinarysensor->set_device_class("connectivity");
  App.register_switch(gpio_gpioswitch);
  gpio_gpioswitch->set_name("esphome pow sw2");
  light_lightstate->set_restore_mode(light::LIGHT_RESTORE_DEFAULT_OFF);
  light_lightstate->set_default_transition_length(1000);
  light_lightstate->set_gamma_correct(2.8f);
  uart_uartcomponent->set_baud_rate(4800);
  uart_uartcomponent->set_rx_pin(3);
  uart_uartcomponent->set_rx_buffer_size(256);
  uart_uartcomponent->set_stop_bits(1);
  uart_uartcomponent->set_data_bits(8);
  uart_uartcomponent->set_parity(uart::UART_CONFIG_PARITY_NONE);
  light_lightstate->add_effects({});
  cse7766_cse7766component->set_uart_parent(uart_uartcomponent);
  gpio_gpiobinarysensor->set_pin(new GPIOPin(0, INPUT_PULLUP, true));
  gpio_gpioswitch->set_pin(new GPIOPin(12, OUTPUT, false));
  gpio_gpioswitch->set_restore_mode(gpio::GPIO_SWITCH_RESTORE_DEFAULT_OFF);
  pow_sw2_green_led->set_pin(new GPIOPin(13, OUTPUT, true));
  pow_sw2_green_led->set_frequency(1000.0f);
  sensor_sensor_2 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_2);
  sensor_sensor_2->set_name("esphome pow sw2 Voltage");
  sensor_sensor_2->set_unit_of_measurement("V");
  sensor_sensor_2->set_icon("mdi:flash");
  sensor_sensor_2->set_accuracy_decimals(1);
  sensor_sensor_2->set_force_update(false);
  monochromatic_monochromaticlightoutput->set_output(pow_sw2_green_led);
  cse7766_cse7766component->set_voltage_sensor(sensor_sensor_2);
  sensor_sensor = new sensor::Sensor();
  App.register_sensor(sensor_sensor);
  sensor_sensor->set_name("esphome pow sw2 Current");
  sensor_sensor->set_unit_of_measurement("A");
  sensor_sensor->set_icon("mdi:flash");
  sensor_sensor->set_accuracy_decimals(2);
  sensor_sensor->set_force_update(false);
  cse7766_cse7766component->set_current_sensor(sensor_sensor);
  sensor_sensor_3 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_3);
  sensor_sensor_3->set_name("esphome pow sw2 Power");
  sensor_sensor_3->set_unit_of_measurement("W");
  sensor_sensor_3->set_icon("mdi:flash");
  sensor_sensor_3->set_accuracy_decimals(1);
  sensor_sensor_3->set_force_update(false);
  cse7766_cse7766component->set_power_sensor(sensor_sensor_3);
  // =========== AUTO GENERATED CODE END ============
  // ========= YOU CAN EDIT AFTER THIS LINE =========
  App.setup();
}

void loop() {
  App.loop();
}
