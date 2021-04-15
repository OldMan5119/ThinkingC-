1.dynamic_cast注意事项
    a)只能用于指针和引用之间的转换。
    b)要转换的类中必须包含虚函，因为主要用于多太类型。
    c)转换成功返回子类的地址，否则返回NULL。
2.type_id注意事项
    a)type_id返回一个type_info的对象。
    b)如果想通过基类指针获取派生类的数据类型，基类必须包含虚函数。
    c)只能获取当前对象是基类还是子类，无法判断指针是子类指针还是基类指针。
    ITiger *tiger = new BlackTiger("black");
    cout << typeid(tiger).name() << endl; //打印的是tiger指针指向的类型，即：ITiger
    cout << typeid(*tiger).name() << endl; //打印的是tiger指针指向的内容类型，即：BlackTiger