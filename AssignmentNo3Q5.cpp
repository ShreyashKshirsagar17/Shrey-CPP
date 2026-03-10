#include<iostream>
using namespace std;


int add(int a=10,int b=20)
{
	cout<<a+b;
}




int main()
{
   add();
   add(50);
   add(10,20);
   
}
