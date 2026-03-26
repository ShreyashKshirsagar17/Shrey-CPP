#include<iostream>
using namespace std;
class Complex
{
    public:
    int img,real;

    Complex(int r,int i)
    {
        real=r;
        img=i;

    }
    Complex operator+(Complex obj)
    {
        Complex temp(0,0);
        temp.real=real+obj.real;
        temp.img=img+obj.img;
        return temp;
    }
};
int main()
{
    Complex c1(2,3);
    Complex c2(4,5);
    Complex c3=c1+c2;

    cout<<"result: "<<c3.real<<"+"<<c3.img<<"i";
}