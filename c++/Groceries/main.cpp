#include <iostream>
#include <iomanip>

using namespace std;

float processLineItem(int, const char*, float);

int main()
{
//    cout << "Hello world!" << endl;
    float runningTotal{};
    runningTotal += processLineItem(5, "Pringles", 99);
    runningTotal += processLineItem(10, "Mountain Dew", 20);
    runningTotal += processLineItem(1, "Badminton Racket", 2600);
    return 0;
}

float processLineItem(int quantity, const char *description, float price) {
    float lineTotal = quantity * price;
    cout << setw(4) << left << quantity <<
            setw(25) << left << description << right
            << setw(5) << price << << endl;
    return lineTotal;
}
