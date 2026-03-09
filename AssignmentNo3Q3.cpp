#include<iostream>
using namespace std;
int main()
{
	int a[5]={1,2,3,4,5};
	
	int i=0;
	int even=0;
	int odd=0;
	for(i=0;i<5;i++){
	

		if(a[i]%2==0)
		{
			//return even;
			 even++;
		}
		else
		{
			//return odd;
			odd++;
		}
		
		}
		cout<<"even no is "<<even<<endl;
		cout<<"odd no is "<<odd;
			
	}
