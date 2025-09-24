// 12) ARRAY Smallest Subarray with sum greater than a given value
#include <iostream>
using namespace std;

int minSubarrayLen(int arr[], int n, int x) {
int sum = 0, minLen = n + 1, start = 0;
for (int end = 0; end < n; end++) {
sum += arr[end];
while (sum > x) {
minLen = min(minLen, end - start + 1);
sum -= arr[start++];
        }
    }
return (minLen == n + 1) ? 0 : minLen;
}
int main() {
    int arr[] = {1, 4, 45, 6, 0, 19}, x = 51;
    int n = sizeof(arr) / sizeof(arr[0]);
    cout << minSubarrayLen(arr, n, x);
}