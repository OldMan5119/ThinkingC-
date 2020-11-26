//
// Created by shixin on 2020-11-24.
//

#ifndef THINKING_CIRCLE_H
#define THINKING_CIRCLE_H

#include "Shape.h"


class Circle : public Shape{
public:
    Circle(int radius);
    ~Circle();
    void calcArea();
};


#endif //THINKING_CIRCLE_H
