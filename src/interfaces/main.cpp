#include <iostream>
#include "Flyable.h"
#include "FighterPlane.h"

void flyMath(Flayable *f1, Flayable *f2) {
    f1->takeoff();
    f1->land();
    f2->takeoff();
    f2->land();
}

int main() {
    FighterPlane *p1 = new FighterPlane("1");
    FighterPlane *p2 = new FighterPlane("2");
    flyMath(p1, p2);
    delete p1;
    delete p2;
    p1 = NULL;
    p2 = NULL;


    return 0;
}