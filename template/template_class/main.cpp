#include <iostream>
#include <string>
#include "MyArray.h"

using namespace std;


int main() {

    MyArray<double, 5, 1> *myArray = new MyArray<double, 5, 1>();
    myArray->display();
    delete myArray;
    return 0;
}