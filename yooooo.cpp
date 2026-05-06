#include<iostream>
using namespace std;

void isPrime()
{
    int num;
    cout<<"Enter a num:";
    cin>>num;
	if(num==2)
	{
		cout<<"no is prime ";
	}
	for(int i=2;i<num;i++)
	{
		if(num%i==0)
		{
			cout<<"no is not a prime ";
			break;
		}
	}

		
			cout<<"no is a prime";
		
	
}
int main()
{
    isPrime();

}
