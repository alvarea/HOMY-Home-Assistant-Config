// Auto generated code by esphome
// ========== AUTO GENERATED INCLUDE BLOCK BEGIN ===========
#include "esphome.h"
using namespace esphome;
using namespace binary_sensor;
logger::Logger *logger_logger;
wifi::WiFiComponent *wifi_wificomponent;
ota::OTAComponent *ota_otacomponent;
api::APIServer *api_apiserver;
using namespace sensor;
using namespace api;
status::StatusBinarySensor *status_statusbinarysensor;
esp32_ble_tracker::ESP32BLETracker *esp32_ble_tracker_esp32bletracker;
xiaomi_hhccjcy01::XiaomiHHCCJCY01 *xiaomi_hhccjcy01_xiaomihhccjcy01;
xiaomi_hhccjcy01::XiaomiHHCCJCY01 *xiaomi_hhccjcy01_xiaomihhccjcy01_2;
xiaomi_hhccjcy01::XiaomiHHCCJCY01 *xiaomi_hhccjcy01_xiaomihhccjcy01_3;
atc_mithermometer::ATCMiThermometer *atc_mithermometer_atcmithermometer;
atc_mithermometer::ATCMiThermometer *atc_mithermometer_atcmithermometer_2;
xiaomi_ble::XiaomiListener *xiaomi_ble_xiaomilistener;
ruuvi_ble::RuuviListener *ruuvi_ble_ruuvilistener;
sensor::Sensor *sensor_sensor;
sensor::Sensor *sensor_sensor_5;
sensor::Sensor *sensor_sensor_9;
sensor::Sensor *sensor_sensor_13;
sensor::Sensor *sensor_sensor_16;
sensor::Sensor *sensor_sensor_2;
sensor::Sensor *sensor_sensor_6;
sensor::Sensor *sensor_sensor_10;
sensor::Sensor *sensor_sensor_14;
sensor::Sensor *sensor_sensor_17;
sensor::Sensor *sensor_sensor_3;
sensor::Sensor *sensor_sensor_7;
sensor::Sensor *sensor_sensor_11;
sensor::Sensor *sensor_sensor_15;
sensor::Sensor *sensor_sensor_18;
sensor::Sensor *sensor_sensor_4;
sensor::Sensor *sensor_sensor_8;
sensor::Sensor *sensor_sensor_12;
// ========== AUTO GENERATED INCLUDE BLOCK END ==========="

void setup() {
  // ===== DO NOT EDIT ANYTHING BELOW THIS LINE =====
  // ========== AUTO GENERATED CODE BEGIN ===========
  // async_tcp:
  // esphome:
  //   name: esphome_esp32_hub1_ble_tracker
  //   platform: ESP32
  //   board: nodemcu-32s
  //   arduino_version: espressif32@1.12.4
  //   build_path: esphome_esp32_hub1_ble_tracker
  //   platformio_options: {}
  //   includes: []
  //   libraries: []
  App.pre_setup("esphome_esp32_hub1_ble_tracker", __DATE__ ", " __TIME__);
  // binary_sensor:
  // logger:
  //   id: logger_logger
  //   baud_rate: 115200
  //   tx_buffer_size: 512
  //   hardware_uart: UART0
  //   level: DEBUG
  //   logs: {}
  logger_logger = new logger::Logger(115200, 512, logger::UART_SELECTION_UART0);
  logger_logger->pre_setup();
  App.register_component(logger_logger);
  // wifi:
  //   manual_ip:
  //     static_ip: 192.168.0.49
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
  //   - ssid: !secret 'wifi_ssid_wlan'
  //     password: !secret 'wifi_pwd'
  //     id: wifi_wifiap
  //     priority: 0.0
  //   use_address: 192.168.0.49
  wifi_wificomponent = new wifi::WiFiComponent();
  wifi_wificomponent->set_use_address("192.168.0.49");
  wifi::WiFiAP wifi_wifiap = wifi::WiFiAP();
  wifi_wifiap.set_ssid("WLAN.alvarea.net");
  wifi_wifiap.set_password("3286202581200");
  wifi_wifiap.set_manual_ip(wifi::ManualIP{
      .static_ip = IPAddress(192, 168, 0, 49),
      .gateway = IPAddress(192, 168, 0, 1),
      .subnet = IPAddress(255, 255, 255, 0),
      .dns1 = IPAddress(0, 0, 0, 0),
      .dns2 = IPAddress(0, 0, 0, 0),
  });
  wifi_wifiap.set_priority(0.0f);
  wifi_wificomponent->add_sta(wifi_wifiap);
  wifi_wificomponent->set_reboot_timeout(900000);
  wifi_wificomponent->set_power_save_mode(wifi::WIFI_POWER_SAVE_LIGHT);
  wifi_wificomponent->set_fast_connect(false);
  App.register_component(wifi_wificomponent);
  // ota:
  //   id: ota_otacomponent
  //   safe_mode: true
  //   port: 3232
  //   password: ''
  //   reboot_timeout: 5min
  //   num_attempts: 10
  ota_otacomponent = new ota::OTAComponent();
  ota_otacomponent->set_port(3232);
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
  // binary_sensor.status:
  //   platform: status
  //   name: esphome esp32 h1 status
  //   id: status_statusbinarysensor
  //   device_class: connectivity
  status_statusbinarysensor = new status::StatusBinarySensor();
  App.register_component(status_statusbinarysensor);
  // esp32_ble_tracker:
  //   id: esp32_ble_tracker_esp32bletracker
  //   scan_parameters:
  //     duration: 5min
  //     interval: 320ms
  //     window: 30ms
  //     active: true
  esp32_ble_tracker_esp32bletracker = new esp32_ble_tracker::ESP32BLETracker();
  App.register_component(esp32_ble_tracker_esp32bletracker);
  // sensor.xiaomi_hhccjcy01:
  //   platform: xiaomi_hhccjcy01
  //   mac_address: C4:7C:8D:67:C1:9E
  //   temperature:
  //     name: Temperatura Plant Monitor PM01
  //     id: sensor_sensor
  //     force_update: false
  //     unit_of_measurement: °C
  //     icon: mdi:thermometer
  //     accuracy_decimals: 1
  //   moisture:
  //     name: Humedad Plant Monitor PM01
  //     id: sensor_sensor_2
  //     force_update: false
  //     unit_of_measurement: '%'
  //     icon: mdi:water-percent
  //     accuracy_decimals: 0
  //   illuminance:
  //     name: Luminosidad Plant Monitor PM01
  //     id: sensor_sensor_3
  //     force_update: false
  //     unit_of_measurement: lx
  //     icon: mdi:brightness-5
  //     accuracy_decimals: 0
  //   conductivity:
  //     name: Fertilidad Plant Monitor PM01
  //     id: sensor_sensor_4
  //     force_update: false
  //     unit_of_measurement: µS/cm
  //     icon: mdi:flower
  //     accuracy_decimals: 0
  //   id: xiaomi_hhccjcy01_xiaomihhccjcy01
  //   esp32_ble_id: esp32_ble_tracker_esp32bletracker
  xiaomi_hhccjcy01_xiaomihhccjcy01 = new xiaomi_hhccjcy01::XiaomiHHCCJCY01();
  App.register_component(xiaomi_hhccjcy01_xiaomihhccjcy01);
  // sensor.xiaomi_hhccjcy01:
  //   platform: xiaomi_hhccjcy01
  //   mac_address: 80:EA:CA:89:59:A5
  //   temperature:
  //     name: Temperatura Plant Monitor PM02
  //     id: sensor_sensor_5
  //     force_update: false
  //     unit_of_measurement: °C
  //     icon: mdi:thermometer
  //     accuracy_decimals: 1
  //   moisture:
  //     name: Humedad Plant Monitor PM02
  //     id: sensor_sensor_6
  //     force_update: false
  //     unit_of_measurement: '%'
  //     icon: mdi:water-percent
  //     accuracy_decimals: 0
  //   illuminance:
  //     name: Luminosidad Plant Monitor PM02
  //     id: sensor_sensor_7
  //     force_update: false
  //     unit_of_measurement: lx
  //     icon: mdi:brightness-5
  //     accuracy_decimals: 0
  //   conductivity:
  //     name: Fertilidad Plant Monitor PM02
  //     id: sensor_sensor_8
  //     force_update: false
  //     unit_of_measurement: µS/cm
  //     icon: mdi:flower
  //     accuracy_decimals: 0
  //   id: xiaomi_hhccjcy01_xiaomihhccjcy01_2
  //   esp32_ble_id: esp32_ble_tracker_esp32bletracker
  xiaomi_hhccjcy01_xiaomihhccjcy01_2 = new xiaomi_hhccjcy01::XiaomiHHCCJCY01();
  App.register_component(xiaomi_hhccjcy01_xiaomihhccjcy01_2);
  // sensor.xiaomi_hhccjcy01:
  //   platform: xiaomi_hhccjcy01
  //   mac_address: 80:EA:CA:89:59:EF
  //   temperature:
  //     name: Temperatura Plant Monitor PM03
  //     id: sensor_sensor_9
  //     force_update: false
  //     unit_of_measurement: °C
  //     icon: mdi:thermometer
  //     accuracy_decimals: 1
  //   moisture:
  //     name: Humedad Plant Monitor PM03
  //     id: sensor_sensor_10
  //     force_update: false
  //     unit_of_measurement: '%'
  //     icon: mdi:water-percent
  //     accuracy_decimals: 0
  //   illuminance:
  //     name: Luminosidad Plant Monitor PM03
  //     id: sensor_sensor_11
  //     force_update: false
  //     unit_of_measurement: lx
  //     icon: mdi:brightness-5
  //     accuracy_decimals: 0
  //   conductivity:
  //     name: Fertilidad Plant Monitor PM03
  //     id: sensor_sensor_12
  //     force_update: false
  //     unit_of_measurement: µS/cm
  //     icon: mdi:flower
  //     accuracy_decimals: 0
  //   id: xiaomi_hhccjcy01_xiaomihhccjcy01_3
  //   esp32_ble_id: esp32_ble_tracker_esp32bletracker
  xiaomi_hhccjcy01_xiaomihhccjcy01_3 = new xiaomi_hhccjcy01::XiaomiHHCCJCY01();
  App.register_component(xiaomi_hhccjcy01_xiaomihhccjcy01_3);
  // sensor.atc_mithermometer:
  //   platform: atc_mithermometer
  //   mac_address: A4:C1:38:6B:AA:C8
  //   temperature:
  //     name: LY2 Entrada Interior Temperatura
  //     id: sensor_sensor_13
  //     force_update: false
  //     unit_of_measurement: °C
  //     icon: mdi:thermometer
  //     accuracy_decimals: 1
  //   humidity:
  //     name: LY2 Entrada Interior Humedad
  //     id: sensor_sensor_14
  //     force_update: false
  //     unit_of_measurement: '%'
  //     icon: mdi:water-percent
  //     accuracy_decimals: 0
  //   battery_voltage:
  //     name: LY2 Entrada Interior Batería
  //     id: sensor_sensor_15
  //     force_update: false
  //     unit_of_measurement: V
  //     icon: mdi:battery
  //     accuracy_decimals: 3
  //   id: atc_mithermometer_atcmithermometer
  //   esp32_ble_id: esp32_ble_tracker_esp32bletracker
  atc_mithermometer_atcmithermometer = new atc_mithermometer::ATCMiThermometer();
  App.register_component(atc_mithermometer_atcmithermometer);
  // sensor.atc_mithermometer:
  //   platform: atc_mithermometer
  //   mac_address: A4:C1:38:E8:02:EF
  //   temperature:
  //     name: LY3 Entrada Exterior Temperatura
  //     id: sensor_sensor_16
  //     force_update: false
  //     unit_of_measurement: °C
  //     icon: mdi:thermometer
  //     accuracy_decimals: 1
  //   humidity:
  //     name: LY3 Entrada Exterior Humedad
  //     id: sensor_sensor_17
  //     force_update: false
  //     unit_of_measurement: '%'
  //     icon: mdi:water-percent
  //     accuracy_decimals: 0
  //   battery_level:
  //     name: LY3 Entrada Exterior Bateria
  //     id: sensor_sensor_18
  //     force_update: false
  //     unit_of_measurement: '%'
  //     icon: mdi:battery
  //     accuracy_decimals: 0
  //   id: atc_mithermometer_atcmithermometer_2
  //   esp32_ble_id: esp32_ble_tracker_esp32bletracker
  atc_mithermometer_atcmithermometer_2 = new atc_mithermometer::ATCMiThermometer();
  App.register_component(atc_mithermometer_atcmithermometer_2);
  // xiaomi_ble:
  //   id: xiaomi_ble_xiaomilistener
  //   esp32_ble_id: esp32_ble_tracker_esp32bletracker
  xiaomi_ble_xiaomilistener = new xiaomi_ble::XiaomiListener();
  // ruuvi_ble:
  //   id: ruuvi_ble_ruuvilistener
  //   esp32_ble_id: esp32_ble_tracker_esp32bletracker
  ruuvi_ble_ruuvilistener = new ruuvi_ble::RuuviListener();
  App.register_binary_sensor(status_statusbinarysensor);
  status_statusbinarysensor->set_name("esphome esp32 h1 status");
  status_statusbinarysensor->set_device_class("connectivity");
  esp32_ble_tracker_esp32bletracker->set_scan_duration(300);
  esp32_ble_tracker_esp32bletracker->set_scan_interval(512);
  esp32_ble_tracker_esp32bletracker->set_scan_window(48);
  esp32_ble_tracker_esp32bletracker->set_scan_active(true);
  esp32_ble_tracker_esp32bletracker->register_listener(xiaomi_ble_xiaomilistener);
  esp32_ble_tracker_esp32bletracker->register_listener(ruuvi_ble_ruuvilistener);
  esp32_ble_tracker_esp32bletracker->register_listener(xiaomi_hhccjcy01_xiaomihhccjcy01);
  esp32_ble_tracker_esp32bletracker->register_listener(xiaomi_hhccjcy01_xiaomihhccjcy01_2);
  esp32_ble_tracker_esp32bletracker->register_listener(xiaomi_hhccjcy01_xiaomihhccjcy01_3);
  esp32_ble_tracker_esp32bletracker->register_listener(atc_mithermometer_atcmithermometer);
  esp32_ble_tracker_esp32bletracker->register_listener(atc_mithermometer_atcmithermometer_2);
  xiaomi_hhccjcy01_xiaomihhccjcy01->set_address(0xC47C8D67C19EULL);
  sensor_sensor = new sensor::Sensor();
  App.register_sensor(sensor_sensor);
  sensor_sensor->set_name("Temperatura Plant Monitor PM01");
  sensor_sensor->set_unit_of_measurement("\302\260C");
  sensor_sensor->set_icon("mdi:thermometer");
  sensor_sensor->set_accuracy_decimals(1);
  sensor_sensor->set_force_update(false);
  xiaomi_hhccjcy01_xiaomihhccjcy01_2->set_address(0x80EACA8959A5ULL);
  sensor_sensor_5 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_5);
  sensor_sensor_5->set_name("Temperatura Plant Monitor PM02");
  sensor_sensor_5->set_unit_of_measurement("\302\260C");
  sensor_sensor_5->set_icon("mdi:thermometer");
  sensor_sensor_5->set_accuracy_decimals(1);
  sensor_sensor_5->set_force_update(false);
  xiaomi_hhccjcy01_xiaomihhccjcy01_3->set_address(0x80EACA8959EFULL);
  sensor_sensor_9 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_9);
  sensor_sensor_9->set_name("Temperatura Plant Monitor PM03");
  sensor_sensor_9->set_unit_of_measurement("\302\260C");
  sensor_sensor_9->set_icon("mdi:thermometer");
  sensor_sensor_9->set_accuracy_decimals(1);
  sensor_sensor_9->set_force_update(false);
  atc_mithermometer_atcmithermometer->set_address(0xA4C1386BAAC8ULL);
  sensor_sensor_13 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_13);
  sensor_sensor_13->set_name("LY2 Entrada Interior Temperatura");
  sensor_sensor_13->set_unit_of_measurement("\302\260C");
  sensor_sensor_13->set_icon("mdi:thermometer");
  sensor_sensor_13->set_accuracy_decimals(1);
  sensor_sensor_13->set_force_update(false);
  atc_mithermometer_atcmithermometer_2->set_address(0xA4C138E802EFULL);
  sensor_sensor_16 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_16);
  sensor_sensor_16->set_name("LY3 Entrada Exterior Temperatura");
  sensor_sensor_16->set_unit_of_measurement("\302\260C");
  sensor_sensor_16->set_icon("mdi:thermometer");
  sensor_sensor_16->set_accuracy_decimals(1);
  sensor_sensor_16->set_force_update(false);
  xiaomi_hhccjcy01_xiaomihhccjcy01->set_temperature(sensor_sensor);
  sensor_sensor_2 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_2);
  sensor_sensor_2->set_name("Humedad Plant Monitor PM01");
  sensor_sensor_2->set_unit_of_measurement("%");
  sensor_sensor_2->set_icon("mdi:water-percent");
  sensor_sensor_2->set_accuracy_decimals(0);
  sensor_sensor_2->set_force_update(false);
  xiaomi_hhccjcy01_xiaomihhccjcy01_2->set_temperature(sensor_sensor_5);
  sensor_sensor_6 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_6);
  sensor_sensor_6->set_name("Humedad Plant Monitor PM02");
  sensor_sensor_6->set_unit_of_measurement("%");
  sensor_sensor_6->set_icon("mdi:water-percent");
  sensor_sensor_6->set_accuracy_decimals(0);
  sensor_sensor_6->set_force_update(false);
  xiaomi_hhccjcy01_xiaomihhccjcy01_3->set_temperature(sensor_sensor_9);
  sensor_sensor_10 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_10);
  sensor_sensor_10->set_name("Humedad Plant Monitor PM03");
  sensor_sensor_10->set_unit_of_measurement("%");
  sensor_sensor_10->set_icon("mdi:water-percent");
  sensor_sensor_10->set_accuracy_decimals(0);
  sensor_sensor_10->set_force_update(false);
  atc_mithermometer_atcmithermometer->set_temperature(sensor_sensor_13);
  sensor_sensor_14 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_14);
  sensor_sensor_14->set_name("LY2 Entrada Interior Humedad");
  sensor_sensor_14->set_unit_of_measurement("%");
  sensor_sensor_14->set_icon("mdi:water-percent");
  sensor_sensor_14->set_accuracy_decimals(0);
  sensor_sensor_14->set_force_update(false);
  atc_mithermometer_atcmithermometer_2->set_temperature(sensor_sensor_16);
  sensor_sensor_17 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_17);
  sensor_sensor_17->set_name("LY3 Entrada Exterior Humedad");
  sensor_sensor_17->set_unit_of_measurement("%");
  sensor_sensor_17->set_icon("mdi:water-percent");
  sensor_sensor_17->set_accuracy_decimals(0);
  sensor_sensor_17->set_force_update(false);
  xiaomi_hhccjcy01_xiaomihhccjcy01->set_moisture(sensor_sensor_2);
  sensor_sensor_3 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_3);
  sensor_sensor_3->set_name("Luminosidad Plant Monitor PM01");
  sensor_sensor_3->set_unit_of_measurement("lx");
  sensor_sensor_3->set_icon("mdi:brightness-5");
  sensor_sensor_3->set_accuracy_decimals(0);
  sensor_sensor_3->set_force_update(false);
  xiaomi_hhccjcy01_xiaomihhccjcy01_2->set_moisture(sensor_sensor_6);
  sensor_sensor_7 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_7);
  sensor_sensor_7->set_name("Luminosidad Plant Monitor PM02");
  sensor_sensor_7->set_unit_of_measurement("lx");
  sensor_sensor_7->set_icon("mdi:brightness-5");
  sensor_sensor_7->set_accuracy_decimals(0);
  sensor_sensor_7->set_force_update(false);
  xiaomi_hhccjcy01_xiaomihhccjcy01_3->set_moisture(sensor_sensor_10);
  sensor_sensor_11 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_11);
  sensor_sensor_11->set_name("Luminosidad Plant Monitor PM03");
  sensor_sensor_11->set_unit_of_measurement("lx");
  sensor_sensor_11->set_icon("mdi:brightness-5");
  sensor_sensor_11->set_accuracy_decimals(0);
  sensor_sensor_11->set_force_update(false);
  atc_mithermometer_atcmithermometer->set_humidity(sensor_sensor_14);
  sensor_sensor_15 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_15);
  sensor_sensor_15->set_name("LY2 Entrada Interior Bater\303\255a");
  sensor_sensor_15->set_unit_of_measurement("V");
  sensor_sensor_15->set_icon("mdi:battery");
  sensor_sensor_15->set_accuracy_decimals(3);
  sensor_sensor_15->set_force_update(false);
  atc_mithermometer_atcmithermometer_2->set_humidity(sensor_sensor_17);
  sensor_sensor_18 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_18);
  sensor_sensor_18->set_name("LY3 Entrada Exterior Bateria");
  sensor_sensor_18->set_unit_of_measurement("%");
  sensor_sensor_18->set_icon("mdi:battery");
  sensor_sensor_18->set_accuracy_decimals(0);
  sensor_sensor_18->set_force_update(false);
  xiaomi_hhccjcy01_xiaomihhccjcy01->set_illuminance(sensor_sensor_3);
  sensor_sensor_4 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_4);
  sensor_sensor_4->set_name("Fertilidad Plant Monitor PM01");
  sensor_sensor_4->set_unit_of_measurement("\302\265S/cm");
  sensor_sensor_4->set_icon("mdi:flower");
  sensor_sensor_4->set_accuracy_decimals(0);
  sensor_sensor_4->set_force_update(false);
  xiaomi_hhccjcy01_xiaomihhccjcy01_2->set_illuminance(sensor_sensor_7);
  sensor_sensor_8 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_8);
  sensor_sensor_8->set_name("Fertilidad Plant Monitor PM02");
  sensor_sensor_8->set_unit_of_measurement("\302\265S/cm");
  sensor_sensor_8->set_icon("mdi:flower");
  sensor_sensor_8->set_accuracy_decimals(0);
  sensor_sensor_8->set_force_update(false);
  xiaomi_hhccjcy01_xiaomihhccjcy01_3->set_illuminance(sensor_sensor_11);
  sensor_sensor_12 = new sensor::Sensor();
  App.register_sensor(sensor_sensor_12);
  sensor_sensor_12->set_name("Fertilidad Plant Monitor PM03");
  sensor_sensor_12->set_unit_of_measurement("\302\265S/cm");
  sensor_sensor_12->set_icon("mdi:flower");
  sensor_sensor_12->set_accuracy_decimals(0);
  sensor_sensor_12->set_force_update(false);
  atc_mithermometer_atcmithermometer->set_battery_voltage(sensor_sensor_15);
  atc_mithermometer_atcmithermometer_2->set_battery_level(sensor_sensor_18);
  xiaomi_hhccjcy01_xiaomihhccjcy01->set_conductivity(sensor_sensor_4);
  xiaomi_hhccjcy01_xiaomihhccjcy01_2->set_conductivity(sensor_sensor_8);
  xiaomi_hhccjcy01_xiaomihhccjcy01_3->set_conductivity(sensor_sensor_12);
  // =========== AUTO GENERATED CODE END ============
  // ========= YOU CAN EDIT AFTER THIS LINE =========
  App.setup();
}

void loop() {
  App.loop();
}
