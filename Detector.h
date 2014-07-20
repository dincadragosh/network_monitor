#ifndef DETECTOR_H
#define DETECTOR_H
#include <crafter.h>
#include <Globals.h>

using namespace std;
using namespace Crafter;

class Detector
{
private:
    /* static members*/
    static Detector *detector;

    /* members */
    string  interface;
    string  filter;
    Sniffer *sniffer;

    /* constructors */
    Detector(string interface, string filter);

    /* functions */
    static void PacketHandler(Packet* packet, void* user);

public:
    /* singleton */
    static Detector* GetDetector();
};

#endif
