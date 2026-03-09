#include<iostream>
using namespace std;
int main()
{
	int s[5]={2,1,3,5,4};
	int i;
	int largest=s[0];
	for(i=0;i<6;i++)
	{
		//cout<<s[i];
		if (s[i]>largest)
		{
			largest=s[i];
			
		}
		
	}
	cout<<largest;
}
