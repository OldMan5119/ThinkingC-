//
// Created by shixin on 2021/4/12.
//

#include "Worker.h"

Worker::Worker(int age) : _age(age) {
    _age = age;
    cout << "Worker 构造函数" << endl;

}

Worker::Worker(const Worker &worker) : _age(worker._age) {
    cout << "Worker copy 构造函数 age = " << _age << endl;
}

Worker::~Worker() {
    cout << "Worker 析构函数" << endl;
}

void Worker::operator()() {
    cout << "Worker operator..." << endl;
}

void Worker::workPinter(int a) {
    cout << "workPinter...a = " << a << endl;
}