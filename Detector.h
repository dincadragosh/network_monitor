#ifndef DETECTOR_H
#define DETECTOR_H
#include <crafter.h>
#include <Globals.h>

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

    /* functions */
    static void PacketHandler(Packet* packet, void* user);

    /* constructors */
    Detector(string interface, string filter);

public:
    /* singleton */
    static Detector* InitDetector(const Configuration& config);

    void StartCapture();

};

#endif
