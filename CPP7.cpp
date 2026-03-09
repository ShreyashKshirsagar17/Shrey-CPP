#include<iostream>
using namespace std;
void test(int &x, int y)
{
	x+=5;
	y*=2;
	cout<<x<<endl<<y<<endl;
	
}
int main()
{
	int a=3 ,b=4;
	test(a,b);
	cout<<a<<endl<<b<<endl;
}

