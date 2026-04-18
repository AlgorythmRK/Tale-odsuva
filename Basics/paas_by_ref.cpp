#include<bits/stdc++.h>

using namespace std;
void passByRefrence(int &num1)
{
  num1=num1+10;
  cout << num1 << endl;
  
}
int main()
{
    int num1;
    cin >> num1;
    passByRefrence(num1);
    cout << num1; //now it will be 10 more than the input value

}