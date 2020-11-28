//
// Created by shixin on 2020/11/28.
//

#ifndef THINKINGCPLUS_BLACKTIGER_H
#define THINKINGCPLUS_BLACKTIGER_H
#include "ITiger.h"
#include "string"
#include <iostream>
using namespace std;

class BlackTiger : public ITiger{

public:
    BlackTiger(string color);
    ~BlackTiger();
    void ClimbTree();
    void run() override;
    void eat() override;

private:
    string m_color;
};


#endif //THINKINGCPLUS_BLACKTIGER_H
