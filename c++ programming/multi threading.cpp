#include<iostream>
#include<thread>
using namespace std;
void fun1(){
	for(int i=0; i<10; i++){
		cout<<"Hello in function 1"<<endl;
	}
}
void fun2(){
	for(int j=0; j<10; j++){
		cout<<"Hello in function 2"<<endl;
	}
}
int main(){
	thread t1(fun1);
	thread t2(fun2);

	t1.join();
	t2.join();
	return 0;
}
Output:

