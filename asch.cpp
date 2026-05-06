#include<iostream>
using namespace std;
class ABC
{
	int id;
	string name;
	
	public:
	void setData()
	{
		cout<<"enter the id";
		cin>>id;
		cout<<"enter the name ";
		cin>>name;
		
		}
		
	void getData()
	{
		cout<<id;
		cout<<name;
		}	
};
int main()
{
	int n;
	cout<<"enter how many id and name you want to print";
	cin>>n;
	ABC ob[20];

	for(int i=0;i<n;i++)
	{
		ob[i].setData();
		cout<<endl;
		
		
	}
	for(int i=0;i<n;i++)
	{
	   ob[i].getData();
	   cout<<endl;	
	}
	

	
}
