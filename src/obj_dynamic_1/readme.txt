1.多太实现父类调用子类的方法，需要在父类的方法前面加上virtual关键字。
    Shape *p1 = new Circle(3);
    Shape *p2 = new Rect(3,4);
    p1->calcArea();
    p2->calcArea();
    delete p1;
    delete p2;
2.虚函数注意事项
    a)普通函数不能是虚函数,即函数必须是一个类的成员函数，不能是一个全局函数。
    b)静态成员函数不能是虚函数。
    c)内联函数不能是虚函数。
    d)不能修饰构造函数