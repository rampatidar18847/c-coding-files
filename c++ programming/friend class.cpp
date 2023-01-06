#include<iostream>
using namespace std;
class Derived;
class Base
{
   private:
   int x;
    protected:
   	int y;
    public:
   	int z;
      
      friend Derived;
}; 

class Derived
{
	Base t;
	public:
	void getfun() 
	{ 
	  t.x=10;
	  cout<<t.x<<endl;
	  
	  t.y=20;
	  cout<<t.y<<endl;
	  
	  t.z=30;
	  cout<<t.z;
	}
};

int main()
{
	Derived d;
	d.getfun();
	
}
