//
// Created by shixin on 2020-11-24.
//

#ifndef THINKING_RECT_H
#define THINKING_RECT_H

#include "Shape.h"


class Rect : public Shape{
public:
    Rect(int width, int high);

    ~Rect();

    void calcArea();

};


#endif //THINKING_RECT_H
