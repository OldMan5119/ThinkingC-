//
// Created by shixin on 2021/4/12.
//

#ifndef THINKINGCPLUS_WORKER_H
#define THINKINGCPLUS_WORKER_H

#include <iostream>

using namespace std;

class Worker {
    int _age;
public:
    Worker(int age);

    Worker(const Worker &worker);

    ~Worker();

    void operator()();

    void workPinter(int a);
};


#endif //THINKINGCPLUS_WORKER_H
