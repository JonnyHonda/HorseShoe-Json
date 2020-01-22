#include <unity.h>
#ifdef ARDUINO
    #include "Ardiuno.h"
    #include <String.h>
#endif
#include "ArduinoJson.h"
#include "patterngenerator.h"

void test_function_load_json_pattern(void) {
    PatternGenerator testPattern;
    bool result = testPattern.load("./sd_card/shoerow1.json");

    TEST_ASSERT_FALSE(result);
    TEST_ASSERT_EQUAL_INT16(1000,testPattern.get_delay());
    TEST_ASSERT_EQUAL_STRING("Chase Shoe By Row Up", testPattern.get_name().c_str());  
    TEST_ASSERT_EQUAL_STRING("Turn on each row Shoes on in sequence up", testPattern.get_description().c_str());  
}

int main(int argc, char **argv) {
    UNITY_BEGIN();
    RUN_TEST(test_function_load_json_pattern);
    UNITY_END();

    return 0;
}
