#include <patterngenerator.h>

bool PatternGenerator::set (string json)
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

string PatternGenerator::get_name(void)
{
    return patternJson["name"];     
}

string PatternGenerator::get_description(void)
{
    return patternJson["description"];     
}
