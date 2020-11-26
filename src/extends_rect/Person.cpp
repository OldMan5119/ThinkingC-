//
// Created by shixin on 2020-11-24.
//

#include "Person.h"

Person::Person(string color) {
    m_strColor = color;
    cout << "Person()" << endl;
}

Person::~Person() {
    cout << "~Person()" << endl;
}

void Person::printColor() {
    cout << "Person printColor" << m_strColor << endl;
}