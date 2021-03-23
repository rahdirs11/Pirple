#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    cout << "Think of number between 1 and 100 =>" << endl;
    int highest{100}, lowest{}, attempts{}, guess{};
    char response;
    do {
        ++attempts;
        guess = lowest + ((highest - lowest) * 0.5);
        cout << "I guess " << guess << ". Am I right?" << endl << "'q' to quit, 'y' if correct, 'h' if too high, 'l' if too low.\n";
        cin >> response;
        if (tolower(response) == 'y') {
            cout << "I guessed it in " << attempts << endl;
            break;
        } else if (tolower(response) == 'h') {
            highest = guess;
        } else if (tolower(response) == 'l') {
            lowest = guess;
        } else if (tolower(response) == 'q') {
            cout << "You quit. Bye.";
            break;
        } else {
            cout << "I didn't understand that response.";
        }
    } while (lowest < highest);
    if (lowest >= highest) {
        exit(attempts);
    }
    return 0;
}
