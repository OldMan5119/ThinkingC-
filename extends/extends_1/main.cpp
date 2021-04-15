#include <iostream>
#include "Soldier.h"
#include "Person.h"


int main() {
    Soldier soldier;
    Person person = soldier;
    person.play();
    return 0;
}