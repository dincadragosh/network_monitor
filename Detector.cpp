#include<Detector.h>

Detector::Detector(string interface, string filter)
	: interface(interface), filter(filter)
{
    sniffer = new Sniffer(filter, interface);
}

void Detector::PacketHandler(Packet* packet, void* user)
{
    cout << "got packet!" << endl;
}

/* static members */
Detector* Detector::detector = 0;


/* static functions */
Detector* Detector::GetDetector()
{
    if (Detector::detector == 0)
    {
        Detector::detector = new Detector("wlan0", "tcp and dst port 80");
    }

    Detector::detector->sniffer->Spawn(-1);

    return Detector::detector;
}
