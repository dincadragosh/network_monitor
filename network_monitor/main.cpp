#include <iostream>
#include <Globals.h>
#include <MonitoringSystem.h>


using namespace std;

int main()
{
    ethMonitor = new MonitoringSystem(ethFactoryConfig);

    while(1) {}
    return 0;
}
