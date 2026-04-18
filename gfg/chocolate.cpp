#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int i = 0; i < n; i++)
        cin >> a[i];

    long long ways = 1;
    int prev = -1;
    int nuts = 0;

    for(int i = 0; i < n; i++) {
        if(a[i] == 1) {
            nuts++;

            if(prev != -1) {
                ways *= (i - prev);
            }

            prev = i;
        }
    }

    if(nuts == 0)
        cout << 0;
    else
        cout << ways;

    return 0;
}