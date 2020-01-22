#ifndef PATTERNGENERATOR_H
#define PATTERNGENERATOR_H

#include <Arduino.h>
#include "ArduinoJson.h"
#include <fstream>

class PatternGenerator {

    public:
    // Constructor
        PatternGenerator() 
        {

        }  

    DeserializationError error;
    
    // Load
        bool load (String filename);
        String getname(void);
        int getdelay(void);

    private:
        StaticJsonDocument<512> patternJson;
};
#endif