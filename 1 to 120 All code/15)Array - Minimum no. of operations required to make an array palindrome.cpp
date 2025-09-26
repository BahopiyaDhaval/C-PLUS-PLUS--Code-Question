//15)Array : Minimum no. of operations required to make an array palindrome.
#include <iostream>
using namespace std;

int minOps(int a[], int n) {
int i = 0, j = n - 1, cnt = 0;
while (i < j) {
if (a[i] == a[j]) i++, j--;
else if (a[i] < a[j]) a[i+1] += a[i], i++, cnt++;
else a[j-1] += a[j], j--, cnt++;
    }
return cnt;
}

int main() {
int a[] = {1, 4, 5, 9, 1};
cout << minOps(a, sizeof(a)/sizeof(a[0]));
}
