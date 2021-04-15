//
// Created by shixin on 2020/11/29.
//

#include "FPoint.h"

FPoint::FPoint(float x, float y) {
    m_x = x;
    m_y = y;
}

float FPoint::getX() {
    return m_x;
}

float FPoint::getY() {
    return m_y;
}

FPoint &FPoint::operator++() {
    m_x++;
    m_y++;
    return *this;
}

FPoint FPoint::operator++(int) {
    FPoint temp(*this);//拷贝构造
    m_x++;
    m_y++;
    return temp;
}