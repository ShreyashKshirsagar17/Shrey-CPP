#include<iostream>
using namespace std;
class show
{ 
   static  int   i;
public:
	


   show() 
  {
	 i=0;
   	 cout<<i<<endl;
	 i++;
	
    }
};
int main()
{
	show s1;
}
