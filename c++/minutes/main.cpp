#include <iostream>

using namespace std;

int main()
{
    int minutes{};
    cin >> minutes;

    int seconds{minutes * 60};
    cout << "There are " << seconds << " seconds in " << minutes << " minutes\n";
    return 0;
}
