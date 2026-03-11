#include <iostream>
using namespace std;

int main()
{
	int arr[5]={10,20,30,40,50};
	
	int*ptr;
	ptr=arr;
	cout<<"Accessing arrya using pointer subscript"<<endl;
	
	for(int i=0;i<5;i++)
	cout<<"element at index"<<i<<"="<<ptr[i]<<endl;
	
/*	for(int i=0;i<5;i++)
	cout<<"element at index"<<i<<"="<<(ptr + i)<<endl;*/
}
