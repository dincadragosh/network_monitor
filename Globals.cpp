#include <Globals.h>
#include <Configuration.h>


/* Global Variables */

/* Configuration */
Configuration factoryConfig;

/* ---------------------------
 * Processed Packets variables
 * ---------------------------
 */
 //Time:
time_t time_current;
//Info structures:
// - Active
map<ClientInfo, map<string, ProcessedPacket* >>

string pcap_filter[] =
{
    /* FILTER_HTTP_REQUEST */ "tcp and dst port 80",
    /* FILTER_ALL */  "tcp and dst port 80"
};


