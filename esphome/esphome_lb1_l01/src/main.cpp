// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using namespace light;
wifi::WiFiComponent *wifi_wificomponent;
ota::OTAComponent *ota_otacomponent;
api::APIServer *api_apiserver;
using namespace api;
my9231::MY9231OutputComponent *my9231_my9231outputcomponent;
using namespace output;
my9231::MY9231OutputComponent::Channel *output_blue;
my9231::MY9231OutputComponent::Channel *output_red;
my9231::MY9231OutputComponent::Channel *output_green;
my9231::MY9231OutputComponent::Channel *output_warm_white;
my9231::MY9231OutputComponent::Channel *output_cold_white;
rgbww::RGBWWLightOutput *rgbww_rgbwwlightoutput;
light::LightState *light_lightstate;
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ===== DO NOT EDIT ANYTHING BELOW THIS LINE =====
  // ========== AUTO GENERATED CODE BEGIN ===========
  // async_tcp:
  // esphome:
  //   name: esphome_lb1_l01
  //   platform: ESP8266
  //   board: esp01_1m
  //   board_flash_mode: dout
  //   arduino_version: espressif8266@2.6.2
  //   build_path: esphome_lb1_l01
  //   platformio_options: {}
  //   esp8266_restore_from_flash: false
  //   includes: []
  //   libraries: []
  App.pre_setup("esphome_lb1_l01", __DATE__ ", " __TIME__);
  // light:
  // wifi:
  //   manual_ip:
  //     static_ip: 192.168.0.45
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
  //   - ssid: TC.alvarea.net
  //     password: '3286202581200'
  //     id: wifi_wifiap
  //     priority: 0.0
  //   use_address: 192.168.0.45
  wifi_wificomponent = new wifi::WiFiComponent();
  wifi_wificomponent->set_use_address("192.168.0.45");
  wifi::WiFiAP wifi_wifiap = wifi::WiFiAP();
  wifi_wifiap.set_ssid("TC.alvarea.net");
  wifi_wifiap.set_password("3286202581200");
  wifi_wifiap.set_manual_ip(wifi::ManualIP{
      .static_ip = IPAddress(192, 168, 0, 45),
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
  api_apiserver->set_port(6053);
  api_apiserver->set_password("");
  api_apiserver->set_reboot_timeout(900000);
  // my9231:
  //   data_pin:
  //     number: 12
  //     mode: OUTPUT
  //     inverted: false
  //   clock_pin:
  //     number: 14
  //     mode: OUTPUT
  //     inverted: false
  //   num_channels: 6
  //   num_chips: 2
  //   id: my9231_my9231outputcomponent
  //   bit_depth: 16
  my9231_my9231outputcomponent = new my9231::MY9231OutputComponent();
  App.register_component(my9231_my9231outputcomponent);
  // output:
  // output.my9231:
  //   platform: my9231
  //   id: output_blue
  //   channel: 0
  //   my9231_id: my9231_my9231outputcomponent
  output_blue = new my9231::MY9231OutputComponent::Channel();
  // output.my9231:
  //   platform: my9231
  //   id: output_red
  //   channel: 1
  //   my9231_id: my9231_my9231outputcomponent
  output_red = new my9231::MY9231OutputComponent::Channel();
  // output.my9231:
  //   platform: my9231
  //   id: output_green
  //   channel: 2
  //   my9231_id: my9231_my9231outputcomponent
  output_green = new my9231::MY9231OutputComponent::Channel();
  // output.my9231:
  //   platform: my9231
  //   id: output_warm_white
  //   channel: 4
  //   my9231_id: my9231_my9231outputcomponent
  output_warm_white = new my9231::MY9231OutputComponent::Channel();
  // output.my9231:
  //   platform: my9231
  //   id: output_cold_white
  //   channel: 5
  //   my9231_id: my9231_my9231outputcomponent
  output_cold_white = new my9231::MY9231OutputComponent::Channel();
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
  //   id: light_lightstate
  //   restore_mode: RESTORE_DEFAULT_OFF
  //   gamma_correct: 2.8
  //   default_transition_length: 1s
  //   output_id: rgbww_rgbwwlightoutput
  //   constant_brightness: false
  //   color_interlock: false
  rgbww_rgbwwlightoutput = new rgbww::RGBWWLightOutput();
  light_lightstate = new light::LightState("esphome_lb1_l01", rgbww_rgbwwlightoutput);
  App.register_light(light_lightstate);
  App.register_component(light_lightstate);
  light_lightstate->set_restore_mode(light::LIGHT_RESTORE_DEFAULT_OFF);
  light_lightstate->set_default_transition_length(1000);
  light_lightstate->set_gamma_correct(2.8f);
  my9231_my9231outputcomponent->set_pin_di(new GPIOPin(12, OUTPUT, false));
  light_lightstate->add_effects({});
  output_blue->set_parent(my9231_my9231outputcomponent);
  output_blue->set_channel(0);
  output_red->set_parent(my9231_my9231outputcomponent);
  output_red->set_channel(1);
  output_green->set_parent(my9231_my9231outputcomponent);
  output_green->set_channel(2);
  output_warm_white->set_parent(my9231_my9231outputcomponent);
  output_warm_white->set_channel(4);
  output_cold_white->set_parent(my9231_my9231outputcomponent);
  output_cold_white->set_channel(5);
  my9231_my9231outputcomponent->set_pin_dcki(new GPIOPin(14, OUTPUT, false));
  my9231_my9231outputcomponent->set_num_channels(6);
  my9231_my9231outputcomponent->set_num_chips(2);
  my9231_my9231outputcomponent->set_bit_depth(16);
  rgbww_rgbwwlightoutput->set_red(output_red);
  rgbww_rgbwwlightoutput->set_green(output_green);
  rgbww_rgbwwlightoutput->set_blue(output_blue);
  rgbww_rgbwwlightoutput->set_cold_white(output_cold_white);
  rgbww_rgbwwlightoutput->set_cold_white_temperature(153.84615384615384f);
  rgbww_rgbwwlightoutput->set_warm_white(output_warm_white);
  rgbww_rgbwwlightoutput->set_warm_white_temperature(357.14285714285717f);
  rgbww_rgbwwlightoutput->set_constant_brightness(false);
  rgbww_rgbwwlightoutput->set_color_interlock(false);
  // =========== AUTO GENERATED CODE END ============
  // ========= YOU CAN EDIT AFTER THIS LINE =========
  App.setup();
}

void loop() {
  App.loop();
}
