1.如果想要暴露具体某个成员的读或写权限，用getter/setter，或者直接public。想要暴露给具体某个类，用friend。
2.全局友元函数解决的是在类外有一个方法test()，该方法会调用类的私有成员，因此编译会报错，为解决这个问题，我们需要将类外的这个方法test()在类中声明为友元函数。
    main.cpp
        void test(Timer &timer) {
            cout << timer.m_hour << ":" << timer.m_min << ":" << timer.m_seconds << endl;
        }
        int main() {
            Timer timer(6, 10, 20);
            test(timer);
            return 0;
        }
    Timer.h
        class{
            friend void test(Timer &timer);
        }
3.成员友元函数