//10) Array Minimum no. of Jumps to reach end of an array
 
#include <iostream>
using namespace std;

int main() {
int arr[] = {2, 3, 1, 1, 4};
int n = sizeof(arr) / sizeof(arr[0]);
int jumps = 0, farthest = 0, end = 0;
for (int i = 0; i < n - 1; i++) {
farthest = max(farthest, i + arr[i]);
if (i == end) {
jumps++;
end = farthest;
        }
    }
cout << jumps;
}
