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
using namespace api;
gpio::GPIOBinarySensor *gpio_gpiobinarysensor;
gpio::GPIOBinarySensor *gpio_gpiobinarysensor_2;
gpio::GPIOBinarySensor *gpio_gpiobinarysensor_3;
gpio::GPIOBinarySensor *gpio_gpiobinarysensor_4;
status::StatusBinarySensor *status_statusbinarysensor;
gpio::GPIOSwitch *gpio_gpioswitch;
gpio::GPIOSwitch *gpio_gpioswitch_2;
gpio::GPIOSwitch *gpio_gpioswitch_3;
gpio::GPIOSwitch *gpio_gpioswitch_4;
using namespace output;
esp8266_pwm::ESP8266PWM *blue_led;
monochromatic::MonochromaticLightOutput *monochromatic_monochromaticlightoutput;
light::LightState *light_lightstate;
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ===== DO NOT EDIT ANYTHING BELOW THIS LINE =====
  // ========== AUTO GENERATED CODE BEGIN ===========
  // async_tcp:
  // esphome:
  //   name: esphome_4ch_sw1
  //   platform: ESP8266
  //   board: esp01_1m
  //   board_flash_mode: dout
  //   arduino_version: espressif8266@2.6.2
  //   build_path: esphome_4ch_sw1
  //   platformio_options: {}
  //   esp8266_restore_from_flash: false
  //   includes: []
  //   libraries: []
  App.pre_setup("esphome_4ch_sw1", __DATE__ ", " __TIME__);
  // binary_sensor:
  // switch:
  // light:
  // logger:
  //   id: logger_logger
  //   baud_rate: 115200
  //   tx_buffer_size: 512
  //   hardware_uart: UART0
  //   level: DEBUG
  //   logs: {}
  //   esp8266_store_log_strings_in_flash: true
  logger_logger = new logger::Logger(115200, 512, logger::UART_SELECTION_UART0);
  logger_logger->pre_setup();
  App.register_component(logger_logger);
  // wifi:
  //   manual_ip:
  //     static_ip: 192.168.0.35
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
  //   - ssid: WLANgar.alvarea.net
  //     password: '3286202581200'
  //     id: wifi_wifiap
  //     priority: 0.0
  //   use_address: 192.168.0.35
  wifi_wificomponent = new wifi::WiFiComponent();
  wifi_wificomponent->set_use_address("192.168.0.35");
  wifi::WiFiAP wifi_wifiap = wifi::WiFiAP();
  wifi_wifiap.set_ssid("WLANgar.alvarea.net");
  wifi_wifiap.set_password("3286202581200");
  wifi_wifiap.set_manual_ip(wifi::ManualIP{
      .static_ip = IPAddress(192, 168, 0, 35),
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
  ota_otacomponent = new ota::OTAComponent();
  ota_otacomponent->set_port(8266);
  ota_otacomponent->set_auth_password("");
  App.register_component(ota_otacomponent);
  ota_otacomponent->start_safe_mode();
  // api:
  //   id: api_apiserver
  //   port: 6053
  //   password: ''
  //   reboot_timeout: 15min
  api_apiserver = new api::APIServer();
  App.register_component(api_apiserver);
  api_apiserver->set_port(6053);
  api_apiserver->set_password("");
  api_apiserver->set_reboot_timeout(900000);
  // binary_sensor.gpio:
  //   platform: gpio
  //   pin:
  //     number: 0
  //     mode: INPUT_PULLUP
  //     inverted: true
  //   name: esphome 4ch button 1
  //   id: gpio_gpiobinarysensor
  gpio_gpiobinarysensor = new gpio::GPIOBinarySensor();
  App.register_component(gpio_gpiobinarysensor);
  // binary_sensor.gpio:
  //   platform: gpio
  //   pin:
  //     number: 9
  //     mode: INPUT_PULLUP
  //     inverted: true
  //   name: esphome 4ch button 2
  //   id: gpio_gpiobinarysensor_2
  gpio_gpiobinarysensor_2 = new gpio::GPIOBinarySensor();
  App.register_component(gpio_gpiobinarysensor_2);
  // binary_sensor.gpio:
  //   platform: gpio
  //   pin:
  //     number: 10
  //     mode: INPUT_PULLUP
  //     inverted: true
  //   name: esphome 4ch button 3
  //   id: gpio_gpiobinarysensor_3
  gpio_gpiobinarysensor_3 = new gpio::GPIOBinarySensor();
  App.register_component(gpio_gpiobinarysensor_3);
  // binary_sensor.gpio:
  //   platform: gpio
  //   pin:
  //     number: 14
  //     mode: INPUT_PULLUP
  //     inverted: true
  //   name: esphome 4ch button 4
  //   id: gpio_gpiobinarysensor_4
  gpio_gpiobinarysensor_4 = new gpio::GPIOBinarySensor();
  App.register_component(gpio_gpiobinarysensor_4);
  // binary_sensor.status:
  //   platform: status
  //   name: esphome 4ch Status
  //   id: status_statusbinarysensor
  //   device_class: connectivity
  status_statusbinarysensor = new status::StatusBinarySensor();
  App.register_component(status_statusbinarysensor);
  // switch.gpio:
  //   platform: gpio
  //   name: esphome 4ch relay 1
  //   pin:
  //     number: 12
  //     mode: OUTPUT
  //     inverted: false
  //   id: gpio_gpioswitch
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   interlock_wait_time: 0ms
  gpio_gpioswitch = new gpio::GPIOSwitch();
  App.register_component(gpio_gpioswitch);
  // switch.gpio:
  //   platform: gpio
  //   name: esphome 4ch relay 2
  //   pin:
  //     number: 5
  //     mode: OUTPUT
  //     inverted: false
  //   id: gpio_gpioswitch_2
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   interlock_wait_time: 0ms
  gpio_gpioswitch_2 = new gpio::GPIOSwitch();
  App.register_component(gpio_gpioswitch_2);
  // switch.gpio:
  //   platform: gpio
  //   name: esphome 4ch relay 3
  //   pin:
  //     number: 4
  //     mode: OUTPUT
  //     inverted: false
  //   id: gpio_gpioswitch_3
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   interlock_wait_time: 0ms
  gpio_gpioswitch_3 = new gpio::GPIOSwitch();
  App.register_component(gpio_gpioswitch_3);
  // switch.gpio:
  //   platform: gpio
  //   name: esphome 4ch relay 4
  //   pin:
  //     number: 15
  //     mode: OUTPUT
  //     inverted: false
  //   id: gpio_gpioswitch_4
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   interlock_wait_time: 0ms
  gpio_gpioswitch_4 = new gpio::GPIOSwitch();
  App.register_component(gpio_gpioswitch_4);
  // output:
  // output.esp8266_pwm:
  //   platform: esp8266_pwm
  //   id: blue_led
  //   pin:
  //     number: 13
  //     mode: OUTPUT
  //     inverted: false
  //   inverted: true
  //   frequency: 1000.0
  blue_led = new esp8266_pwm::ESP8266PWM();
  App.register_component(blue_led);
  // light.monochromatic:
  //   platform: monochromatic
  //   name: esphome 4ch blue led
  //   output: blue_led
  //   id: light_lightstate
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   gamma_correct: 2.8
  //   default_transition_length: 1s
  //   output_id: monochromatic_monochromaticlightoutput
  monochromatic_monochromaticlightoutput = new monochromatic::MonochromaticLightOutput();
  light_lightstate = new light::LightState("esphome 4ch blue led", monochromatic_monochromaticlightoutput);
  App.register_light(light_lightstate);
  App.register_component(light_lightstate);
  App.register_binary_sensor(gpio_gpiobinarysensor);
  gpio_gpiobinarysensor->set_name("esphome 4ch button 1");
  App.register_binary_sensor(gpio_gpiobinarysensor_2);
  gpio_gpiobinarysensor_2->set_name("esphome 4ch button 2");
  App.register_binary_sensor(gpio_gpiobinarysensor_3);
  gpio_gpiobinarysensor_3->set_name("esphome 4ch button 3");
  App.register_binary_sensor(gpio_gpiobinarysensor_4);
  gpio_gpiobinarysensor_4->set_name("esphome 4ch button 4");
  App.register_binary_sensor(status_statusbinarysensor);
  status_statusbinarysensor->set_name("esphome 4ch Status");
  status_statusbinarysensor->set_device_class("connectivity");
  App.register_switch(gpio_gpioswitch);
  gpio_gpioswitch->set_name("esphome 4ch relay 1");
  App.register_switch(gpio_gpioswitch_2);
  gpio_gpioswitch_2->set_name("esphome 4ch relay 2");
  App.register_switch(gpio_gpioswitch_3);
  gpio_gpioswitch_3->set_name("esphome 4ch relay 3");
  App.register_switch(gpio_gpioswitch_4);
  gpio_gpioswitch_4->set_name("esphome 4ch relay 4");
  blue_led->set_inverted(true);
  light_lightstate->set_restore_mode(light::LIGHT_RESTORE_DEFAULT_OFF);
  light_lightstate->set_default_transition_length(1000);
  light_lightstate->set_gamma_correct(2.8f);
  light_lightstate->add_effects({});
  gpio_gpiobinarysensor->set_pin(new GPIOPin(0, INPUT_PULLUP, true));
  gpio_gpiobinarysensor_2->set_pin(new GPIOPin(9, INPUT_PULLUP, true));
  gpio_gpiobinarysensor_3->set_pin(new GPIOPin(10, INPUT_PULLUP, true));
  gpio_gpiobinarysensor_4->set_pin(new GPIOPin(14, INPUT_PULLUP, true));
  gpio_gpioswitch->set_pin(new GPIOPin(12, OUTPUT, false));
  gpio_gpioswitch->set_restore_mode(gpio::GPIO_SWITCH_RESTORE_DEFAULT_OFF);
  gpio_gpioswitch_2->set_pin(new GPIOPin(5, OUTPUT, false));
  gpio_gpioswitch_2->set_restore_mode(gpio::GPIO_SWITCH_RESTORE_DEFAULT_OFF);
  gpio_gpioswitch_3->set_pin(new GPIOPin(4, OUTPUT, false));
  gpio_gpioswitch_3->set_restore_mode(gpio::GPIO_SWITCH_RESTORE_DEFAULT_OFF);
  gpio_gpioswitch_4->set_pin(new GPIOPin(15, OUTPUT, false));
  gpio_gpioswitch_4->set_restore_mode(gpio::GPIO_SWITCH_RESTORE_DEFAULT_OFF);
  blue_led->set_pin(new GPIOPin(13, OUTPUT, false));
  blue_led->set_frequency(1000.0f);
  monochromatic_monochromaticlightoutput->set_output(blue_led);
  // =========== AUTO GENERATED CODE END ============
  // ========= YOU CAN EDIT AFTER THIS LINE =========
  App.setup();
}

void loop() {
  App.loop();
}
