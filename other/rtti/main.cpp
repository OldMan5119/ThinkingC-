#include <iostream>
#include "ITiger.h"
#include "BlackTiger.h"
#include "GrayTiger.h"

void test(ITiger *tiger) {
    tiger->eat();
    tiger->run();
    cout << typeid(tiger).name() << endl;
    cout << typeid(*tiger).name() << endl;
    if (typeid(*tiger) == typeid(BlackTiger)) {
        BlackTiger *blackTiger = dynamic_cast<BlackTiger*>(tiger);
        blackTiger->ClimbTree();
    } else if (typeid(*tiger) == typeid(GrayTiger)) {
        GrayTiger *grayTiger  = dynamic_cast<GrayTiger*>(tiger);
        grayTiger->swim();
    }
}

int main() {
    BlackTiger *blackTiger = new BlackTiger("black");
    GrayTiger *grayTiger = new GrayTiger("gray");
    test(blackTiger);
    test(grayTiger);
    delete blackTiger;
    delete grayTiger;
    return 0;
}