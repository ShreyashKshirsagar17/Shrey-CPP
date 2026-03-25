#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    A()
    {
        cout<<"default of class A"<<endl;
    }
    A(int z)
    {
        cout<<"para constructor of class A"<<endl;
        a=z;
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
   
    B():A(100)
    {
        b=200;
    }
    void display()
    {
        cout << "inside b class display" << endl;
        
        cout<<b<<endl;
        A::display();

    }
};

int main()
{
    B obj1;
    obj1.display();
    
}