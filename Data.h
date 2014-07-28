#ifndef DATA_H
#define DATA_H

#include <map>
#include <queue>
#include <ClientInfo.h>

class Data
{
private:

public:
    string interface;

    //HTTP Requests
    class ProcessedHTTPReq;
    map<ClientInfo, map<string, ProcessedHTTPReq*> > activeProcessedInfo_HTTPReq;
    queue<ProcessedHTTPReq* > saveProcessedInfo_HTTPReq;
};

#endif
