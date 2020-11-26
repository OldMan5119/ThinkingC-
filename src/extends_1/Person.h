//
// Created by shixin on 2020-11-23.
//

#ifndef THINKING_PERSON_H
#define THINKING_PERSON_H

#include <string>
#include <iostream>
using  namespace std;

class Person {
protected:
    string m_strName;
public:
    Person();
    ~Person();
    void play();

};


#endif //THINKING_PERSON_H
