//19)Array : Find whether an array is a subset of another array

#include <iostream>
#include <unordered_set>
using namespace std;

bool isSubset(int a[], int n, int b[], int m) {
unordered_set<int> s(a, a + n);
for (int i = 0; i < m; i++)
if (s.find(b[i]) == s.end())
return false;
return true;
}
int main() {
int a[] = {1, 2, 3, 4, 5};
int b[] = {2, 4};
int n = sizeof(a)/sizeof(a[0]), m = sizeof(b)/sizeof(b[0]);
cout << (isSubset(a, n, b, m) ? "Yes" : "No");
}
