#ifndef CLIENTINFO_H
#define CLIENTINFO_H

class ClientInfo
{
private:
public:
    byte mac[6];

    ClientInfo(byte *mac);
};

#endif
