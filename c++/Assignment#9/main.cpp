#include <iostream>
#include <string>
using namespace std;

string trim(string word) {
    // function to remove white spaces from either end of the string
    string trimmed = word;
    // removes spaces from the beginning

    while (trimmed[0] == ' ') {
        trimmed.erase(0, 1);
    }

    // removes spaces from the end
    int right = trimmed.length() - 1;
    while (right >= 0 && trimmed[right] == ' ') {
        trimmed.erase(right, 1);
        --right;
    }
    return trimmed;
}



int main()
{
    string fullName{}, title{}, artist{};
    while (true) {
        cout << "Enter a track or 'Q' to quit:\t";
        getline(cin, fullName);
        if (fullName == "q") {
            break;
        }
        if (fullName.length() < 5) {
            cout << "Please enter a track with more than five characters." << endl;
            continue;
        } else {
            // if : is found -> artist:title format
            // if - is found, title - artist
            // if 'by', last occurrence separates title and artist, title first
            size_t colon = fullName.find(':');
            if (colon != string::npos) {
                artist = trim(fullName.substr(0, colon));
                title = trim(fullName.substr(colon + 1));
            } else {
                size_t hyphen = fullName.find('-');
                if (hyphen != string::npos) {
                    title = trim(fullName.substr(0, hyphen));
                    artist = trim(fullName.substr(hyphen + 1));
                } else {
                    int byCount = 0, pos = 0;
                    size_t by = fullName.find(" by ", pos);
                    while (by != string::npos) {
                        ++byCount;
                        pos = by;
                        by = fullName.find(" by ", by + 4);
                    }
                    title = trim(fullName.substr(0, pos));
                    artist = trim(fullName.substr(pos + 4));
                }
            }
        }
        cout << "TITLE: " << title << '.' << endl << "ARTIST: " << artist << '.' << endl;
    }
    return 0;
}
