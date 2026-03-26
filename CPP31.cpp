#include<iostream>
using namespace std;
class Employee
{
	int id;
	public:
	Employee()
	{
		cout<<"zero argument Employee const is called\n";
		id=0;
	}
	Employee(int id)
	{
		cout<<" Employee para const is called\n";
		id=id;
	}
	void display()
	{
		cout<<"id of an employee is "<<id<<endl;
	}
	int computeSalary()
	{
		return 0;
	}
};
class WageEmployee:public Employee
{
	int hrs,rate;
	public:
	WageEmployee()
	{
		cout<<"zero argument WageEmployee const is called\n";
		hrs=rate=0;
	}
	WageEmployee(int id,int hrs,int rate):Employee(id)
	{
		cout<<" WageEmployee para const is called\n";
		this->hrs=hrs;
		this->rate=rate;
	}
	void display()
	{
		Employee::display();
		cout<<"hrs of an employee is "<<hrs<<endl;
		cout<<"rate of an employee is "<<rate<<endl;
	}
	int computeSalary()
	{
		return hrs*rate;
	}
};
class SalesPerson:public WageEmployee
{
	int sales,comm;
	public:
	SalesPerson()
	{
		cout<<"zero argument SalesPerson const is called\n";
		sales=comm=0;
	}
	SalesPerson(int id,int hrs,int rate,int sales,int comm)
	:WageEmployee(id,hrs,rate)
	{
		cout<<" SalesPerson para const is called\n";
		this->sales=sales;
		this->comm=comm;
	}
	void display()
	{
		WageEmployee::display();
		cout<<"sales of an employee is "<<sales<<endl;
		cout<<"comm of an employee is "<<comm<<endl;
	}
	int computeSalary()
	{
		return   WageEmployee::computeSalary()+(sales*comm);
		
	}
};
int main()
{
	SalesPerson s1;
	s1.display();

}