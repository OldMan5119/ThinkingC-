//
// Created by shixin on 2020/11/29.
//

#ifndef THINKINGCPLUS_TIMER_H
#define THINKINGCPLUS_TIMER_H

#include "Match.h"
#include "Meeting.h"
//class Meeting;
class Timer {

public:
    Timer(int hour, int min, int seconds);

    virtual ~Timer();

    //声明为友元类
    friend Meeting;

    //全局友元函数
    friend void test(Timer &timer);

    //成员友元函数
    friend void Match::printTimer(const Timer &timer);

private:
    int m_hour;
    int m_min;
    int m_seconds;
};


#endif //THINKINGCPLUS_TIMER_H
