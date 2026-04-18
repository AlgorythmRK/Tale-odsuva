#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n=0;
    cin >> n;
    vector <int> arr(n);
  
    for(int i=0;i<n;i++)
    {
        cin >> arr[i];
    }

    int hash[n]={0};

    for(int i=0;i<n;i++)
    {
        hash[arr[i]]+=1;
    }

    int q=0;
    cin >> q;
    while(q--)
    {
        int number=0;
        cin >> number;
        cout << hash[number] << endl;
    }


}