//
// Created by 石鑫 on 2020/11/26.
//

#include "Plane.h"

Plane::Plane(string num) {
    m_strNumber = num;
    cout << "Plane()" << endl;
}

Plane::~Plane() {
    cout << "~Plane" << endl;
}

void Plane::takeoff() {
    cout << "Plane " << m_strNumber << " takeoff()" << endl;
}

void Plane::land() {
    cout << "Plane " << m_strNumber << " land()" << endl;
}

void Plane::printNumber() {
    cout << "Plane printNumber() , m_strNumber" << m_strNumber << endl;
}