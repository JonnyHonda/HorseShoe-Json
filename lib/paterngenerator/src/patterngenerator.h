#ifndef ARDUINO
using namespace std;
#endif
#ifndef PATTERNGENERATOR_H
#define PATTERNGENERATOR_H

#ifdef ARDUINO
    #include <Arduino.h>
    #include <String.h>
#else
    #include <string>
#endif
// #include <fstream>
#include "ArduinoJson.h"

class PatternGenerator {

    public:
    // Constructor
        PatternGenerator() 
        {

        }  

    DeserializationError error;
    
    // Load
        //bool load (string filename);
        bool PatternGenerator::set (string json)
        int get_delay(void);
        string get_name(void);
        string get_description(void);

    private:
        StaticJsonDocument<512> patternJson;
};
#endif