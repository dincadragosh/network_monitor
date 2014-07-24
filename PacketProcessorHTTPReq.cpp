#include<PacketProcessorHTTPReq.h>

PacketProcessorHTTPReq::PacketProcessorHTTPReq()
    : PacketProcessor(FILTER_HTTP_REQUEST)
{
}

bool PacketProcessorHTTPReq::CanBeProcessed(Packet *pkt)
{
    TCP *tcp;
    if ((tcp = pkt.getLayer<TCP>()) != 0) && tcp->GetDstPort() == 80)
        return true;

    return false;
}

bool PacketProcessorHTTPReqProcessPacket(Packet *pkt)
{
    TCP *tcp;
    if ((tcp = pkt.getLayer<TCP>()) != 0) && tcp->GetDstPort() == 80)
    {

    }

    return false;
}
