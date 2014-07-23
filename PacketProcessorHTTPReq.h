#ifndef PACKETPROCESSORHTTPREQ_H
#define PACKETPROCESSORHTTPREQ_H

class PacketProcessorHTTPReq : public PacketProcessor
{
private:
public:
    PacketProcessorHTTPReq();

    virtual bool CanBeProcessed(Packet *pkt);
    virtual bool ProcessPacket(Packet *pkt);
};

#endif
