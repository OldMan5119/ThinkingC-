//
// Created by shixin on 2020/11/29.
//

#include "Point.h"

Point::Point(int x, int y) {
    m_x = x;
    m_y = y;
}

int Point::getX() {
    return m_x;
}

int Point::getY() {
    return m_y;
}
//声明成员函数运算符重载
Point &Point::operator-() {
    m_x = m_x - 1;
    m_y = m_y - 1;
    return *this;
}
//声明友元函数运算符重载
Point &operator+(Point &fPoint) {
    fPoint.m_x = fPoint.m_x + 1;
    fPoint.m_y = fPoint.m_y + 1;
    return fPoint;
}
