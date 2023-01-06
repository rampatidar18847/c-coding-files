#include<bits\stdc++.h>
using namespace std;

int main()
{
	int a[10];
	int i,j,n,min=0,pos;
	
	cout<<"Enter size ";
	cin>>n;
	
	cout<<"Enter elements ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(i=0;i<n-1;i++)
	{
		min=a[i]; pos=i;
	  for(j=i+1;j<n;j++)
	  {
	  	if(a[j]<min)
	  	{
	  		min=a[j];
	  		pos =j;
		}
	}
	  swap(a[i],a[pos]);
	}
	
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<" ";
	}
	
}
