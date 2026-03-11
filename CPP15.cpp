#include<iostream>
using namespace std;
int main()
{
	int a[5]={1,2,3,4,5};
	int sum=0;
	int i;
	
	for(i=0;i<6;i++)
	{
		sum=sum+a[i];
	}
	cout<<sum;
}
