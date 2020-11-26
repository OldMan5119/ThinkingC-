#include <iostream>
#include "Shape.h"
#include "Circle.h"
#include "Rect.h"

int main() {
    Shape *p1 = new Circle(3);
    Shape *p2 = new Rect(3, 4);
    p1->calcArea();
    p2->calcArea();
    delete p1;
    delete p2;
    p1 = NULL;
    p2 = NULL;


    return 0;
}