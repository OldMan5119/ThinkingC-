//
// Created by shixin on 2020-11-24.
//

#include "worker.h"
worker::worker(string name): base_person(name) {
    cout << "worker()" <<endl;
}

worker::~worker(){
    cout << "~worker()" <<endl;
}

void worker::work() {
    cout << "worker work !"<<endl;
}
