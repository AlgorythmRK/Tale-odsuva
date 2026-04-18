#include <bits/stdc++.h>
using namespace std;

int main()
{
    int num;
    cin >> num;
    int count=0;
    for(int i=1;i<=num;i++)
    {
        if(num%i==0)
        {
            count++;
        }
    }

    if (count>2) 
    cout << "The number is Not prime";
    else 
    cout << "The number is prime";

    return 0;

}