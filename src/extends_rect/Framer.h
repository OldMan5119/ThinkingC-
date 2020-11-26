//
// Created by shixin on 2020-11-24.
//

#ifndef THINKING_FRAMER_H
#define THINKING_FRAMER_H

#include "Person.h"

using namespace std;

class Framer : virtual public Person{
public:
    Framer(string name = "jack", string color = "blue");

    virtual ~Framer();

    void sow();

protected:
    string m_strName;

};


#endif //THINKING_FRAMER_H
