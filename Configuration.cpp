#include <Configuration.h>

//Constructors
Configuration::Configuration()
    : filterType(FILTER_HTTP)
{
}

//Filter
FilterType Configuration::GetFilterType()
{
    return this->filterType;
}

string  Configuration::GetPcapFilter()
{
    return pcap_filter[this->filterType];
}
