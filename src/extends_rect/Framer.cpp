//
// Created by shixin on 2020-11-24.
//

#include "Framer.h"

Framer::Framer(string name, string color) : Person(color) {
    m_strName = name;
    cout << "Framer()" << endl;
}

Framer::~Framer() {
    cout << "~Framer()" << endl;
}

void Framer::sow() {
    cout << "Framer sow()" << endl;
}