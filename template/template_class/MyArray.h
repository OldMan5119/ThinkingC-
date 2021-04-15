//
// Created by shixin on 2020/12/12.
//

#ifndef THINKINGCPLUS_MYARRAY_H
#define THINKINGCPLUS_MYARRAY_H

#include <iostream>

using namespace std;

template<class T, int KSize, int KValue>
class MyArray {
private:
    T *m_pArr;

public:
    MyArray();

    ~MyArray();

    void display();
};

template<class T, int KSize, int KValue>
MyArray<T, KSize, KValue>::MyArray() {
    m_pArr = new T[KSize];
    for (int i = 0; i < KSize; ++i) {
        m_pArr[i] = KValue;
    }
    cout<<"MyArray()"<<endl;
}

template<class T, int KSize, int KValue>
MyArray<T, KSize, KValue>::~MyArray<T, KSize, KValue>() {
    MyArray<T, KSize, KValue>::m_pArr = NULL;
    delete[] m_pArr;
    m_pArr = NULL;
    cout<<"~MyArray"<<endl;
}

template<class T, int KSize, int KValue>
void MyArray<T, KSize, KValue>::display() {
    for (int i = 0; i < KSize; ++i) {
        cout << m_pArr[i] << endl;
    }
}

#endif //THINKINGCPLUS_MYARRAY_H
