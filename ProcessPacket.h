#ifndef PROCESSPACKET_H
#define PROCESSPACKET_H

#include <Globals.h>
#include <crafter.h>

using namespace Crafter;

class ProcessPacket
{
private:
    FilterType filterType;

public:
    FilterType GetFilterType();

    ProcessPacket(FilterType filterType);

    virtual bool CanBeProcessed(Packet *pkt) = 0;
    virtual bool Process(Packet *pkt) = 0;
};

#endif
