//
// Created by shixin on 2020/11/29.
//

#include "Match.h"
#include "iostream"
#include "Timer.h"
using namespace std;

Match::Match() {

}

Match::~Match() {

}

void Match::printTimer(const Timer &timer) {
    cout << timer.m_hour << ":" << timer.m_min << ":" << timer.m_seconds << endl;
}