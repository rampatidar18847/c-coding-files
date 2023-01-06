#include <iostream>
using namespace std;

class car
{

public:
	virtual void addvalue()
	 {
		 cout<<"base addvalue base called";
	 }
	 
	virtual void displydata()
	{
		cout<<"base virtual function called"<<endl;
	}
};
class bike : public car
{

public:
	 void addvalue()
	  {
		 cout<<"derived addvalue base called";
	 }
	  
	void displydata()
	{
		cout<<"derived  virtual function called"<<endl;
	}
};

int main()
{
	car *cptr;
	bike b;

	cptr = &b;

	cptr->displydata();
	cptr->addvalue();

	

	return 0;
}
