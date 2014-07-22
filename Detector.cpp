#include<Detector.h>
#include<Configuration.h>

/* STATIC */
/* static members */
Detector* Detector::detector = 0;

/* static functions */
Detector* Detector::InitDetector(const Configuration& config)
{
    if (Detector::detector == 0)
    {
        Detector::detector = new Detector(config.GetInterface(), config.GetPcapFilter());
        Detector::detector->sniffer->SetPacketHandler(Detector::PacketHandler);
        Detector::detector->sniffer->Spawn(-1);
    }

    return Detector::detector;
}

void Detector::PacketHandler(Packet* packet, void* user)
{
    cout << "got packet!" << endl;
}

/* NON-STATIC */

Detector::Detector(string interface, string filter)
	: interface(interface), filter(filter)
{
    sniffer = new Sniffer(filter, interface);
}

Detector::~Detector()
{
    delete this->sniffer;
}


void Detector::StartCapture()
{
    this->sniffer->Spawn(-1);
}
