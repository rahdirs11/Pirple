#ifndef DOG_H
#define DOG_H
#include <string>

using namespace std;

class Dog {
protected:
    virtual float getBasePremium() = 0;
public:
    string dogName, breed;
    int age, weight;
    bool subjectToDiscount;
    Dog(string name, int age, int weight, bool subjectToDiscount):
        dogName{name}, age{age}, weight{weight}, subjectToDiscount{subjectToDiscount} {}

    virtual float getPremium();
    virtual ~Dog();
};

#endif // DOG_H
