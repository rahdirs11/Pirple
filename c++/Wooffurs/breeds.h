#ifndef BREED_H
#define BREED_H

#include "Dog.h"

class Pitbull: public Dog {
public:
    char breedCode;
    float belowRW = 30.20, aboveRW = 35.15;
    int RW = 20;
    Pitbull(string name, int age, int weight, bool subjectToDiscount, char breedCode='p');

    virtual float getBasePremium();
    virtual float getPremium();
    virtual ~Pitbull();

};

class Doberman: public Dog {
    char breedCode;
    float belowRW = 28.16, aboveRW = 30.00;
    int RW = 35;
public:
    Doberman(string name, int age, int weight, bool subjectToDiscount, char breedCode='d');
    virtual float getPremium();
    virtual float getBasePremium();
    virtual ~Doberman();
};

class Rottweiler: public Dog {
    char breedCode;
    float belowRW = 28.00, aboveRW = 29.75;
    int RW = 45;
public:
    Rottweiler(string name, int age, int weight, bool subjectToDiscount, char breedCode='r');
    virtual float getPremium();
    virtual float getBasePremium();
    virtual ~Rottweiler();
};

class GermanShepard: public Dog {
    char breedCode;
    float belowRW = 27.50, aboveRW = 29.75;
    int RW = 30;
public:
    GermanShepard(string name, int age, int weight, bool subjectToDiscount, char breedCode='g');
    virtual float getPremium();
    virtual float getBasePremium();
    virtual ~GermanShepard();
};

class ChowChow: public Dog {
    char breedCode;
    float belowRW = 25.10, aboveRW = 27.50;
    int RW = 24;
public:
    ChowChow(string name, int age, int weight, bool subjectToDiscount, char breedCode='c');

    virtual float getPremium();
    virtual float getBasePremium();
    virtual ~ChowChow();
};

class GreatDane: public Dog {
    char breedCode;
    float belowRW = 25.10, aboveRW = 25.20;
    int RW = 55;
public:
    GreatDane(string name, int age, int weight, bool subjectToDiscount, char breedCode='t');

    virtual float getPremium();
    virtual float getBasePremium();
    virtual ~GreatDane();
};

class PresaCanario: public Dog {
    char breedCode;
    float belowRW = 20.01, aboveRW = 20.55;
    int RW = 45;
public:
    PresaCanario(string name, int age, int weight, bool subjectToDiscount, char breedCode='s');

    virtual float getPremium();
    virtual float getBasePremium();
    virtual ~PresaCanario();
};

class Akita: public Dog {
    char breedCode;
    float belowRW = 19.75, aboveRW = 19.75;
    int RW = 0;
public:
    Akita(string name, int age, int weight, bool subjectToDiscount, char breedCode='k');

    virtual float getPremium();
    virtual float getBasePremium();
    virtual ~Akita();
};

class AlaskanMalamute: public Dog {
    char breedCode;
    float belowRW = 15.50, aboveRW = 18.15;
    int RW = 38;
public:
    AlaskanMalamute(string name, int age, int weight, bool subjectToDiscount, char breedCode='m');

    virtual float getPremium();
    virtual float getBasePremium();
    virtual ~AlaskanMalamute();
};

class Husky: public Dog {
    char breedCode;
    float belowRW = 9.95, aboveRW = 12.00;
    int RW = 20;
public:
    Husky(string name, int age, int weight, bool subjectToDiscount, char breedCode='h');

    virtual float getPremium();
    virtual float getBasePremium();
    virtual ~Husky();
};

class OtherBreed: public Dog {
    char breedCode;
    float belowRW = 4.95, aboveRW = 8.95;
    int RW = 35;
public:
    OtherBreed(string name, int age, int weight, bool subjectToDiscount, char breedCode='b');

    virtual float getPremium();
    virtual float getBasePremium();
    virtual ~OtherBreed();
};

#endif // BREED_H
