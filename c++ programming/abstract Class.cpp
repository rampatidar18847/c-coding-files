#include<iostream>
using namespace std;

class Base
{

public:
	virtual void getData() = 0;

}; 


class Derived: public Base
{
	int y;
public:
	void getData() { cout << "Abstract Class called"; }
};

int main(void)
{
	Derived d;
	d.getData();
	
	
	return 0;
}
