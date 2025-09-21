//9)Array Minimise the maximum difference between heights [V.IMP]

#include <iostream>
#include <algorithm>
using namespace std;

int main() {
int arr[] = {1, 15, 10};
int n = sizeof(arr)/sizeof(arr[0]);
int k = 6;
sort(arr, arr + n);
int ans = arr[n-1] - arr[0];
int small = arr[0] + k, big = arr[n-1] - k;
if (small > big) swap(small, big);
for (int i = 1; i < n-1; i++) {
int sub = arr[i] - k, add = arr[i] + k;
if (sub >= small || add <= big) continue;
if (big - sub <= add - small) small = sub;
else big = add;
    }
cout << min(ans, big - small);
}

