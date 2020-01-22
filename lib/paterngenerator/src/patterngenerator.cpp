#include <patterngenerator.h>
bool PatternGenerator::load (String filename)
{
    fstream ifs(filename);
    string json( (istreambuf_iterator<char>(ifs) ),
                       (istreambuf_iterator<char>()    ) );

    error = deserializeJson(patternJson, json);
    if (!error){
        return true;
    }
    return false;
}

string PatternGenerator::getname(void)
{
        return patternJson["name"];   
}

int PatternGenerator::getdelay(void)
{
        return patternJson["delay"];   
}