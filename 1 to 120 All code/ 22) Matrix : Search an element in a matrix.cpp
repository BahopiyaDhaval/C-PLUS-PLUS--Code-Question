// 22) Matrix : Search an element in a matrix

#include <bits/stdc++.h>
using namespace std;
int main() {
    vector<vector<int>> a = {{1,4,7,11},
                             {2,5,8,12},
                             {3,6,9,16},
                             {10,13,14,17}};
int target = 9;
int n = a.size(), m = a[0].size();
int i = 0, j = m - 1;  // start from top-right corner
while (i < n && j >= 0) {
if (a[i][j] == target) {
cout << "Found at (" << i << "," << j << ")";
return 0;
} 
else if (a[i][j] > target) j--;
else i++;
    }
cout << "Not found";
}
