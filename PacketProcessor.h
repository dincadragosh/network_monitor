#ifndef PACKETPROCESSOR_H
#define PACKETPROCESSOR_H

#include <Globals.h>
#include <crafter.h>

using namespace Crafter;

class PacketProcessor
{
private:
    vector<PacketProcessor*> processors;

    PacketProcessor* GetPacketProcessor(FilterType filterType);
protected:
    FilterType filterType;

    PacketProcessor(FilterType filterType);
    FilterType GetFilterType();
public:
    PacketProcessor(vector<FilterType> filterTypes);
    virtual ~PacketProcessor();

    virtual bool CanBeProcessed(Packet *pkt);
    virtual bool ProcessPacket(Packet *pkt);
};

#endif
