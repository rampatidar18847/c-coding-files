#include<iostream>
using namespace std;

class Base
{

public:
	void getData()
	{
		cout<<"rameyf";
	}

}; 


class Derived: public Base
{
	public:
	virtual void getData()
	{
		cout<<"ram";
	}
};

int main(void)
{
	Derived d;
	d.getData();
	
	
	return 0;
}
