#include<iostream>
using namespace std;
int main()
{
    int n=4;
    for (int i=0;i<n;i++)
    {
        for(int j=0;j<i+1;j++)
        {
            cout<<"*"<<" ";

        }
        cout<<endl;
    }

    for(int k=0;k<n;k++)
    {
        for(int l=0;l<k+1;l++)
        {
            cout<<(k+1)<<" ";

        }
        cout<<endl;
    }

    char ch='A';
    for(int m=0;m<n;m++)
    {
        for(int o=0;o<m+1;o++)
        {
            cout<<ch<<" ";

        }
        ch++;
        cout<<endl;
    }
}