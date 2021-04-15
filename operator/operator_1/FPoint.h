//
// Created by shixin on 2020/11/29.
//

#ifndef THINKINGCPLUS_FPOINT_H
#define THINKINGCPLUS_FPOINT_H


class FPoint {

public:

    FPoint(float x, float y);

    float getX();

    float getY();

    //Parameter of overloaded post-increment operator must have type 'int' (not 'FPoint &')
    //FPoint &operator++(FPoint &fPoint);错误，只能声明为int类型，表示为后置++，其中int为标志性参数
    //后置++不能返回当前对象的引用，因为返回的值是++之前的值。
    FPoint operator++(int);

    //前置++
    FPoint &operator++();

private:
    float m_x, m_y;
};


#endif //THINKINGCPLUS_FPOINT_H
