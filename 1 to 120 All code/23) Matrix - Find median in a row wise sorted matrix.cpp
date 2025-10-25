// 23) Matrix : Find median in a row wise sorted matrix.
#include <bits/stdc++.h>
using namespace std;

int main() {
vector<vector<int>> a = {{1,3,5},
                        {2,6,9},
                        {3,6,9}};
int r = a.size(), c = a[0].size();
int low = a[0][0], high = a[0][c-1];
for (int i = 1; i < r; i++) {
low = min(low, a[i][0]);
high = max(high, a[i][c-1]);
    }
int desired = (r * c + 1) / 2;
while (low < high) {
int mid = (low + high) / 2;
int count = 0;
for (int i = 0; i < r; i++)
count += upper_bound(a[i].begin(), a[i].end(), mid) - a[i].begin();
if (count < desired) low = mid + 1;
else high = mid;
    }
cout << "Median = " << low;
}



