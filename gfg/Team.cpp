#include <bits/stdc++.h>
using namespace std;

void main() {
   int n, a, b, c;
   int count=0;
   cin  >> n;
   for(int i=0;i<n;i++)
   {
      cin >> a;
      cin >> b;
      cin >> c;
 
      if(a+b+c>=2)
      {
        count++;
      }
   }

   cout << count;
}