#include <Globals.h>
#include <Configuration.h>


/* Global Variables */

/* Configuration */
Configuration factoryConfig;

string pcap_filter[] =
{
    /* FILTER_HTTP_REQUEST */ "tcp and dst port 80",
    /* FILTER_ALL */  "tcp and dst port 80"
};


