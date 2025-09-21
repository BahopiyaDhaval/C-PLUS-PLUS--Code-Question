//6)Array Find the Union and Intersection of the two sorted arrays.
#include <iostream>
using namespace std;
int main() {
int a[] = {1, 3, 4, 5, 7}, b[] = {2, 3, 5, 6};
int n = 5, m = 4, i = 0, j = 0;
cout << "Union: ";
while (i < n && j < m) {
if (a[i] < b[j]) cout << a[i++] << " ";
else if (a[i] > b[j]) cout << b[j++] << " ";
else cout << a[i++] << j++ << " ";
    }
while (i < n) cout << a[i++] << " ";
while (j < m) cout << b[j++] << " ";
cout << "\nIntersection: ";
i = j = 0;
while (i < n && j < m) {
if (a[i] < b[j]) i++;
else if (a[i] > b[j]) j++;
else cout << a[i++] << j++ << " ";
    }
}

