#ifndef GLOBALS_H
#define GLOBALS_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/* Config */
class Configuration;
extern Configuration factoryConfig;

/* Filter */

enum FilterType
{
    FILTER_HTTP,
    FILTER_ALL
};

extern string pcap_filter[];

/*factory config */
extern FilterType factory_filter;

#endif
