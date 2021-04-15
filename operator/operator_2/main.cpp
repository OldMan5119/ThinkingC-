#include <iostream>
#include "IPoint.h"

using namespace std;

int main() {
    //加号重载测试
    IPoint p1(4.2, 2.2);
    IPoint p2(4.0, 2.0);
    IPoint p = p1 + p2;
    cout << p.getX() << " : " << p.getY() << endl;
    //输出运算符测试
    cout >> p;
    //索引运算符号测试
    cout << p[0]<< endl;
    cout << p[1]<< endl;
    cout << p[2]<< endl;
    return 0;
}