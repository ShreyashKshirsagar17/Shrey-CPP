#include<iostream>
using namespace std;
class complex
{
	int real,img;
	
	public:
	void accept()
	{
		cout<<"enter real no:";
		cin>>real;
		cout<<"enter img no:";
		cin>>img;
	}
	void display()
	{
		cout<<"real no is "<<real<< endl <<"img no is "<<img <<endl;
		cout<<real<<"+"<<img<<"i";
		
		
	}
	void setReal(int n)
	{
		cout<<"know you are in shreyash" <<endl;
		real=n;
		
	}
	
	int getReal()
	{
		return real;
	}
};
int main()
{
	complex c1;
	c1.accept();
	c1.display();
	c1.setReal(200);
	int n=c1.getReal();
	cout<<n;
	return 0;
	
    
}
