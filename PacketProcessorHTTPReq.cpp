#include<PacketProcessorHTTPReq.h>

PacketProcessorHTTPReq::PacketProcessorHTTPReq(Data& data)
    : PacketProcessor(FILTER_HTTP_REQUEST, data)
{
}

bool PacketProcessorHTTPReq::CanBeProcessed(Packet *pkt)
{
    TCP *tcp;
    if (((tcp = pkt->GetLayer<TCP>()) != 0) && tcp->GetDstPort() == 80)
        return true;

    return false;
}

bool PacketProcessorHTTPReq::ProcessPacket(Packet *pkt)
{
    TCP *tcp = pkt->GetLayer<TCP>(2);


    return false;
}
