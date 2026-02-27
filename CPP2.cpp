#include<iostream>
using namespace std;
class Bank
{
	int accNo,balance,amt,sum,r;
	
	public:
		void accept()
		{
			cout<<"Enter the Account No :"<<endl ;
			cin>>accNo;
			cout<<"Enter the Balance";
			cin>>balance;
		}
		void diposite()
		{
			cout<<"Deposite some amout"<<endl;
			cin>>amt;
			balance=balance+amt;
			
		}
		void display()
		{
			cout<<"Account number is "<<accNo<<endl;
			cout<<"Toatl balance is "<<balance<<endl;
		}
		
		void withDrow(int w)
		{
			cout<<"To withdrow amout Re-Enter the Account number ";
			cin>>r;
			
			if(r==accNo){
				
				
			
			if(w <=balance){
			
			
				
			balance=balance-w;
			cout<<"withdrow successful"<<endl <<"reamaining bal is:" <<balance<<endl;
			
		}
		
	       else{
			
			cout<<"insufficient balance ";
		}
	}
		else{
			cout<<"enter correct account no "<<endl;
		}	
			
		}
};
int main()
{
	Bank b1;
	b1.accept();
	b1.diposite();
	b1.display();
	b1.withDrow(500);
	
}




