// 11) Array Chocolate Distribution problem


#include <iostream>
#include <algorithm>
using namespace std;

int main() {
int n, m;
cin >> n >> m;
int arr[n];
for (int i = 0; i < n; i++) cin >> arr[i];
sort(arr, arr + n);
int min_diff = arr[m-1] - arr[0];
for (int i = 1; i <= n - m; i++)
min_diff = min(min_diff, arr[i + m - 1] - arr[i]);
cout << min_diff << endl;
return 0;
}
