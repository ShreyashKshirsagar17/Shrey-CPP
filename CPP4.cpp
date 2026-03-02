#include<iostream>
using namespace std;
int a=20000;
int b=10000;
class Employee
	{   int a1,b1;
	
		public:
		Employee()
		{
		 a1=10;
		 b1=20;
			cout<<"no arg constructor ";
		}
		Employee(int a,int b)
		{
			a1=a;
			b1=b;
			cout<<"parametize constructor";
		}
		void display()
		{
			
			cout<<a1<<endl <<b1;
		}
	};

int main()
{
	cout<<a<<endl<<b;
	Employee e1;
	e1.display();
	Employee e2(100,200);
	e2.display();
	
}
