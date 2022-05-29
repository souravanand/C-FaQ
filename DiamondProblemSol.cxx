/*
Vritual base class /Virtual inheritance/disinheritance

pick up the problamtic class ->use virtual keyword in all place where you are inheriting base class

virtually it will be like 

c-->B1
c-->B2
C------->A
*/

#include<iostream>
using namespace std;
class A{
    public:
    int a;
    void func1()
    {
        cout<<"func1"<<endl;
    }
};

class B1:virtual public A{
    public:
    int b1;
    void func2()
    {
        cout<<"func2"<<endl;
    }
};

class B2:virtual public A{
    public:
    int b2;
    void func3()
    {
        cout<<"func3"<<endl;
    }

};

class C:public B1,public B2{
    public:
    int c;
    void func4()
    {
        cout<<"func4"<<endl;
    }
};

int main()
{
    C obj;
    cout<<(sizeof(obj)/sizeof(int));
    obj.func4();
    obj.func3();
    obj.func2();
    obj.func1();
}
