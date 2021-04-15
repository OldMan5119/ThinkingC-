//
// Created by shixin on 2020/11/29.
//

#ifndef THINKINGCPLUS_POINT_H
#define THINKINGCPLUS_POINT_H


class Point {
    //声明友元函数运算符重载
    friend Point &operator+(Point &fPoint);

public:
    Point(int x, int y);

    int getX();

    int getY();

    //声明成员函数运算符重载
    Point &operator-();

private:
    int m_x, m_y;

};


#endif //THINKINGCPLUS_POINT_H
