#include <iostream>
#include <cctype>
using namespace std;

const char PLAYER_X{'X'}, PLAYER_O{'O'};
char board[3][3] = {
        {'1', '2', '3'},
        {'4', '5', '6'},
        {'7', '8', '9'}
    };



//void displayBoard(char *ch) {
//    cout << endl << "current board state:" << endl << endl;
//    for (int y{}; y < 3; ++y) {
//        cout << "    ";
//        for (int x{}; x < 3; ++x) {
//            cout << *ch++;
//            if (x != 2) {
//                cout << '|';
//            }
//        }
//        cout << endl << endl;
//        if (y != 2) {
//            cout << "    ";
//            for (int i{}; i < 3; ++i) {
//                cout << '-';
//                if (i != 2) {
//                    cout << '+';
//                }
//            }
//            cout << endl << endl;
//        }
//    }
//    cout << endl << endl;
//}


////int hasWon(char *ch, char p) {
////    if (*(ch) == p && p == *(ch + 1) && p == *(ch + 2)) {
////        cout << "Player " << p << " has won on top row!" << endl;
////        return 1;
////    } else if (*(ch + 3) == p && p == *(ch + 4) && *(ch + 5) == p) {
////        cout << "Player " << p << " has won on middle row!" << endl;
////        return 2;
////    } else if (*(ch + 6) == p && *(ch + 7) == p && *(ch + 8) == p) {
////        cout << "Player " << p << " has won on bottom row!" << endl;
////        return 3;
////    } else if (*ch == p && *(ch + 3) == p && *(ch + 6) == p) {
////        cout << "Player " << p << " has won on left column!" << endl;
////        return 4;
////    } else if (*(ch + 1) == p && *(ch + 4) == p && *(ch + 7) == p) {
////        cout << "Player " << p << " has won on middle column!" << endl;
////        return 5;
////    } else if (*(ch + 2) == p && *(ch + 5) == p && *(ch + 8) == p) {
////        cout << "Player " << p << " has won on right column!" << endl;
////        return 6;
////    } else if (*ch == p && *(ch + 4) == p && *(ch + 8) == p) {
////        cout << "Player " << p << " has won on upward diagonal!" << endl;
////        return 7;
////    } else if (*(ch + 2) == p && *(ch + 4) == p && *(ch + 6) == p) {
////        cout << "Player " << p << " has won on downward diagonal!" << endl;
////        return 8;
////    } else {
////        return -1;
////    }
////
////}
bool checkForEndGame(int turnNumber, char p) {
    bool retVal = false;
    if (board[0][0] == p && p == board[0][1] && p == board[0][2]) {
        cout << "Player " << p << " has won on top row!" << endl;
        return true;
    } else if (board[1][0] == p && p == board[1][1] && board[1][2] == p) {
        cout << "Player " << p << " has won on middle row!" << endl;
        return true;
    } else if (board[2][0] == p && board[2][1] == p && board[2][2] == p) {
        cout << "Player " << p << " has won on bottom row!" << endl;
        return true;
    } else if (board[0][0] == p && board[1][0] == p && board[2][0] == p) {
        cout << "Player " << p << " has won on left column!" << endl;
        return true;
    } else if (board[0][1] == p && board[1][1] == p && board[2][1] == p) {
        cout << "Player " << p << " has won on middle column!" << endl;
        return true;
    } else if (board[0][2] == p && board[1][2] == p && board[2][2] == p) {
        cout << "Player " << p << " has won on right column!" << endl;
        return true;
    } else if (board[0][0] == p && board[1][1] == p && board[2][2] == p) {
        cout << "Player " << p << " has won on upward diagonal!" << endl;
    } else if (board[0][2] == p && board[1][1] == p && board[2][0] == p) {
        return true;
        cout << "Player " << p << " has won on downward diagonal!" << endl;
        return true;
    }
    return retVal;
}


void displayBoard() {
    cout << endl << "current board state:" << endl << endl;
    for (int y{}; y < 3; ++y) {
        cout << "    ";
        for (int x{}; x < 3; ++x) {
            cout << board[y][x];
            if (x != 2) {
                cout << '|';
            }
        }
        cout << endl << endl;
        if (y != 2) {
            cout << "    ";
            for (int i{}; i < 3; ++i) {
                cout << '-';
                if (i != 2) {
                    cout << '+';
                }
            }
            cout << endl << endl;
        }
    }
    cout << endl << endl;
}

void getPlayerChoice(char player) {
    int chosenSquare{};
    while (true) {
        cout << "Player " << player << ", enter a number between 1 and 9: ";
        cin >> chosenSquare;
        if (chosenSquare > 9 || chosenSquare < 0) {
            cout << "Not a valid choice. Try Again.\n";
            continue;
        }
        if (board[(chosenSquare - 1) / 3][(chosenSquare - 1) % 3] == 'X' || board[(chosenSquare - 1) / 3][(chosenSquare - 1) % 3] == 'O') {
            cout << "That square is not available. Try again." << endl;
            continue;
        }
        break;
    }
    board[(chosenSquare - 1) / 3][(chosenSquare - 1) % 3] = player;
}


int main() {


    char lastPlayer{PLAYER_O}, currentPlayer{PLAYER_X};

    bool isGameOver = false;
    for (int i{1}; i <= 9; ++i) {
        displayBoard();
        if (checkForEndGame(lastPlayer=='X'? 1: 0, lastPlayer)) {
            isGameOver = true;
            break;
        }
        getPlayerChoice(currentPlayer);
        swap(currentPlayer, lastPlayer);
    }

    if (!isGameOver) {
        cout << "Draw, nobody Wins.\n";
    }
    cout << endl << endl;
    return 0;
}
