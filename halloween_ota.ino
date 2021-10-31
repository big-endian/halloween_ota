#include "ota.h"
//#include "neopixels_pacifica.h"
//#include "neopixels_fire.h"
#include "neopixels_fire_palette.h"

void setup() {
  setup_ota();
  setup_neopixels();
}

void loop() {
  ArduinoOTA.handle();
  loop_neopixels();
}
