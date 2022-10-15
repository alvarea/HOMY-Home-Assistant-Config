// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using std::isnan;
using std::min;
using std::max;
using namespace binary_sensor;
logger::Logger *logger_logger;
wifi::WiFiComponent *wifi_wificomponent;
mdns::MDNSComponent *mdns_mdnscomponent;
ota::OTAComponent *ota_otacomponent;
api::APIServer *api_apiserver;
using namespace api;
using namespace sensor;
preferences::IntervalSyncer *preferences_intervalsyncer;
status::StatusBinarySensor *status_statusbinarysensor;
esp32_ble_tracker::ESP32BLETracker *esp32_ble_tracker_esp32bletracker;
atc_mithermometer::ATCMiThermometer *atc_mithermometer_atcmithermometer;
sensor::Sensor *sensor_sensor;
sensor::Sensor *sensor_sensor_2;
sensor::Sensor *sensor_sensor_3;
atc_mithermometer::ATCMiThermometer *atc_mithermometer_atcmithermometer_2;
sensor::Sensor *sensor_sensor_4;
sensor::Sensor *sensor_sensor_5;
sensor::Sensor *sensor_sensor_6;
#define yield() esphome::yield()
#define millis() esphome::millis()
#define micros() esphome::micros()
#define delay(x) esphome::delay(x)
#define delayMicroseconds(x) esphome::delayMicroseconds(x)
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ========== AUTO GENERATED CODE BEGIN ===========
  // esphome:
  //   name: esphome_esp32_hub2_ble
  //   build_path: .esphome/build/esphome_esp32_hub2_ble
  //   platformio_options: {}
  //   includes: []
  //   libraries: []
  //   name_add_mac_suffix: false
  App.pre_setup("esphome_esp32_hub2_ble", __DATE__ ", " __TIME__, false);
  // binary_sensor:
  // logger:
  //   id: logger_logger
  //   baud_rate: 115200
  //   tx_buffer_size: 512
  //   deassert_rts_dtr: false
  //   hardware_uart: UART0
  //   level: DEBUG
  //   logs: {}
  logger_logger = new logger::Logger(115200, 512, logger::UART_SELECTION_UART0);
  logger_logger->pre_setup();
  logger_logger->set_component_source("logger");
  App.register_component(logger_logger);
  // wifi:
  //   manual_ip:
  //     static_ip: 192.168.0.47
  //     gateway: !secret 'wifi_gateway'
  //     subnet: 255.255.255.0
  //     dns1: 0.0.0.0
  //     dns2: 0.0.0.0
  //   id: wifi_wificomponent
  //   domain: .local
  //   reboot_timeout: 15min
  //   power_save_mode: LIGHT
  //   fast_connect: false
  //   networks:
  //   - ssid: !secret 'wifi_ssid_tc'
  //     password: !secret 'wifi_pwd'
  //     id: wifi_wifiap
  //     priority: 0.0
  //   use_address: 192.168.0.47
  wifi_wificomponent = new wifi::WiFiComponent();
  wifi_wificomponent->set_use_address("192.168.0.47");
  wifi::WiFiAP wifi_wifiap = wifi::WiFiAP();
  wifi_wifiap.set_ssid("TC.alvarea.net");
  wifi_wifiap.set_password("3286202581200");
  wifi_wifiap.set_manual_ip(wifi::ManualIP{
      .static_ip = network::IPAddress(192, 168, 0, 47),
      .gateway = network::IPAddress(192, 168, 0, 1),
      .subnet = network::IPAddress(255, 255, 255, 0),
      .dns1 = network::IPAddress(0, 0, 0, 0),
      .dns2 = network::IPAddress(0, 0, 0, 0),
  });
  wifi_wifiap.set_priority(0.0f);
  wifi_wificomponent->add_sta(wifi_wifiap);
  wifi_wificomponent->set_reboot_timeout(900000);
  wifi_wificomponent->set_power_save_mode(wifi::WIFI_POWER_SAVE_LIGHT);
  wifi_wificomponent->set_fast_connect(false);
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
  //   port: 3232
  //   reboot_timeout: 5min
  //   num_attempts: 10
  ota_otacomponent = new ota::OTAComponent();
  ota_otacomponent->set_port(3232);
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
  // substitutions:
  //   device_name: esphome_esp32_hub2_ble
  // esp32:
  //   board: nodemcu-32s
  //   framework:
  //     version: 1.0.6
  //     source: ~3.10006.0
  //     platform_version: platformio/espressif32 @ 3.5.0
  //     type: arduino
  //   variant: ESP32
  // preferences:
  //   id: preferences_intervalsyncer
  //   flash_write_interval: 60s
  preferences_intervalsyncer = new preferences::IntervalSyncer();
  preferences_intervalsyncer->set_write_interval(60000);
  preferences_intervalsyncer->set_component_source("preferences");
  App.register_component(preferences_intervalsyncer);
  // binary_sensor.status:
  //   platform: status
  //   name: esphome_esp32_hub2_ble_status
  //   disabled_by_default: false
  //   id: status_statusbinarysensor
  //   entity_category: diagnostic
  //   device_class: connectivity
  status_statusbinarysensor = new status::StatusBinarySensor();
  App.register_binary_sensor(status_statusbinarysensor);
  status_statusbinarysensor->set_name("esphome_esp32_hub2_ble_status");
  status_statusbinarysensor->set_disabled_by_default(false);
  status_statusbinarysensor->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  status_statusbinarysensor->set_device_class("connectivity");
  status_statusbinarysensor->set_component_source("status.binary_sensor");
  App.register_component(status_statusbinarysensor);
  // esp32_ble_tracker:
  //   id: esp32_ble_tracker_esp32bletracker
  //   scan_parameters:
  //     duration: 5min
  //     interval: 320ms
  //     window: 30ms
  //     active: true
  //     continuous: true
  esp32_ble_tracker_esp32bletracker = new esp32_ble_tracker::ESP32BLETracker();
  esp32_ble_tracker_esp32bletracker->set_component_source("esp32_ble_tracker");
  App.register_component(esp32_ble_tracker_esp32bletracker);
  esp32_ble_tracker_esp32bletracker->set_scan_duration(300);
  esp32_ble_tracker_esp32bletracker->set_scan_interval(512);
  esp32_ble_tracker_esp32bletracker->set_scan_window(48);
  esp32_ble_tracker_esp32bletracker->set_scan_active(true);
  esp32_ble_tracker_esp32bletracker->set_scan_continuous(true);
  // sensor.atc_mithermometer:
  //   platform: atc_mithermometer
  //   mac_address: A4:C1:38:4B:D6:7C
  //   temperature:
  //     name: LY1 Desk_Setup Temperatura
  //     disabled_by_default: false
  //     id: sensor_sensor
  //     force_update: false
  //     unit_of_measurement: °C
  //     accuracy_decimals: 1
  //     device_class: temperature
  //     state_class: measurement
  //   humidity:
  //     name: LY1 Desk_Setup Humedad
  //     disabled_by_default: false
  //     id: sensor_sensor_2
  //     force_update: false
  //     unit_of_measurement: '%'
  //     accuracy_decimals: 0
  //     device_class: humidity
  //     state_class: measurement
  //   battery_level:
  //     name: LY1 Desk_Setup Batería Nivel
  //     disabled_by_default: false
  //     id: sensor_sensor_3
  //     force_update: false
  //     unit_of_measurement: '%'
  //     accuracy_decimals: 0
  //     device_class: battery
  //     state_class: measurement
  //     entity_category: diagnostic
  //   id: atc_mithermometer_atcmithermometer
  //   esp32_ble_id: esp32_ble_tracker_esp32bletracker
  atc_mithermometer_atcmithermometer = new atc_mithermometer::ATCMiThermometer();
  atc_mithermometer_atcmithermometer->set_component_source("atc_mithermometer.sensor");
  App.register_component(atc_mithermometer_atcmithermometer);
  esp32_ble_tracker_esp32bletracker->register_listener(atc_mithermometer_atcmithermometer);
  atc_mithermometer_atcmithermometer->set_address(0xA4C1384BD67CULL);
  sensor_sensor = new sensor::Sensor();
  App.register_sensor(sensor_sensor);
  sensor_sensor->set_name("LY1 Desk_Setup Temperatura");
  sensor_sensor->set_disabled_by_default(false);
  sensor_sensor->set_device_class("temperature");
  sensor_sensor->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor->set_unit_of_measurement("\302\260C");
  sensor_sensor->set_accuracy_decimals(1);
  sensor_sensor->set_force_update(false);
  atc_mithermometer_atcmithermometer->set_temperature(sensor_sensor);
  sensor_sensor_2 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_2);
  sensor_sensor_2->set_name("LY1 Desk_Setup Humedad");
  sensor_sensor_2->set_disabled_by_default(false);
  sensor_sensor_2->set_device_class("humidity");
  sensor_sensor_2->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_2->set_unit_of_measurement("%");
  sensor_sensor_2->set_accuracy_decimals(0);
  sensor_sensor_2->set_force_update(false);
  atc_mithermometer_atcmithermometer->set_humidity(sensor_sensor_2);
  sensor_sensor_3 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_3);
  sensor_sensor_3->set_name("LY1 Desk_Setup Bater\303\255a Nivel");
  sensor_sensor_3->set_disabled_by_default(false);
  sensor_sensor_3->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  sensor_sensor_3->set_device_class("battery");
  sensor_sensor_3->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_3->set_unit_of_measurement("%");
  sensor_sensor_3->set_accuracy_decimals(0);
  sensor_sensor_3->set_force_update(false);
  atc_mithermometer_atcmithermometer->set_battery_level(sensor_sensor_3);
  // sensor.atc_mithermometer:
  //   platform: atc_mithermometer
  //   mac_address: A4:C1:38:6B:AA:C8
  //   temperature:
  //     name: LY2 Estudio Temperatura
  //     disabled_by_default: false
  //     id: sensor_sensor_4
  //     force_update: false
  //     unit_of_measurement: °C
  //     accuracy_decimals: 1
  //     device_class: temperature
  //     state_class: measurement
  //   humidity:
  //     name: LY2 Estudio Humedad
  //     disabled_by_default: false
  //     id: sensor_sensor_5
  //     force_update: false
  //     unit_of_measurement: '%'
  //     accuracy_decimals: 0
  //     device_class: humidity
  //     state_class: measurement
  //   battery_level:
  //     name: LY2 Estudio Batería
  //     disabled_by_default: false
  //     id: sensor_sensor_6
  //     force_update: false
  //     unit_of_measurement: '%'
  //     accuracy_decimals: 0
  //     device_class: battery
  //     state_class: measurement
  //     entity_category: diagnostic
  //   id: atc_mithermometer_atcmithermometer_2
  //   esp32_ble_id: esp32_ble_tracker_esp32bletracker
  atc_mithermometer_atcmithermometer_2 = new atc_mithermometer::ATCMiThermometer();
  atc_mithermometer_atcmithermometer_2->set_component_source("atc_mithermometer.sensor");
  App.register_component(atc_mithermometer_atcmithermometer_2);
  esp32_ble_tracker_esp32bletracker->register_listener(atc_mithermometer_atcmithermometer_2);
  atc_mithermometer_atcmithermometer_2->set_address(0xA4C1386BAAC8ULL);
  sensor_sensor_4 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_4);
  sensor_sensor_4->set_name("LY2 Estudio Temperatura");
  sensor_sensor_4->set_disabled_by_default(false);
  sensor_sensor_4->set_device_class("temperature");
  sensor_sensor_4->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_4->set_unit_of_measurement("\302\260C");
  sensor_sensor_4->set_accuracy_decimals(1);
  sensor_sensor_4->set_force_update(false);
  atc_mithermometer_atcmithermometer_2->set_temperature(sensor_sensor_4);
  sensor_sensor_5 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_5);
  sensor_sensor_5->set_name("LY2 Estudio Humedad");
  sensor_sensor_5->set_disabled_by_default(false);
  sensor_sensor_5->set_device_class("humidity");
  sensor_sensor_5->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_5->set_unit_of_measurement("%");
  sensor_sensor_5->set_accuracy_decimals(0);
  sensor_sensor_5->set_force_update(false);
  atc_mithermometer_atcmithermometer_2->set_humidity(sensor_sensor_5);
  sensor_sensor_6 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_6);
  sensor_sensor_6->set_name("LY2 Estudio Bater\303\255a");
  sensor_sensor_6->set_disabled_by_default(false);
  sensor_sensor_6->set_entity_category(::ENTITY_CATEGORY_DIAGNOSTIC);
  sensor_sensor_6->set_device_class("battery");
  sensor_sensor_6->set_state_class(sensor::STATE_CLASS_MEASUREMENT);
  sensor_sensor_6->set_unit_of_measurement("%");
  sensor_sensor_6->set_accuracy_decimals(0);
  sensor_sensor_6->set_force_update(false);
  atc_mithermometer_atcmithermometer_2->set_battery_level(sensor_sensor_6);
  // network:
  //   {}
  // socket:
  //   implementation: bsd_sockets
  // =========== AUTO GENERATED CODE END ============
  App.setup();
}

void loop() {
  App.loop();
}
