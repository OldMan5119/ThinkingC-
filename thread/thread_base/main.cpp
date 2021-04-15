#include <iostream>
#include <thread>
#include "Worker.h"

using namespace std;

void print_thread() {
    cout << "my print thread ~" << "" << endl;
}

/**
 * 构建线程的几种方式
 */
void createThreadTest() {
    thread myThread(print_thread);
    myThread.detach();

    Worker worker(1);
    thread worker_thread_1(&Worker::workPinter, &worker, 0);
    worker_thread_1.join();

    thread worker_thread_2(worker);
    worker_thread_2.join();

    auto lam_thread = [] {
        cout << "hello main 111~" << endl;
    };
    thread worker_thread_3(lam_thread);
    worker_thread_3.join();

    cout << "hello main 123~" << endl;
}

///////////////////////////////////////////////////////////////
////
///////////////////////////////////////////////////////////////

void print_thread1(const int a, const Worker &worker) {
    cout << "a = " << &a << ", p = " << &worker << endl;
}

/**
 * 线程的坑
 */
void threadProblem() {
    int a = 9;
    int age = 19;
    const Worker worker(2);
    thread pthread(print_thread1, a, worker);
    pthread.detach();

}

int main() {
    threadProblem();
    cout << "main 1~" << endl;
    cout << "main 2~" << endl;
    cout << "main 3~" << endl;
    cout << "main 4~" << endl;
    cout << "main 5~" << endl;
    cout << "main 6~" << endl;
    cout << "main 7~" << endl;
    cout << "main 8~" << endl;
    cout << "main 9~" << endl;
    cout << "main 1~" << endl;
    cout << "main 2~" << endl;
    cout << "main 3~" << endl;
    cout << "main 4~" << endl;
    cout << "main 5~" << endl;
    cout << "main 6~" << endl;
    cout << "main 7~" << endl;
    cout << "main 8~" << endl;
    cout << "main 9~" << endl;
}
