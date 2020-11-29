#include <iostream>
#include "Timer.h"
#include <istream>

using namespace std;

void test(Timer &timer) {
    //此处无法访问类内部的私有变量，我们需要将此方法声明为friend
    cout << timer.m_hour << ":" << timer.m_min << ":" << timer.m_seconds << endl;
}

int main() {
    Timer timer(6, 10, 20);
    test(timer);
    return 0;
}