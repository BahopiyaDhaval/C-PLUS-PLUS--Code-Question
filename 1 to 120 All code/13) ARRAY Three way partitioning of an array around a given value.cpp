// 13) ARRAY Three way partitioning of an array around a given value
#include <iostream>
using namespace std;
void partition(int a[], int n, int k) {
int l = 0, m = 0, h = n - 1;
while (m <= h) {
if (a[m] < k) swap(a[l++], a[m++]);
else if (a[m] > k) swap(a[m], a[h--]);
else m++;
    }
}
int main() {
int a[] = {1, 5, 3, 2, 3, 4}, k = 3, n = 6;
partition(a, n, k);
for (int x : a) cout << x << " ";
}
