#include <bits/stdc++.h>
using namespace std;

///we not print form 1 - N without using the increment

void print(int i, int n)
{
    if(i<1) return;
    print(i-1,n);
    cout << i << " ";
}

void print2(int i, int n)
{
    if (i>n) return;
    print2(i+1,n);
    cout << i << " ";
}


int main()
{
    int n;
    cin >> n;
    print(n,n);
    cout<<endl;
    print2(1,n);
    return 0;
}