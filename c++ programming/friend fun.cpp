#include<iostream>
using namespace std;

class base{
	friend void fun(base);
	public:
		int a=9;
		int b=8;
		
	
};

void getfun(base c)
{
	cout<<c.a*c.b<<endl;
}

int main()
{
	base b;
	getfun(b);
}
