#include<string.h>
#include <ClientInfo.h>


ClientInfo::ClientInfo(byte *mac)
{
    memcpy(&this->mac, mac, sizeof(this->mac));
}
