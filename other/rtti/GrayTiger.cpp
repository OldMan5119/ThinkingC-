//
// Created by shixin on 2020/11/29.
//

#include "GrayTiger.h"
#include <iostream>

GrayTiger::GrayTiger(string color) {
    m_color= color;
    cout << "GrayTiger()" << endl;
}

GrayTiger::~GrayTiger() {
    cout << "~GrayTiger()" << endl;
}

void GrayTiger::swim() {
    cout << m_color << " , GrayTiger -> swim()" << endl;
}

void GrayTiger::run() {
    cout << "GrayTiger -> run()" << endl;
}

void GrayTiger::eat() {
    cout << "GrayTiger -> eat" << endl;
}