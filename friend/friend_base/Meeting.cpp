//
// Created by 石鑫 on 2020/11/29.
//

#include "Meeting.h"
#include <iostream>

using namespace std;

Meeting::Meeting() {

}

Meeting::~Meeting() {

}

void Meeting::printMeetingTimer(Timer &timer) {
    cout << timer.m_hour << ":" << timer.m_min << ":" << timer.m_seconds << endl;
}