//
// Created by shixin on 2020/11/29.
//

#ifndef THINKINGCPLUS_GRAYTIGER_H
#define THINKINGCPLUS_GRAYTIGER_H
#include "ITiger.h"
#include <string>
using namespace std;
class GrayTiger : public ITiger{
public:
    GrayTiger(string color);
    ~GrayTiger();
    void swim();
    void eat() override;
    void run() override;

public:
    string m_color;
};


#endif //THINKINGCPLUS_GRAYTIGER_H
