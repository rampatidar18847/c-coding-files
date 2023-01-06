#include<iostream>
using namespace std;

class Base
{
   private:
   int x;
    protected:
   	int y;
    public:
   	int z;
   	public:
   	
      
      friend void getfun(Base b);
}; 

void getfun(Base b)
{ 
	  Base t;
	  t.x=10;
	  cout<<t.x<<endl;
	  
	  t.y=20;
	  cout<<t.y<<endl;
	  
	  t.z=30;
	  cout<<t.z;
}
 

int main()
{
	Base b;
	getfun(b);
	
	
}
