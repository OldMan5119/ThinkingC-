//
// Created by shixin on 2020/11/28.
//

#include "BlackTiger.h"

BlackTiger::BlackTiger(string color) {
    m_color = color;
    cout << "BlackTiger()" << endl;
}

BlackTiger::~BlackTiger() {
    cout << "~BlackTiger()" << endl;
}

void BlackTiger::ClimbTree() {
    cout << m_color << " : BlackTiger -> ClimbTree()" << endl;
}

void BlackTiger::eat() {
    cout << "BlackTiger -> eat()" << endl;
}

void BlackTiger::run() {
    cout << "BlackTiger -> run() " << endl;
}