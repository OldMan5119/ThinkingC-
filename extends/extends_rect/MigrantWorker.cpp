//
// Created by shixin on 2020-11-24.
//

#include "MigrantWorker.h"

MigrantWorker::MigrantWorker(string name, string code, string color) : Framer(name, color), Worker(code, color) {
    cout << "MigrantWorker()" << endl;
}

MigrantWorker::~MigrantWorker() {
    cout << "~MigrantWorker" << endl;
}
