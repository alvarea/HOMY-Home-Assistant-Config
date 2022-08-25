#pragma once
#include "esphome/core/macros.h"
#include "esphome/components/api/api_connection.h"
#include "esphome/components/api/api_frame_helper.h"
#include "esphome/components/api/api_noise_context.h"
#include "esphome/components/api/api_pb2.h"
#include "esphome/components/api/api_pb2_service.h"
#include "esphome/components/api/api_server.h"
#include "esphome/components/api/custom_api_device.h"
#include "esphome/components/api/homeassistant_service.h"
#include "esphome/components/api/list_entities.h"
#include "esphome/components/api/proto.h"
#include "esphome/components/api/subscribe_state.h"
#include "esphome/components/api/user_services.h"
#include "esphome/components/esp8266/core.h"
#include "esphome/components/esp8266/gpio.h"
#include "esphome/components/esp8266/preferences.h"
#include "esphome/components/light/addressable_light.h"
#include "esphome/components/light/addressable_light_effect.h"
#include "esphome/components/light/addressable_light_wrapper.h"
#include "esphome/components/light/automation.h"
#include "esphome/components/light/base_light_effects.h"
#include "esphome/components/light/color_mode.h"
#include "esphome/components/light/esp_color_correction.h"
#include "esphome/components/light/esp_color_view.h"
#include "esphome/components/light/esp_hsv_color.h"
#include "esphome/components/light/esp_range_view.h"
#include "esphome/components/light/light_call.h"
#include "esphome/components/light/light_color_values.h"
#include "esphome/components/light/light_effect.h"
#include "esphome/components/light/light_json_schema.h"
#include "esphome/components/light/light_output.h"
#include "esphome/components/light/light_state.h"
#include "esphome/components/light/light_traits.h"
#include "esphome/components/light/light_transformer.h"
#include "esphome/components/light/transformers.h"
#include "esphome/components/md5/md5.h"
#include "esphome/components/mdns/mdns_component.h"
#include "esphome/components/my9231/my9231.h"
#include "esphome/components/network/ip_address.h"
#include "esphome/components/network/util.h"
#include "esphome/components/ota/automation.h"
#include "esphome/components/ota/ota_backend.h"
#include "esphome/components/ota/ota_backend_arduino_esp32.h"
#include "esphome/components/ota/ota_backend_arduino_esp8266.h"
#include "esphome/components/ota/ota_backend_esp_idf.h"
#include "esphome/components/ota/ota_component.h"
#include "esphome/components/output/automation.h"
#include "esphome/components/output/binary_output.h"
#include "esphome/components/output/float_output.h"
#include "esphome/components/preferences/syncer.h"
#include "esphome/components/rgbww/rgbww_light_output.h"
#include "esphome/components/socket/headers.h"
#include "esphome/components/socket/socket.h"
#include "esphome/components/wifi/wifi_component.h"
#include "esphome/core/application.h"
#include "esphome/core/automation.h"
#include "esphome/core/base_automation.h"
#include "esphome/core/color.h"
#include "esphome/core/component.h"
#include "esphome/core/component_iterator.h"
#include "esphome/core/controller.h"
#include "esphome/core/datatypes.h"
#include "esphome/core/defines.h"
#include "esphome/core/entity_base.h"
#include "esphome/core/gpio.h"
#include "esphome/core/hal.h"
#include "esphome/core/helpers.h"
#include "esphome/core/log.h"
#include "esphome/core/macros.h"
#include "esphome/core/optional.h"
#include "esphome/core/preferences.h"
#include "esphome/core/scheduler.h"
#include "esphome/core/util.h"
#include "esphome/core/version.h"

