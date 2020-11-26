//
// Created by shixin on 2020-11-24.
//

#ifndef THINKING_PERSON_H
#define THINKING_PERSON_H

#include <string>
#include <iostream>

using namespace std;

class base_person {
public:
    base_person(string name);

    virtual ~base_person();

    virtual void work() = 0;

private:
    string  m_strName;
};


#endif //THINKING_PERSON_H
