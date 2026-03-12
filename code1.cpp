#include<iostream>
using namespace std;


    class parent
    {   private:
        int a=50,b=60;
         
        protected:
        int c=30,d=40;
       
        public:
        int e=10,f=20;
         
        void show()
        {
            cout<<"public members is :"<<e<<endl<<f<<endl<<endl;
            cout<<"ptotect members is "<<c<<endl<<d<<endl<<endl;
            cout<<"private members can not be called out side of the class"<<endl;
        }};

    class child:public parent
    {

        private:
        int g=100;
       
        protected:
        int h=90;

        public:
        int i=70;

        void print(){
            cout<<"from class parent we call:"<<e<<endl<<f<<endl<<c<<endl<<d<<endl;
            cout<<"from class child we call :"<<i<<endl<<h<<endl<<g<<endl;
        }};

        int main(){
            child c1;
            // cout<<c1.i;
            // cout<<c1.h;
            c1.print();
            // c1.show();
        }


