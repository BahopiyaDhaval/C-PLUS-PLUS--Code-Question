//3)Array Find the "Kth" max and min element of an array 
#include <iostream>
#include <algorithm>
using namespace std;
int main() {
int arr[] = {5, 3, 8, 1, 9, -2, 7};
int n = sizeof(arr) / sizeof(arr[0]);
int k = 3;
sort(arr, arr + n);
cout << k << "th Min: " << arr[k - 1] << endl;
cout << k << "th Max: " << arr[n - k] << endl;
return 0;
}
