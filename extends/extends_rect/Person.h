//
// Created by shixin on 2020-11-24.
//

#ifndef THINKING_PERSON_H
#define THINKING_PERSON_H

#include <string>
#include <iostream>

using namespace std;


class Person {
public:
    Person(string color = "blue");

    virtual ~Person();

    void  printColor();

protected:
    string m_strColor;

};


#endif //THINKING_PERSON_H
