//
// Created by shixin on 2020-11-23.
//

#ifndef THINKING_SOLDIER_H
#define THINKING_SOLDIER_H

#include <iostream>
#include "Person.h"
using namespace std;

class Soldier : public Person{
protected:
    int m_iAge;
public:
    Soldier();

    ~Soldier();

    void play();
};


#endif //THINKING_SOLDIER_H
