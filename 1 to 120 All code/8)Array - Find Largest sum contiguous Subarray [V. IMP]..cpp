//8)Array find Largest sum contiguous Subarray [V. IMP].
#include <iostream>
using namespace std;

int main() {
int arr[] = {-2, 1, -3, 4, -1, 2, 1, -5, 4};
int n = sizeof(arr) / sizeof(arr[0]);
int max_so_far = arr[0], max_ending_here = arr[0];
for (int i = 1; i < n; i++) {
max_ending_here = max(arr[i], max_ending_here + arr[i]);
max_so_far = max(max_so_far, max_ending_here);
    }
cout << "Largest Sum: " << max_so_far;
}
