#include <iostream>
#include <string>
using namespace std;

template<typename T>
void add(T a, T b) {
    cout << a << "-" << b << endl;
}

template<typename T, class S>
void display(T t, S s) {
    cout << t << "-" << s << endl;
}

template<typename T, int SIZE>
void print(T t) {
    for (int i = 0; i < SIZE; ++i) {
        cout << t << "-" << i << endl;
    }
}

int main() {

    add<int>(3, 4);

    display<double>(3.01, 2.4);

    print<int, 10>(3);

    print<string , 10>("ok");

    return 0;
}