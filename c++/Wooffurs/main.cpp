#include <iostream>
#include <iomanip>
#include <string>

#include "Dog.h"
#include "breeds.h"

using namespace std;

int main()
{
    cout << setiosflags(ios::fixed);
    cout << setprecision(2);
    int dogCount{};
    float totalPremium{};
    cout << "Please enter the number of dogs in your household:\t";
    cin >> dogCount;
    for (int i = 1; i <= dogCount; ++i) {
        float actualPremium{};// , basePremium{};
        int weight{}, age{};
        // bool subjectToDiscount{};
        char breedCode{};
        string dogName{};
        cout << "Enter the name of the dog #" << i << ":\t";
        cin.ignore();   // clears the input buffer
        getline(cin, dogName);
        cout << "Enter the correct age for " << dogName << ":\t";
        cin >> age;
        cout << "Enter the weight for " << dogName << ":\t";
        cin >> weight;
        cout << "Enter the breed code for " << dogName << ":\t";
        cin >> breedCode;
        switch(breedCode) {
            // check for the breed code
        case 'p':
            // pitbull
            {
            Pitbull dogP(dogName, age, weight, false);
            actualPremium = dogP.getPremium();
            totalPremium += actualPremium;
            cout << "The monthly premium for " << (dogP.dogName) << " is " << (actualPremium) << endl;
            }
        break;
        case 'd':
            // doberman
            {
                Doberman dogD(dogName, age, weight, true);
                actualPremium = dogD.getPremium();
                totalPremium += actualPremium;
                cout << "The monthly premium for " << (dogD.dogName) << " is " << (actualPremium) << endl;
            }

        break;
        case 'r':
            // rottweiler
            {
                Rottweiler dogR(dogName, age, weight, false);
                actualPremium = dogR.getPremium();
                totalPremium += actualPremium;
                cout << "The monthly premium for " << (dogR.dogName) << " is " << (actualPremium) << endl;
            }
            break;
        case 'g':
            // german shepard
            {
                GermanShepard dogG(dogName, age, weight, true);
                actualPremium = dogG.getPremium();
                totalPremium += actualPremium;
                cout << "The monthly premium for " << (dogG.dogName) << " is " << (actualPremium) << endl;
            }
            break;
        case 'c':
            // chow chow
            {
                ChowChow dogC(dogName, age, weight, true);
                actualPremium = dogC.getPremium();
                totalPremium += actualPremium;
                cout << "The monthly premium for " << (dogC.dogName) << " is " << (actualPremium) << endl;
            }
            break;
        case 't':
            // great dane
            {
                GreatDane dogGD(dogName, age, weight, true);
                actualPremium = dogGD.getPremium();
                totalPremium += actualPremium;
                cout << "The monthly premium for " << (dogGD.dogName) << " is " << (actualPremium) << endl;
            }
            break;
        case 's':
            // presa canario
            {
                PresaCanario dogPC(dogName, age, weight, false);
                actualPremium = dogPC.getPremium();
                totalPremium += actualPremium;
                cout << "The monthly premium for " << (dogPC.dogName) << " is " << (actualPremium) << endl;
            }
            break;
        case 'k':
            // akita
            {
                Akita dogA(dogName, age, weight, false);
                actualPremium = dogA.getPremium();
                totalPremium += actualPremium;
                cout << "The monthly premium for " << (dogA.dogName) << " is " << (actualPremium) << endl;
            }
            break;
        case 'm':
            // alaskan malamute
            {
                AlaskanMalamute dogAM(dogName, age, weight, true);
                actualPremium = dogAM.getPremium();
                totalPremium += actualPremium;
                cout << "The monthly premium for " << (dogAM.dogName) << " is " << (actualPremium) << endl;
            }
            break;
        case 'h':
            // husky
            {
                Husky dogH(dogName, age, weight, true);
                actualPremium = dogH.getPremium();
                totalPremium += actualPremium;
                cout << "The monthly premium for " << (dogH.dogName) << " is " << (actualPremium) << endl;
            }
            break;
        case 'b':
            // other breed
            {
                OtherBreed dogOB(dogName, age, weight, true);
                actualPremium = dogOB.getPremium();
                totalPremium += actualPremium;
                cout << "The monthly premium for " << (dogOB.dogName) << " is " << (actualPremium) << endl;
            }
            break;
        default:
            cout << "Sorry. That is not a valid breed code. Please re-enter this dog's information!" << endl;
            --i;
            // basePremium = 0;
        }


        cout << "The total monthly premium for all dogs is " << totalPremium << endl;

    }
    return 0;
}
