//
// Created by shixin on 2020-11-24.
//

#ifndef THINKING_WORKER_H
#define THINKING_WORKER_H
#include "base_person.h"
#include <string>
using namespace std;

class worker : public base_person{
public:
    worker(string name);

    virtual ~worker();

    virtual void work();

};


#endif //THINKING_WORKER_H
