//5)Array Move all the negative elements to one side of the array 
#include <iostream>
using namespace std;
int main() {
int arr[] = {1, -2, 3, -4, -1, 5, -3};
int n = sizeof(arr) / sizeof(arr[0]), j = 0;
for (int i = 0; i < n; i++)
if (arr[i] < 0) swap(arr[i], arr[j++]);
for (int x : arr) cout << x << " ";
}


