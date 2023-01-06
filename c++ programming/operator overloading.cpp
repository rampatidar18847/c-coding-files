#include<iostream>
using namespace std;

class complex{
	
	friend void fun(complex);
	public:
		int image;
		int real;
		
	complex operator+(complex c2)
		{
	    	complex temp;
		    temp.real=real+c2.real;
		    temp.image=image+c2.image;
		    return temp;
    	}
};



int main()
{
	complex c1,c2,c3,e;
	
	c1.image=2; c1.real=3;
	c2.image=4; c2.real=5;
	
	c3 = c1+c2;
	
	cout<<c3.image<<"+i"<<c3.real<<endl;
	
}
