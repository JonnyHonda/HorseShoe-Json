#ifndef PATTERNGENERATOR_H
#define PATTERNGENERATOR_H

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
        bool set_json (char *);
        int get_delay(void);
        void get_name(const char *);
        // bool get_description(char *description);

    private:
        StaticJsonDocument<512> patternJson;
};
#endif