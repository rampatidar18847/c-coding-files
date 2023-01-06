// Max-Heap data structure in C

#include <bits/stdc++.h>
using namespace std;

void max_heapify(int a[],int i,int length)
{
   int left=2*i+1;
   int right = 2*i+2;
   int large=i;

   if (left<=length && a[i]<a[left])
   {
      large = left;
   }
    if (right<=length && a[large]<a[right])
   {
      large = right;
   }
   if (large!=i)
   {
   	  swap(a[i],a[large]);
      max_heapify(a,large,length);
   }  
}
void build_heap(int a[],int length)
{
   for (int i = (length-1)/2; i >= 0; --i)
   {
      max_heapify(a,i,length);
   }
   
}
void deletion(int a[],int length)
{
   while (length>0)
   {
      swap(a[0],a[length]);
      length--;
      max_heapify(a,0,length);
   }
   
}
int main()
{
  int a[]= {10,16,15,9,18,21,28};
  
  cout<<"Max_heap are : ";
  build_heap(a,6);
  for(int i=0;i<=6;++i)
  {
  	cout<<a[i]<<" ";
  }
  cout<<endl;
  
   cout<<"sorted_heap are : ";
  deletion(a,6);
  for(int i=0;i<=6;++i)
  {
     cout<<a[i]<<" ";
  }
}
