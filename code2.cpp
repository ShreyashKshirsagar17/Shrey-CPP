#include<iostream>
using namespace std;


    class parent
    {   private:
        int a=10,b=20;
         
        protected:
        int c=30,d=40;
       
        public:
        int e=50,f=60;
         
        void show()
        {
            cout<<"public members is :"<<e<<endl<<f<<endl<<endl;
            cout<<"ptotect members is "<<c<<endl<<d<<endl<<endl;
            cout<<"private members is:"<<a<<b<<endl;
        }};

    class child:protected parent
    {

        private:
        int g=70;
       
        protected:
        int h=80;

        public:
        int i=90;

        void print(){
            cout<<"from class parent we call:"<<e<<endl<<f<<endl<<c<<endl<<d<<endl;
            cout<<"from class child we call :"<<i<<endl<<h<<endl<<g<<endl;
            
        }};

        int main(){
            child c1;
            c1.print();
            // cout<<c1.e;
        }


