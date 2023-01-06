#include<iostream>
#include<fstream>
using namespace std;

int main()
{
	ofstream ofram("mytext");
	ofram<<"shyam"<<endl;
	ofram<<"cs"<<endl;
	ofram<<49<<endl;
	
	ofram.close();
}
