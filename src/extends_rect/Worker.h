//
// Created by shixin on 2020-11-24.
//

#ifndef THINKING_WORKER_H
#define THINKING_WORKER_H

#include "Person.h"
#include <string>

using namespace std;


class Worker : virtual public Person {
public:
    Worker(string code = "001",string color = "blue");

    virtual ~Worker();

    void carry();

protected:
    string m_strCode;
};


#endif //THINKING_WORKER_H
