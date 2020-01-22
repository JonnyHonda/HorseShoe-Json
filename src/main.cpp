#include <Arduino.h>
#include "ArduinoJson.h"
#include <SPI.h>
#include "SdFs.h"

StaticJsonDocument<300> doc;

void setup() {
  // put your setup code here, to run once:
  char json[] =
      "{\"sensor\":\"gps\",\"time\":1351824120,\"data\":[48.756080,2.302038]}";
  
  // Deserialize the JSON document
  DeserializationError error = deserializeJson(doc, json);

    // Test if parsing succeeds.
  if (error) {

  }
}

void loop() {
  // put your main code here, to run repeatedly:
}