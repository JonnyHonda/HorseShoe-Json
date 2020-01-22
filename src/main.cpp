#include <Arduino.h>
#include "ArduinoJson.h"
#include <SPI.h>
#include "SdFs.h"

StaticJsonDocument<300> doc;

void setup() {
  // put your setup code here, to run once:
  char json[] =
      "{\"name\":\"ChaseShoeByRowUp\",\"description\":\"TurnoneachrowShoesoninsequenceup\",\"delay\":1000,\"commands\":[{\"reverse\":true,\"blank\":true,\"random\":false,\"invert\":true,\"frequency\":-1,\"colour\":[-1,-1,-1],\"fade\":\"in\"}],\"sequence\":{\"steps\":{\"0\":{\"leds\":[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19],\"colour\":[255,255,255],\"block\":true},\"1\":{\"leds\":[20,21,22,23,24,25,26,27,28,29,30,31,32,33,34],\"colour\":[255,255,255],\"block\":true},\"2\":{\"leds\":[35,36,37,38,39,40,41,42,43,44],\"colour\":[255,255,255],\"block\":true},\"3\":{\"leds\":[45,46,47,48,49],\"colour\":[255,255,255],\"block\":true}}}}";
  
  // Deserialize the JSON document
  DeserializationError error = deserializeJson(doc, json);

    // Test if parsing succeeds.
  if (error) {

  }
}

void loop() {
  // put your main code here, to run repeatedly:
}