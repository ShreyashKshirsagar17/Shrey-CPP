#include<iostream>
using namespace std;

class student
{
	public:
		int real,com;
		
	student(int r,int c)
	{
		this->real=r;
		this->com=c;
		
		cout<<"real no is "<<real<<endl;
		cout<<"com no is "<<com;
		
	}
};


int main()
{ 
 	student s1(10,20);
	

}
