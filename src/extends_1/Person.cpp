//
// Created by shixin on 2020-11-23.
//

#include "Person.h"

Person::Person() {
    cout << "Person()" << endl;
}

Person::~Person() {
    cout << "~Person()" << endl;
}

void Person::play() {
    cout << "Person play()" << endl;
}