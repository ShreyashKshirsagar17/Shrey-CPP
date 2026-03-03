#include<iostream>
using namespace std;
class employee
{
	int id,sal;
	
	public:
		
	
	employee()
	{
	  	cout<<"Defult constructor"<<endl;
		id=1001;
		sal=50000;
	}
	
	employee(int a, int b)
	{
		cout<<"Parametrize constructor"<<endl;
		id=a;
		sal=b;
	}
	
	void display()const
	{
		cout<<id <<endl <<sal <<endl;
	}
	
	void setId(int identity)
	{
		id=identity;
		cout<<" identity is ";
	}
	
	void setSal(int salary)
	{
		sal=salary;
		cout<<" salary is ";
	}

	int getId()const
	{
	   return id;	
	}
	
	int getSal()const
	{
	   return sal;	
	}
};
int main()
{
	employee e1;
	const employee e2(2002,45000);
	
	e1.display();
	e2.display();
	
	e1.setId(3003);
	int x=e1.getId();
	
	cout<<x<<endl;
	
	e1.setSal(80000);
	int y=e1.getSal();
	
	cout<<y;
	
	
}

