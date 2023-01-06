#include<iostream>
using namespace std;

class complex{
	public:
		int image;
		int real;
	public:
		friend complex operator+(complex c1,complex c2);
		
};

    complex operator+(complex c1,complex c2)
		{
	    	complex temp;
		    temp.real=c1.real+c2.real;
		    temp.image=c1.image+c2.image;
		    return temp;
    	}

int main()
{
	complex c1,c2,c3;
	c1.real=5;c1.image=3;
	c2.real=10;c2.image=5;
	
	c3=c1+c2;
	
	cout<<c3.real<<"+i"<<c3.image;
}
