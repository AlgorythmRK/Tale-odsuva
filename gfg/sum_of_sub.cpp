#include <iostream>
#include <vector>
using namespace std;

int main() {
  int n;
  cin >> n;
  vector <int> arr(n);

  for(int i=0;i<n;i++)
  {
    cin >> arr[i];
  }

  long int sum;

  for(int j=0;j<n;j++)
  {
    sum += arr[j]+arr[j+1]+ (n-j);
  }

  cout << sum;
}