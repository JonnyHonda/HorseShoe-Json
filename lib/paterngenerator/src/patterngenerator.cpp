#include <patterngenerator.h>

bool PatternGenerator::set_json (char* json)
{
     error = deserializeJson(patternJson, json);
    if (!error){
        return true;
    }
    return false;
}

// bool PatternGenerator::load (string filename)
// {
//     fstream ifs(filename);
//     string json( (istreambuf_iterator<char>(ifs) ),
//                        (istreambuf_iterator<char>()    ) );

//     error = deserializeJson(patternJson, json);
//     if (!error){
//         return true;
//     }
//     return false;
// }

int PatternGenerator::get_delay(void)
{
    return patternJson["delay"];   
}

void PatternGenerator::get_name(const char *value)
{
    value = patternJson["name"];     
    
}

// bool PatternGenerator::get_description(char *description)
// {
//     description =  patternJson["description"];     
// }
