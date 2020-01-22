#include <unity.h>
#define ARDUINOJSON_DECODE_UNICODE 1
#include "ArduinoJson.h"
#include <fstream>
#include <string>
using namespace std;

void test_function_json_pattern(void) {
    StaticJsonDocument<512> doc;
      fstream ifs("./sd_card/shoerow1.json");
      string content( (std::istreambuf_iterator<char>(ifs) ),
                       (std::istreambuf_iterator<char>()    ) );
      DeserializationError error = deserializeJson(doc, content);
      const int delay = doc["delay"];
        TEST_ASSERT_EQUAL(delay,1000);
      
}

int main(int argc, char **argv) {
    UNITY_BEGIN();
    RUN_TEST(test_function_json_pattern);
    UNITY_END();

    return 0;
}