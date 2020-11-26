//
// Created by shixin on 2020-11-24.
//

#include "base_person.h"

base_person::base_person(string name) {
    m_strName = name;
    cout << "base_person()" << endl;
}

base_person::~base_person() {
    cout << "~base_person() , m_strName = " << m_strName << endl;
}

//void base_person::work() {
//    cout << "worker work !"<<endl;
//}