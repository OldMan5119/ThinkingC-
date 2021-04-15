#include <iostream>

using namespace std;

template<class T>
void swapValue(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
};
int main(){

}

int main_1() {
    int a = 2;
    int b = 3;
    //自动类型推倒
    swapValue(a, b);
    //指定类型
    swapValue<int>(a, b);
    cout << a << endl;
    cout << b << endl;
    return 0;
}
