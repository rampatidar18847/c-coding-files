#include<iostream>
using namespace std;

class Base{
	public:
		Base()
	     {
	     	cout<<"Default of base"<<endl;
		 }
		 Base(int x)
		 {
		 	cout<<"para of base"<<endl;
		 }
};

class Derived:public Base
{
	public:
		Derived()
		{
			cout<<"Default of derived"<<endl;
		}
		
	/*	Derived(int x)
		{
			cout<<"par of derived"<<endl;
		}*/
		
		Derived(int x,int a):Base(x)
		{
			cout<<"para of derived"<<endl;
		}
	    
};

int main()
{
	Derived d(10,20);

}
