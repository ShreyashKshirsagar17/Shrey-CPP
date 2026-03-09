#include<iostream>
using namespace std;
class Test
{
	int a;
	public:
	
	void get()
	{
		cout<<"enter value of a";
		cin>>a;
		
	}
	
	void add(Test& new_aobj2)
	{
		int sum;
		cout<<this->a<<endl;
		cout<<a<<endl;
		sum=a+new_aobj2.a;
		cout<<new_aobj2.a<<endl;
		cout<<"addition of both object is :"<<sum;
		
	}
};
int main()
{
	Test aobj1,aobj2;
	aobj1.get();
	aobj2.get();
	aobj1.add(aobj2);
}
