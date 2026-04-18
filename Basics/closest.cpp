#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    vector<int> a(n);
    for(int i = 0; i < n; i++) cin >> a[i];

    unordered_map<int, int> freq;

    int left = 0;
    long long sum = 0, max_sum = 0;

    for(int right = 0; right < n; right++) {

        freq[a[right]]++;
        sum += a[right];

   
        while(freq.size() > k) {
            freq[a[left]]--;
            sum -= a[left];

            if(freq[a[left]] == 0)
                freq.erase(a[left]);

            left++;
        }

        max_sum = max(max_sum, sum);
    }

    cout << max_sum << endl;

    for (;;){

    }
}