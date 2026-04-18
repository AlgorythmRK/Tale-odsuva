#include <bits/stdc++.h>
using namespace std;

int binary_search(vector <int> arr, int x)
{
 int low = 0;
    int high = arr.size() - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if x is present at mid
        if (arr[mid] == x)
            return mid;

        // If x greater, ignore left half
        if (arr[mid] < x)
            low = mid + 1;

        // If x is smaller, ignore right half
        else
            high = mid - 1;
    }

    // If we reach here, then element was not present
    return -1;
}

int main()
{
   
   vector <int> arr;
   int x;

   cin >> arr;
   cin >> x;
    binary_search(arr, x);
}