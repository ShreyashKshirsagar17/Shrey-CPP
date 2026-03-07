#include<iostream>
using namespace std;
class Employee
{
	int empId;
	float salary;
	string name;
	static int totalEmployee;
	
	public:
		Employee()
		{
			
			totalEmployee++;
			cout<<"Enter the employee Id"<<endl;
			cin>>empId;
			cout<<"Enter the Employee name:"<<endl;
			cin>>name;
			cout<<"Enter the Employee salary"<<endl;
			cin>>salary;
			
		}
	
		void display()
		{
			cout<<"The Employee Id is "<<empId<<endl;
			cout<<"The Employee name is :"<<name<<endl;
			cout<<"Salary for this Employee is :"<<salary<<endl;
		}
		static int showTotalEmployees()
		{
			cout<<"Total Employee is :";
			cout<<totalEmployee;
		}
		
};
 string company="Shreyash PVT LMT";
 int Employee::totalEmployee;

 
 
 int main()
 {
 	
 	
 	cout<<company<<endl;
 	int i;
 	
 	Employee e1[5];
 	for(i=0;i<5;i++)
 	{
 	//	e1[i].getValue();
 		e1[i].display();
 		e1[i].showTotalEmployees();
	 }
//	cout<< Employee::showTotalEmployees();
 /*	e1.getValue();
 	e1.display();
 		
 	
 	Employee e2;
 	e2.getValue();
 	e2.display();
 	
 	Employee e3;
 	e3.getValue();
 	e3.display();
 	
 	Employee e4;
 	e4.getValue();
 	e4.display();
 	
 	Employee e5;
 	e5.getValue();
 	e5.display();
 	 */
 	
 	
 	
 	
 }
