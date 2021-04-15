线程创建方式：
1.thread my_thread(fun()),其中fun()是一个函数。
    直接调用的函数方法进行执行，fun为右值。
2.thread my_thread(worker)。
    Worker类需要重载()运算符才有效, 将会执行worker对象中的重载()方法，my_thread会将worker对象拷贝一份到线程中执行，所以主线程执行完成不影响子线程。
3.thread my_thread(&Worker::workPinter, &worker, 0);
    第一个参数是workPinter方法指针，第二个参数是worker对象，第三个参数是函数的参数，直接调用的Worker类的指定方法，不进行拷贝，
    要避免主线程执行完后影响子线程内存情况化，需要使用智能指针。
4.使用lamda表达式进行线程执行。
    auto lam_thread = []{
          cout << "hello main 111~" << endl;
      };
    thread worker_thread_3(lam_thread);
    worker_thread_3.join();

///////////////////////////////////////////////////////////////
//// 遇到的坑
///////////////////////////////////////////////////////////////

void print_thread1(const int a, const Worker &worker) {
    cout << "a = " << &a << ", p = " << &worker << endl;
}
void threadProblem() {
    int a = 9;
    int age = 19;
    const Worker worker(2);
    //这句代码有问题，事实上存在，当前线程执行完了，age都被销毁了，然后系统再开启线程将age隐试转换成worker对象
    //并且这种写法的情况下，Worker对象是在子线程中创建的。
    thread pthread(print_thread1, a, age);
    //这句代码会显试的进行worker对象的创建，不存在上一句代码问题。
    thread pthread(print_thread1, a, worker);
    pthread.detach();
}
总结：
    1.基本数据类型不使用引用传递，要传递对象类型，避免隐式对象转换(29行代码)，尽量将所有对象都显示创建出来。
    2.thread pthread(print_thread1, a, worker)传入的worker在线程内部会copy一份，所以在线程内部进行值修改不会
      影响到主线程中的worker对象，如果想让传入的引用就是主线错的对象，使用std::ref()进行处理，
      如：thread pthread(print_thread1, a, std::ref(worker))