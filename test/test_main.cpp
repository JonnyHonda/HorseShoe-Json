#include <unity.h>
#define ARDUINOJSON_DECODE_UNICODE 1
#include "ArduinoJson.h"

void test_function_json_pattern(void) {
    StaticJsonDocument<200> doc;
    char json[] =
      "{\"sensor\":\"gps\",\"time\":1351824120,\"data\":[48.756080,2.302038]}";
      DeserializationError error = deserializeJson(doc, json);
    TEST_ASSERT_TRUE(true);
}

int main(int argc, char **argv) {
    UNITY_BEGIN();
    RUN_TEST(test_function_json_pattern);
    UNITY_END();

    return 0;
}