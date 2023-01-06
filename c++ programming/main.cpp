#include<bits/stdc++.h>
using namespace std;

int main()
{
    int i, j, n,a[100],pos,min=0;

    cin >> n;
    for ( i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    
    for ( i = 0; i < n-1; i++)
    {
        min = a[i], pos = i;

        for (j = i + 1; j < n; j++)
        {
            if (min > a[j])
            {
                min = a[j];
                pos = j;
            }

            
         }

         swap(a[i], a[pos]);
    }

    for (i = 0; i < n; i++)
    {
        cout << a[i];
    }
}