#include<iostream>
using namespace std;
//it involves the  binding or bundling of data and function members and functions inside a single class. 
class student{
	private:
		int marks;
	public: 
	  
	  void setmarks(int m)
	  {
	  	marks = m;
	  }
	  int getmarks()
	  {
	  	return marks;
	  }
};

int main()
{
	student s;
	s.setmarks(97);
	cout<<"the marks obtained is "<<s.getmarks();
}
