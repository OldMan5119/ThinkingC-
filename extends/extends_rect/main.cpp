#include <iostream>
#include "MigrantWorker.h"
#include "Worker.h"

int main() {
//    std::cout << "Hello, World!" << std::endl;

    MigrantWorker *p = new MigrantWorker("zhangsan", "12", "black");
    delete p;
    p=NULL;

//    Person *p = new Worker("002","RED");
//    delete p;
//    p = NULL;
    return 0;
}