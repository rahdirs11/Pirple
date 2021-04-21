#ifndef OTHER_BREED_H
#define OTHER_BREED_H

#include "Dog.h"

class OtherBreed: public Dog {
public:
    OtherBreed(string name, char breedCode, int age, int weight, bool discount): Dog(name, breedCode, age, weight, discount) {}

    float getBasePremium() {
    }
};


#endif // OTHER_BREED_H
