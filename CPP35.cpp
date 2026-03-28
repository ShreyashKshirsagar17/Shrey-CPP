#include<iostream>
using namespace std;
int main()
{
    int n=4;
    char ch ='A';
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            cout<<ch<<" ";
            ch++;
        }
        cout<<endl;
        
    }
      int l=1;
    for(int k=0;k<n;k++)
    {
        
        for(int m=0;m<n;m++)
        {
            cout<<l<<" ";
            l++;
        }
        cout<<endl;
    }
}