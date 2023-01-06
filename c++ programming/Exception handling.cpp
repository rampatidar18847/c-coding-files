#include<iostream>
using namespace std;

int main()
{

int i;
cout<<"Enter any number";
cin>>i;

try{
	if(i<0)
	{
		throw 404;
	}else
	{
		cout<<"the number is "<<i*i<<endl;
	}
}
	catch(int x)
	{
		cout<<"number must be positive Error"<<x<<endl;
	}

}
