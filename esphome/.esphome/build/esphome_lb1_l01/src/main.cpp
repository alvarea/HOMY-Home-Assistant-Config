// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using std::isnan;
using std::min;
using std::max;
using namespace light;
wifi::WiFiComponent *wifi_wificomponent;
mdns::MDNSComponent *mdns_mdnscomponent;
ota::OTAComponent *ota_otacomponent;
api::APIServer *api_apiserver;
using namespace api;
preferences::IntervalSyncer *preferences_intervalsyncer;
my9231::MY9231OutputComponent *my9231_my9231outputcomponent;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin;
esphome::esp8266::ESP8266GPIOPin *esphome_esp8266_esp8266gpiopin_2;
using namespace output;
my9231::MY9231OutputComponent::Channel *output_blue;
my9231::MY9231OutputComponent::Channel *output_red;
my9231::MY9231OutputComponent::Channel *output_green;
my9231::MY9231OutputComponent::Channel *output_warm_white;
my9231::MY9231OutputComponent::Channel *output_cold_white;
rgbww::RGBWWLightOutput *rgbww_rgbwwlightoutput;
light::LightState *light_lightstate;
const uint8_t ESPHOME_ESP8266_GPIO_INITIAL_MODE[16] = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, OUTPUT, 255, OUTPUT, 255};
const uint8_t ESPHOME_ESP8266_GPIO_INITIAL_LEVEL[16] = {255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 255, 0, 255, 0, 255};
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
  //   name: esphome_lb1_l01
  //   build_path: .esphome/build/esphome_lb1_l01
  //   platformio_options: {}
  //   includes: []
  //   libraries: []
  //   name_add_mac_suffix: false
  App.pre_setup("esphome_lb1_l01", __DATE__ ", " __TIME__, false);
  // light:
  // wifi:
  //   manual_ip:
  //     gateway: !secret 'wifi_gateway'
  //     subnet: 255.255.255.0
  //     static_ip: 192.168.0.45
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
  //   use_address: 192.168.0.45
  wifi_wificomponent = new wifi::WiFiComponent();
  wifi_wificomponent->set_use_address("192.168.0.45");
  wifi::WiFiAP wifi_wifiap = wifi::WiFiAP();
  wifi_wifiap.set_ssid("WLAN.alvarea.net");
  wifi_wifiap.set_password("3286202581200");
  wifi_wifiap.set_manual_ip(wifi::ManualIP{
      .static_ip = network::IPAddress(192, 168, 0, 45),
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
  // preferences:
  //   id: preferences_intervalsyncer
  //   flash_write_interval: 60s
  preferences_intervalsyncer = new preferences::IntervalSyncer();
  preferences_intervalsyncer->set_write_interval(60000);
  preferences_intervalsyncer->set_component_source("preferences");
  App.register_component(preferences_intervalsyncer);
  // my9231:
  //   data_pin:
  //     number: 12
  //     mode:
  //       output: true
  //       analog: false
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     inverted: false
  //     id: esphome_esp8266_esp8266gpiopin
  //   clock_pin:
  //     number: 14
  //     mode:
  //       output: true
  //       analog: false
  //       input: false
  //       open_drain: false
  //       pullup: false
  //       pulldown: false
  //     inverted: false
  //     id: esphome_esp8266_esp8266gpiopin_2
  //   num_channels: 6
  //   num_chips: 2
  //   id: my9231_my9231outputcomponent
  //   bit_depth: 16
  my9231_my9231outputcomponent = new my9231::MY9231OutputComponent();
  my9231_my9231outputcomponent->set_component_source("my9231");
  App.register_component(my9231_my9231outputcomponent);
  esphome_esp8266_esp8266gpiopin = new esphome::esp8266::ESP8266GPIOPin();
  esphome_esp8266_esp8266gpiopin->set_pin(12);
  esphome_esp8266_esp8266gpiopin->set_inverted(false);
  esphome_esp8266_esp8266gpiopin->set_flags(gpio::Flags::FLAG_OUTPUT);
  my9231_my9231outputcomponent->set_pin_di(esphome_esp8266_esp8266gpiopin);
  esphome_esp8266_esp8266gpiopin_2 = new esphome::esp8266::ESP8266GPIOPin();
  esphome_esp8266_esp8266gpiopin_2->set_pin(14);
  esphome_esp8266_esp8266gpiopin_2->set_inverted(false);
  esphome_esp8266_esp8266gpiopin_2->set_flags(gpio::Flags::FLAG_OUTPUT);
  my9231_my9231outputcomponent->set_pin_dcki(esphome_esp8266_esp8266gpiopin_2);
  my9231_my9231outputcomponent->set_num_channels(6);
  my9231_my9231outputcomponent->set_num_chips(2);
  my9231_my9231outputcomponent->set_bit_depth(16);
  // output:
  // output.my9231:
  //   platform: my9231
  //   id: output_blue
  //   channel: 0
  //   zero_means_zero: false
  //   my9231_id: my9231_my9231outputcomponent
  output_blue = new my9231::MY9231OutputComponent::Channel();
  output_blue->set_zero_means_zero(false);
  output_blue->set_parent(my9231_my9231outputcomponent);
  output_blue->set_channel(0);
  // output.my9231:
  //   platform: my9231
  //   id: output_red
  //   channel: 1
  //   zero_means_zero: false
  //   my9231_id: my9231_my9231outputcomponent
  output_red = new my9231::MY9231OutputComponent::Channel();
  output_red->set_zero_means_zero(false);
  output_red->set_parent(my9231_my9231outputcomponent);
  output_red->set_channel(1);
  // output.my9231:
  //   platform: my9231
  //   id: output_green
  //   channel: 2
  //   zero_means_zero: false
  //   my9231_id: my9231_my9231outputcomponent
  output_green = new my9231::MY9231OutputComponent::Channel();
  output_green->set_zero_means_zero(false);
  output_green->set_parent(my9231_my9231outputcomponent);
  output_green->set_channel(2);
  // output.my9231:
  //   platform: my9231
  //   id: output_warm_white
  //   channel: 4
  //   zero_means_zero: false
  //   my9231_id: my9231_my9231outputcomponent
  output_warm_white = new my9231::MY9231OutputComponent::Channel();
  output_warm_white->set_zero_means_zero(false);
  output_warm_white->set_parent(my9231_my9231outputcomponent);
  output_warm_white->set_channel(4);
  // output.my9231:
  //   platform: my9231
  //   id: output_cold_white
  //   channel: 5
  //   zero_means_zero: false
  //   my9231_id: my9231_my9231outputcomponent
  output_cold_white = new my9231::MY9231OutputComponent::Channel();
  output_cold_white->set_zero_means_zero(false);
  output_cold_white->set_parent(my9231_my9231outputcomponent);
  output_cold_white->set_channel(5);
  // light.rgbww:
  //   platform: rgbww
  //   name: esphome_lb1_l01
  //   red: output_red
  //   green: output_green
  //   blue: output_blue
  //   cold_white: output_cold_white
  //   warm_white: output_warm_white
  //   cold_white_color_temperature: 153.84615384615384
  //   warm_white_color_temperature: 357.14285714285717
  //   disabled_by_default: false
  //   id: light_lightstate
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   gamma_correct: 2.8
  //   default_transition_length: 1s
  //   flash_transition_length: 0s
  //   output_id: rgbww_rgbwwlightoutput
  //   constant_brightness: false
  //   color_interlock: false
  rgbww_rgbwwlightoutput = new rgbww::RGBWWLightOutput();
  light_lightstate = new light::LightState(rgbww_rgbwwlightoutput);
  App.register_light(light_lightstate);
  light_lightstate->set_component_source("light");
  App.register_component(light_lightstate);
  light_lightstate->set_name("esphome_lb1_l01");
  light_lightstate->set_disabled_by_default(false);
  light_lightstate->set_restore_mode(light::LIGHT_RESTORE_DEFAULT_OFF);
  light_lightstate->set_default_transition_length(1000);
  light_lightstate->set_flash_transition_length(0);
  light_lightstate->set_gamma_correct(2.8f);
  light_lightstate->add_effects({});
  rgbww_rgbwwlightoutput->set_red(output_red);
  rgbww_rgbwwlightoutput->set_green(output_green);
  rgbww_rgbwwlightoutput->set_blue(output_blue);
  rgbww_rgbwwlightoutput->set_cold_white(output_cold_white);
  rgbww_rgbwwlightoutput->set_cold_white_temperature(153.84615384615384f);
  rgbww_rgbwwlightoutput->set_warm_white(output_warm_white);
  rgbww_rgbwwlightoutput->set_warm_white_temperature(357.14285714285717f);
  rgbww_rgbwwlightoutput->set_constant_brightness(false);
  rgbww_rgbwwlightoutput->set_color_interlock(false);
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
