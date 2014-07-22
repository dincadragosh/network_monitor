#include <ProcessPacket.h>

ProcessPacket::ProcessPacket(FilterType filterType)
    : filterType(filterType)
{

}

FilterType ProcessPacket::GetFilterType()
{
    return this->filterType;
}
