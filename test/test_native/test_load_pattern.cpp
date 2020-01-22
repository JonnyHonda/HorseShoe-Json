#include <unity.h>
#include <string>
#include "ArduinoJson.h"
#include "patterngenerator.h"

void test_function_load_json_pattern(void) {
    PatternGenerator testPattern;
    bool result = testPattern.set("{\"name\":\"ChaseShoeByRowUp\",\"description\":\"TurnoneachrowShoesoninsequenceup\",\"delay\":1000,\"commands\":[{\"reverse\":true,\"blank\":true,\"random\":false,\"invert\":true,\"frequency\":-1,\"colour\":[-1,-1,-1],\"fade\":\"in\"}],\"sequence\":{\"steps\":{\"0\":{\"leds\":[0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19],\"colour\":[255,255,255],\"block\":true},\"1\":{\"leds\":[20,21,22,23,24,25,26,27,28,29,30,31,32,33,34],\"colour\":[255,255,255],\"block\":true},\"2\":{\"leds\":[35,36,37,38,39,40,41,42,43,44],\"colour\":[255,255,255],\"block\":true},\"3\":{\"leds\":[45,46,47,48,49],\"colour\":[255,255,255],\"block\":true}}}}");

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
