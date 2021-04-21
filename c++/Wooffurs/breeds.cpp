#include "breeds.h"

Pitbull::Pitbull(string name, int age, int weight, bool subjectToDiscount, char breedCode):
    Dog{name, age, weight, subjectToDiscount}, breedCode{breedCode} {
        Pitbull::breed = "a Pitbull";
    }

float Pitbull::getBasePremium() {
        return Pitbull::weight < Pitbull::RW? Pitbull::belowRW: Pitbull::aboveRW;
}

float Pitbull::getPremium() {
    float value{Pitbull::getBasePremium()};
    if (Pitbull::subjectToDiscount && Pitbull::age > 13) {
        value -= value * .20;
    }

    if (Pitbull::weight > 50) {
        value -= value * .25;
    }
    return value;
}

///////////////////////////////////////////////////////////////////////////////////////////////////


Doberman::Doberman(string name, int age, int weight, bool subjectToDiscount, char breedCode):
        Dog{name, age, weight, subjectToDiscount}, breedCode{breedCode} {
            Doberman::breed = "a Doberman";
        }

float Doberman::getBasePremium() {
        return Doberman::weight < Doberman::RW? Doberman::belowRW: Doberman::aboveRW;
}

float Doberman::getPremium() {
    float value{Doberman::getBasePremium()};
    if (Doberman::subjectToDiscount && Doberman::age > 13) {
        value -= value * .20;
    }

    if (Doberman::weight > 50) {
        value -= value * .25;
    }
    return value;
}

///////////////////////////////////////////////////////////////////////////////////////////////////


Rottweiler::Rottweiler(string name, int age, int weight, bool subjectToDiscount, char breedCode):
    Dog{name, age, weight, subjectToDiscount}, breedCode{breedCode} {
        Rottweiler::breed = "a Rottweiler";
    }

float Rottweiler::getBasePremium() {
        return Rottweiler::weight < Rottweiler::RW? Rottweiler::belowRW: Rottweiler::aboveRW;
}

float Rottweiler::getPremium() {
    float value{Rottweiler::getBasePremium()};
    if (Rottweiler::subjectToDiscount && Rottweiler::age > 13) {
        value -= value * .20;
    }

    if (Rottweiler::weight > 50) {
        value -= value * .25;
    }
    return value;
}

///////////////////////////////////////////////////////////////////////////////////////////////////


GermanShepard::GermanShepard(string name, int age, int weight, bool subjectToDiscount, char breedCode):
        Dog{name, age, weight, subjectToDiscount}, breedCode{breedCode} {
            GermanShepard::breed = "a German Shepard";
        }

float GermanShepard::getBasePremium() {
        return GermanShepard::weight < GermanShepard::RW? GermanShepard::belowRW: GermanShepard::aboveRW;
}

float GermanShepard::getPremium() {
    float value{GermanShepard::getBasePremium()};
    if (GermanShepard::subjectToDiscount && GermanShepard::age > 13) {
        value -= value * .20;
    }

    if (GermanShepard::weight > 50) {
        value -= value * .25;
    }
    return value;
}

///////////////////////////////////////////////////////////////////////////////////////////////////


ChowChow::ChowChow(string name, int age, int weight, bool subjectToDiscount, char breedCode):
        Dog{name, age, weight, subjectToDiscount}, breedCode{breedCode} {
            ChowChow::breed = "a Chow Chow";
        }

float ChowChow::getBasePremium() {
        return ChowChow::weight < ChowChow::RW? ChowChow::belowRW: ChowChow::aboveRW;
}

float ChowChow::getPremium() {
    float value{ChowChow::getBasePremium()};
    if (ChowChow::subjectToDiscount && ChowChow::age > 13) {
        value -= value * .20;
    }

    if (ChowChow::weight > 50) {
        value -= value * .25;
    }
    return value;
}

///////////////////////////////////////////////////////////////////////////////////////////////////



GreatDane::GreatDane(string name, int age, int weight, bool subjectToDiscount, char breedCode):
        Dog{name, age, weight, subjectToDiscount}, breedCode{breedCode} {
            GreatDane::breed = "a Great Dane";
        }

float GreatDane::getBasePremium() {
        return GreatDane::weight < GreatDane::RW? GreatDane::belowRW: GreatDane::aboveRW;
}

float GreatDane::getPremium() {
    float value{GreatDane::getBasePremium()};
    if (GreatDane::subjectToDiscount && GreatDane::age > 13) {
        value -= value * .20;
    }

    if (GreatDane::weight > 50) {
        value -= value * .25;
    }
    return value;
}

///////////////////////////////////////////////////////////////////////////////////////////////////


PresaCanario::PresaCanario(string name, int age, int weight, bool subjectToDiscount, char breedCode):
        Dog{name, age, weight, subjectToDiscount}, breedCode{breedCode} {
            PresaCanario::breed = "a Presa Canario";
        }

float PresaCanario::getBasePremium() {
        return PresaCanario::weight < PresaCanario::RW? PresaCanario::belowRW: PresaCanario::aboveRW;
}

float PresaCanario::getPremium() {
    float value{PresaCanario::getBasePremium()};
    if (PresaCanario::subjectToDiscount && PresaCanario::age > 13) {
        value -= value * .20;
    }

    if (PresaCanario::weight > 50) {
        value -= value * .25;
    }
    return value;
}

///////////////////////////////////////////////////////////////////////////////////////////////////


Akita::Akita(string name, int age, int weight, bool subjectToDiscount, char breedCode):
        Dog{name, age, weight, subjectToDiscount}, breedCode{breedCode} {
            Akita::breed = "an Akita";
        }

float Akita::getBasePremium() {
        return Akita::weight < Akita::RW? Akita::belowRW: Akita::aboveRW;
}

float Akita::getPremium() {
    float value{Akita::getBasePremium()};
    if (Akita::subjectToDiscount && Akita::age > 13) {
        value -= value * .20;
    }

    if (Akita::weight > 50) {
        value -= value * .25;
    }
    return value;
}

///////////////////////////////////////////////////////////////////////////////////////////////////


AlaskanMalamute::AlaskanMalamute(string name, int age, int weight, bool subjectToDiscount, char breedCode):
        Dog{name, age, weight, subjectToDiscount}, breedCode{breedCode} {
            AlaskanMalamute::breed = "an Alaskan Malamute";
        }

float AlaskanMalamute::getBasePremium() {
        return AlaskanMalamute::weight < AlaskanMalamute::RW? AlaskanMalamute::belowRW: AlaskanMalamute::aboveRW;
}

float AlaskanMalamute::getPremium() {
    float value{AlaskanMalamute::getBasePremium()};
    if (AlaskanMalamute::subjectToDiscount && AlaskanMalamute::age > 13) {
        value -= value * .20;
    }

    if (AlaskanMalamute::weight > 50) {
        value -= value * .25;
    }
    return value;
}

///////////////////////////////////////////////////////////////////////////////////////////////////

Husky::Husky(string name, int age, int weight, bool subjectToDiscount, char breedCode):
        Dog{name, age, weight, subjectToDiscount}, breedCode{breedCode} {
            Husky::breed = "a Husky";
        }

float Husky::getBasePremium() {
        return Husky::weight < Husky::RW? Husky::belowRW: Husky::aboveRW;
}

float Husky::getPremium() {
    float value{Husky::getBasePremium()};
    if (Husky::subjectToDiscount && Husky::age > 13) {
        value -= value * .20;
    }

    if (Husky::weight > 50) {
        value -= value * .25;
    }
    return value;
}

///////////////////////////////////////////////////////////////////////////////////////////////////

OtherBreed::OtherBreed(string name, int age, int weight, bool subjectToDiscount, char breedCode):
        Dog{name, age, weight, subjectToDiscount}, breedCode{breedCode} {
            OtherBreed::breed = "another breed";
        }

float OtherBreed::getBasePremium() {
        return OtherBreed::weight < OtherBreed::RW? OtherBreed::belowRW: OtherBreed::aboveRW;
}

float OtherBreed::getPremium() {
    float value{OtherBreed::getBasePremium()};
    if (OtherBreed::subjectToDiscount && OtherBreed::age > 13) {
        value -= value * .20;
    }

    if (OtherBreed::weight > 50) {
        value -= value * .25;
    }
    return value;
}
