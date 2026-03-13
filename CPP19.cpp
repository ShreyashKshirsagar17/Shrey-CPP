#include<iostream>
using namespace std;

class student
{
	int rollNo;
	float marks;
	public:
		student()
		{
			cout<<"no arg constructor is called "<<endl;
			rollNo=100;
			
			marks=89.9f;
			
		}
		void display()
		{
			cout<<"rollNo is "<<rollNo<<endl;
			cout<<"marks is "<<marks<<endl;
			
		}
		
};
int main()
{
	student*prt=student();//syntax for object to run in heap
	ptr->display();
	
	
}
