#include<bits/stdc++.h>
using namespace std;

int partition(int a[],int left,int right)
{
	int i=left-1, j=left;
	int pivot = a[right];
	
	while(j<right)
	{
		if (a[j]<=pivot)
        {
            i++;
            swap(a[i],a[j]);
        }
        j++;
	}
    i++;
     swap(a[i],a[right]);
     return i;

}

void quick_sort(int a[],int left,int right)
{
    if (left<right)
    {
        int y = partition(a,left,right);
        quick_sort(a,left,y-1);
        quick_sort(a,y+1,right);
    } 

for (int i = 0; i <=6; i++)
{
    cout<<a[i]<<" ";
}
cout<<endl;
}

int main()
{
    int a[]={8,7,3,1,5,9,6};
    
    quick_sort(a,0,6);
}
