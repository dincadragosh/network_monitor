#ifndef CONFIGURATION_H
#define CONFIGURATION_H

#include<Globals.h>

class Configuration
{
private:
    //Filter
    FilterType filterType;
public:
    //Constructors
    Configuration();

    //Filter
    FilterType GetFilterType();
    string GetPcapFilter();
};

#endif
