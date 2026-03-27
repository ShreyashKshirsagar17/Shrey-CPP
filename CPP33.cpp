#include<iostream>
using namespace std;
int main()
{
    int n=4;
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<=n;j++)
        {
            if(j==0){
               continue;
            }
            else{
            cout<<j<<" ";
            }
        }
        cout<<endl;
    }

    int m;
    cout<<"Enter the vakue of m" <<endl;
    cin>>m;
    for(int k=0;k<=m;k++){
        for(int l=0;l<=m;l++)
        {
            cout<<"#"<<" ";
        }
        cout<<endl;
    }
}