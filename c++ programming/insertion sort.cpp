#include<bits\stdc++.h>
using namespace std;

int main()
{
	int a[100];
	int i,j,n,key=0;
	
	cout<<"Enter size ";
	cin>>n;
	
	cout<<"Enter elements ";
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	
	for(i=1;i<n;i++)
	{
		key = a[i];
		
		j = i-1;
		
		while(j>=0 && a[j]>key)
		{
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = key;
	}
	
		for(i=0;i<n;i++)
		{
			cout<<a[i]<<" ";
		}
}
