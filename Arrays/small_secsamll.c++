#include <bits/stdc++.h>
using namespace std;

int main()
{
    int arr[5];
    cin>>arr[0];
    int smallest=arr[0];
    int secsmall=arr[0];

    for(int i=1;i<=4;i++)
    {
       cin>>arr[i];

       if(smallest>arr[i])
       {
         smallest=arr[i];
       }
    
       if(arr[i]<secsmall && arr[i]!=smallest)
       { 
        secsmall=arr[i];
       }
    }

    cout << smallest << endl  << secsmall << endl;
    return 0;
}