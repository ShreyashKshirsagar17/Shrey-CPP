#include<iostream>
using namespace std;



int area(int a)
{
	cout<<a*a<<endl;
}
int area(int a,int b)
{
	cout<<a*b<<endl;
}
int main()
{
	area(5);
	area(5,6);
}
