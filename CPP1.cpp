#include<iostream>
using namespace std;
class MyData
{
	int date,month,year;
	
	public:
	
	void Accept()
	{
		cout<< " give the values for date , month and year" <<endl;
		cin>>date >>month >>year;
		
	}
	void display()
	{
		cout<<date<<"/"<<month<<"/"<<year <<endl;
	}
	void setData(int d)
	{
		cout<<"Now your in the setter ";
		date=d;
	}
	
};
int main()
{
	MyData d1;
	cout<<"the total size of object is "<<sizeof(d1)<<endl;
	d1.Accept();
	d1.display();
	d1.setData(10);
	d1.display();
	//cout<<d1.date;
	
}
