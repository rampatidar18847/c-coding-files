#include<iostream>
using namespace std;

class student{
	private:
		int length ,breadth ;
	public: 
	  
	  int setmarks(int l,int b)
	  {
	     length = l;
	     breadth =b;
	  	 return length * breadth;
	  }
	 
};

int main()
{
	student s;
	cout<<"the marks obtained is "<<s.setmarks(4,5);
}
