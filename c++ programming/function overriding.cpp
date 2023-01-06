#include<iostream>
using namespace std;

class Base{
	public:
	void fun()
	     {
	     	cout<<"Default of base"<<endl;
		 }
		
};

class Derived:public Base
{
	public:
	void fun()
		{
			cout<<"default of derived"<<endl;
		}
	
};

int main()
{
	Derived d;
	d.fun(); //to call base class fun ,code is : d.Base::fun();
	d.Base::fun();

}
