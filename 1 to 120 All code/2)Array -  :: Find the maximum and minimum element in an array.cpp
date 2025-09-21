//2)Array Find the maximum and minimum element in an array
#include <iostream>
using namespace std;
int main() {
int arr[] = {5, 3, 8, 1, 9, -2, 7};
int n = sizeof(arr) / sizeof(arr[0]);
int max = arr[0], min = arr[0];
for (int i = 1; i < n; i++) {
if (arr[i] > max) max = arr[i];
if (arr[i] < min) min = arr[i];
    }
cout << "Max: " << max << "\nMin: " << min << endl;
return 0;
}
