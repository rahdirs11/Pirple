#include <iostream>

using namespace std;

int main()
{
//    cout << "Hello world!" << endl;
    const int MINUTES_PER_HOUR{60};
    int numHours{4};
//    MINUTES_PER_HOUR++;
    ++numHours; // numHours++;
    cout << "There are " << (numHours * MINUTES_PER_HOUR) << " in " << numHours << " hours\n";
    unsigned int zeroHour{};
    zeroHour -= 1;
    cout << "1 hour before zero hour is " << zeroHour << endl;
    return 0;
}
