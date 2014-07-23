#include <PacketProcessor.h>

PacketProcessor::PacketProcessor(FilterType filterType)
    : filterType(filterType)
{
}

FilterType PacketProcessor::GetFilterType()
{
    return this->filterType;
}
