#include <Arduino.h>
#include <unity.h>
#define ARDUINOJSON_DECODE_UNICODE 1
#include "ArduinoJson.h"
#include "patterngenerator.h"


void test_function_load_json_pattern(void) {
    PatternGenerator testPattern;
    String STR_TO_TEST;
    bool result = testPattern.load("./sd_card/shoerow1.json");

    TEST_ASSERT_FALSE(result);
    TEST_ASSERT_EQUAL_INT16(1000,testPattern.getdelay());
    STR_TO_TEST = "Chase Shoe By Row Up";

    TEST_ASSERT_EQUAL_STRING(STR_TO_TEST.c_str(), testPattern.getname());  
}

int main(int argc, char **argv) {
    UNITY_BEGIN();
    RUN_TEST(test_function_load_json_pattern);
    UNITY_END();

    return 0;
}
