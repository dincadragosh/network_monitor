#ifndef GLOBALS_H
#define GLOBALS_H

#include <iostream>
#include <fstream>
#include <string>

using namespace std;

/* Config */
class Configuration;
extern Configuration factoryConfig;

/* ---------------------------
 * Processed Packets variables
 * ---------------------------
 */
 typedef byte Mac[6];

//Time:
#define UNIT_TIME 60 //sec
extern time_t time_current;
//Info structures:
// - Active


/* Filter */
enum FilterType
{
    FILTER_HTTP_REQUEST,
    FILTER_ALL
};

extern string pcap_filter[];

#endif
