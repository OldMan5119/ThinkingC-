//
// Created by shixin on 2020/12/6.
//

#ifndef THINKINGCPLUS_IPOINT_H
#define THINKINGCPLUS_IPOINT_H
#include <iostream>
using namespace std;


class IPoint {
    //加号运算符重载(友元函数)
    friend IPoint operator+(IPoint &p1, IPoint &p2);
    //输出运算符重载
    friend ostream &operator>>(ostream &output,IPoint &point);



private:
    double m_x;
    double m_y;
public:
    IPoint(double x, double y);

    double getX();

    double getY();

    //索引运算符重载
    double operator[](int index);

    //加号运算符重载(成员函数)
    //IPoint operator+(IPoint &point);
};


#endif //THINKINGCPLUS_IPOINT_H
