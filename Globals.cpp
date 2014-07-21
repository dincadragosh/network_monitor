#include <Globals.h>
#include <Configuration.h>

/* Configuration */
Configuration factoryConfig;

/* Global Variables */
string pcap_filter[] =
{
    /* FILTER_HTTP */ "tcp and dst port 80",
    /* FILTER_ALL */  "tcp and dst port 80"
};


/*factory config */
FilterType factory_filter = FILTER_HTTP;
