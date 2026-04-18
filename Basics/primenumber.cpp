#include <bits/stdc++.h>
using namespace std;

int isPrime(int x)
{
    int count=0;
    for(int i=0;i*i<x;i++)
    {
       if(x%i==0){
        count++;
          if((x/i)!=i)
            count++;
       }

    }

    if(count==2)
      cout << "True";
    else
      cout << "False";

    return count;
    
}

int main()
{
    int x=0;
    cin >> x;

    isPrime(x);

    return 0;
}