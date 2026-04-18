#include <bits/stdc++.h>
using namespace std;

//used for to increase the readability of the code;
void you() //non parameterized 
{
    cout << "My Name is Raj!"<<endl;
}

void add(int a, int b) //parameterized
{
    cout<<"sum of a and b is "<<a+b<<endl;
}

int sum(int a, int b) //return
{
    return a+b;
}

int main()
{
    int a,b;
    cin >> a>>b;
    add(a,b);
    int y=sum(a,b);
    cout<<"The sum is = " <<y<<endl;
    you();

    return 0;
}