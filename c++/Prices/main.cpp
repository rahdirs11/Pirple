#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
//    cout << "Hello world!" << endl;
    float price1{}, price2{}, price3{};
    float total{};
    cout << "Enter a price\n";
    cin >> price1;
    cout << "Enter a price\n";
    cin >> price2;
    cout << "Enter a price\n";
    cin >> price3;
    total = price1 + price2 + price3;
    cout << setiosflags(ios::fixed);
    // 10
    cout << "Price 1 is\nPrice 2 is\nPrice 3 is\nTotal price: " << setprecision(2) << total <<
        endl << setw(10) << right << price1 << endl
        << setw(10) << right << price2 << endl
        << setw(10) << right << price3 << endl;
    return 0;
}
