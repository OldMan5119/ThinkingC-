//
// Created by shixin on 2020-11-24.
//

#include "Worker.h"

Worker::Worker(string code, string color) : Person(color) {
    m_strCode = code;
    cout << "Worker()" << endl;
}

Worker::~Worker() {
    cout << "~Worker()" << endl;
}

void Worker::carry() {
    cout << "Worker carry()" << endl;
}