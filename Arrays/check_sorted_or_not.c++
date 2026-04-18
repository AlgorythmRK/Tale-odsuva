#include <bits/stdc++.h>
using namespace std;

bool isSorted(int n, vector<int> a) {
    for(int i = 1; i < n; i++) {
        if(a[i] < a[i-1]) {
            return false;
        }
    }
    return true;
}

int main() {
    vector<int> arr = {1, 2, 6, 4, 5};

    if(isSorted(5, arr)) {
        cout << "Sorted";
    } else {
        cout << "Not Sorted";
    }
}