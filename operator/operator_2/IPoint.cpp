//
// Created by shixin on 2020/12/6.
//

#include "IPoint.h"
#include <iostream>

using namespace std;

IPoint::IPoint(double x, double y) {
    m_y = y;
    m_x = x;
}

double IPoint::getX() {
    return m_x;
}

double IPoint::getY() {
    return m_y;
}

//加号运算符重载(成员函数)
//IPoint IPoint::operator+(IPoint &point) {
//    IPoint iPoint(0, 0);
//    double x = this->m_x + point.m_x;
//    double y = this->m_y + point.m_y;
//    iPoint.m_x = x;
//    iPoint.m_y = y;
//    return iPoint;
//}

//加号运算符重载(友元函数)
IPoint operator+(IPoint &p1, IPoint &p2) {
    IPoint p(0, 0);
    p.m_x = p1.getX() + p2.getX();
    p.m_y = p1.getY() + p2.getY();
    return p;
}

//输出运算符重载
ostream &operator>>(ostream &output, IPoint &point) {
    output << "x = " << point.m_x << " , y = " << point.m_y << endl;
    return output;
}

double IPoint::operator[](int index) {
    if (index == 0) {
        return m_x;
    } else if (index == 1) {
        return m_y;
    }
    return -1;
}
