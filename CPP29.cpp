#include<iostream>
using namespace std;
class A
{
    int a;
    public:
    A(){
        a=10;
    }
    void display()
    {
        cout<<"from class A"<<a<<endl;
    }
};

class B:public A
{
   const static int b=20;
  public:
    B(){
        //  b=20;
    }
    public:
    static void display()
    {
       // A::display();
        cout<<"from class B"<<b<<endl;
    }
};

class C:public B
{
    int c;
    public:
    C(){
        c=30;
    }
    void display()
    {
        A::display();
        // B::display();
        cout<<"From class C"<<c<<endl;
    }
    
};
int main()
{
    // C c1;
    // c1.display();
    // B b1;
    B::display();
    B b1;
    b1.display();
    
}