#include<bits/stdc++.h>
using namespace std;

void passbyvalue(int num)
{
    num = num+10;
    cout << num << endl;
}
int main()
{
    int num1;
    cin >> num1;
    passbyvalue(num1);
    cout<<num1;
}

