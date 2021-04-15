//
// Created by shixin on 2020-11-24.
//

#ifndef THINKING_MIGRANTWORKER_H
#define THINKING_MIGRANTWORKER_H

#include "Framer.h"
#include "Worker.h"
using namespace std;


class MigrantWorker :public Framer,public Worker{

public:
    MigrantWorker(string name,string code ,string color);
    ~MigrantWorker();

};


#endif //THINKING_MIGRANTWORKER_H
