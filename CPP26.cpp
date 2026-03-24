#include<iostream>
using namespace std;
class A
{
    int a;
    public:
     A()
    {
        cout<<"in default constructor of A"<<endl;
        a=10;
    }
    void display()
    {
        cout<<a<<endl;
    }
};
class B:public A
{
    int b;
    public:
    B()
    {
        cout<<"in default constructor of B"<<endl;
        b=20;
    }
    void display()
    {
        A::display();
        cout<<b<<endl;
    }
};

int main()
{
    B obj1;
    obj1.display();
}