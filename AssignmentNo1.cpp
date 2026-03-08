#include<iostream>
using namespace std;
class student
{
	static int roll;
	int d,m,y;
	int mark;
	
	public:
		
	student()
	{
		roll++;
		cout<< " Roll No :"<<roll<<endl;
		cout <<"Enter the date of birth :"<<endl;
		cout<<"Enter the date :";
		cin>>d;
		cout<<"Enter the Month :";
		cin>>m;
		cout<<"Enter the Year :";
		cin>>y;	
		cout<<"Enter the marks 50 out of :";
		cin>>mark;
	}
/*	void getValue()
	{
		
	}*/
/*	student(int a,int b,int c)
	{
		d=a;
		m=b;
		y=c;
		cout<< d<<m<<y;
		
		
	} */
};

int student::roll;
int main()
{
	
	student s1;
	student s2;
	student s3;
	student s4;
	student s5;
	student s6;
	student s7;
	student s8;
	student s9;
	student s10;
	
	
	
	

}
