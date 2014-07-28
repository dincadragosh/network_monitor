#include <PacketProcessor.h>

PacketProcessor::PacketProcessor(FilterType filterType)
    : filterType(filterType)
{
}

FilterType PacketProcessor::GetFilterType()
{
    return this->filterType;
}

bool PacketProcessor::CanBeProcessed(Packet *pkt)
{
    return false;
}
 bool PacketProcessor::ProcessPacket(Packet *pkt)
 {
    return false;
 }
