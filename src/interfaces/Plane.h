//
// Created by 石鑫 on 2020/11/26.
//

#ifndef THINKINGCPLUS_PLANE_H
#define THINKINGCPLUS_PLANE_H

#include "Flyable.h"
#include <string>
#include <iostream>

using namespace std;

class Plane : public Flayable {
public:
    Plane(string num);

    virtual ~Plane();

    void printNumber();

    virtual void takeoff();

    virtual void land();

private:
    string m_strNumber;
};


#endif //THINKINGCPLUS_PLANE_H
