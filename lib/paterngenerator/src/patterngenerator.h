using namespace std;
#ifndef PATTERNGENERATOR_H
#define PATTERNGENERATOR_H

#include <string>
#include <fstream>
#include "ArduinoJson.h"

class PatternGenerator {

    public:
    // Constructor
        PatternGenerator() 
        {

        }  

    DeserializationError error;
    
    // Load
        bool load (string filename);
        int get_delay(void);
        string get_name(void);
        string get_description(void);

    private:
        StaticJsonDocument<512> patternJson;
};
#endif