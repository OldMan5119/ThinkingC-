#include <iostream>
#include "Point.h"
#include "FPoint.h"
#include <iostream>

using namespace std;

int main() {
    Point point(4, 9);
    -point;
    cout << point.getX() << " : " << point.getY() << endl;
    +point;
    cout << point.getX() << " : " << point.getY() << endl;

    FPoint fPoint(3.4,3.9);
    cout << (fPoint++).getX() << " : " << fPoint.getY() << endl;
    ++fPoint;
    cout << fPoint.getX() << " : " << fPoint.getY() << endl;

    return 0;
}