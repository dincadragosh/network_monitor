#include <iostream>
#include <Detector.h>

using namespace std;

int main()
{
    Detector* detector = Detector::GetDetector();

    cout << "Hello world!" << endl;
    while(1) {}
    return 0;
}
