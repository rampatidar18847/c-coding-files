#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ifstream ifram("mytext");
	string name;
	int roll;
	string branch;
	
	ifram>>name>>branch>>roll;
	ifram.close();
	
	cout<<"name "<<name<<endl;
	cout<<"branch "<<branch<<endl;
	cout<<"roll "<<roll<<endl;	

}
