#include<iostream>
using namespace std;
int main()
{
    int n=4;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<(j+1)<<" ";
        }
        cout<<endl;
    }

    for(int k=0;k<n;k++)
    {
        for(int l=k+1;l>0;l--)
        {
            cout<<l<<" ";
        }
        cout<<endl;
    }
}