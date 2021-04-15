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
3.成员友元函数是指，在一个类中访问另外一个类的私有成员，此时编译报错，为解决这个问题，需要在被访问的类中声明访问类定义的方法，并加上friend关键字
    示例中Match类的 printTimer(const Timer &timer)访问了Timer中的私有成员，需要在Timer中声明printTimer方法并加上friend关键字。

4.友元类: 在Timer.h中声明friend Meeting;则在Meeting类中可以访问Timer的任意私有成员和私有方法。
    注意:声明友元类时，不能通过include的方式引入，而是需要通过class声明引入。

总结：
    1.友元不可以传递.
    2.友元关系单项性，A是B的友元函数或友元类，不一定B也是A的友元。
    3.友元函数声明无个数限制。
    4.友元是封装的补充,尽量不要使用友元。