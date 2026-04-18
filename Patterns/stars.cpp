#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n =0;
    cin >> n;
    for(int i=0;i<n;i++)
    {
       for(int j=0;j<n;j++)
       {
          cout << "*";
       }

       cout << endl;
    }

    cout << endl;

    for(int i=4;i!=0;i--)
    {
        for(int j=0;j<i;j++)
        {
            cout << i;
        }
        cout << endl;
    }

    
}