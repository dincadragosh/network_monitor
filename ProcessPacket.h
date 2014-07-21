#ifndef GLOBALS_H
#define GLOBALS_H

#include<Globals.h>
#include <crafter.h>

using namespace Crafter;

class ProcessPacket
{
private:
    FilterType filterType;

public:
    virtual bool IsMyType(Packet *pkt) = 0;
};

#endif
