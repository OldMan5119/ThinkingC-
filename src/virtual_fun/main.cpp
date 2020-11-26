#include <iostream>
#include "base_person.h"
#include "worker.h"

int main() {
    base_person *p1 = new worker("zhang san");
    p1->work();
    delete p1;
    p1 = NULL;


    return 0;
}