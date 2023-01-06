#include<iostream>
using namespace std;

class Rectangle{
	
		int length;
		int breadth;
		
	public:
		
      Rectangle(int l,int b)
{
	length = l;
	breadth =b;
}

Rectangle(Rectangle &r)
{
	length = r.length;
	breadth =r.breadth;
}

int disply()
{
	return length*breadth;
}

}; 
int main()
{
	Rectangle r1(5,7);
	cout<<r1.disply();
	
	Rectangle r2(r1);
	
	cout<<r2.disply();
	
}
