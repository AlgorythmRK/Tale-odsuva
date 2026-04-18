#include <bits/stdc++.h>
using namespace std;

bool armstorng(int x)
{
    int num=0;
    int rise=0;
    int original=x;
    while(x>0)
    {
      num=x%10;
      rise+=num*num*num;
      x=x/10;
    }
    if (rise==original)
    return true;

    else
    return false;
}

int main()
{
    int k;
    cin >> k;
   
    if( armstorng(k))
     cout << "Yes";
    else
      cout << "No";

    return 0;

}