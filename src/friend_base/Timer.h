//
// Created by shixin on 2020/11/29.
//

#ifndef THINKINGCPLUS_TIMER_H
#define THINKINGCPLUS_TIMER_H


class Timer {

public:
    Timer(int hour, int min, int seconds);

    virtual ~Timer();

    friend void test(Timer &timer);

private:
    int m_hour;
    int m_min;
    int m_seconds;
};


#endif //THINKINGCPLUS_TIMER_H
