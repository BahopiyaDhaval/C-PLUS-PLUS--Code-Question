// 29) Matrix : Kth smallest element in a row-column wise sorted matrix.

#include <iostream>
#include <vector>
#include <queue>
using namespace std;

int kthSmallest(vector<vector<int>>& m, int k) {
priority_queue<int> pq;
for (auto &row : m)
for (int x : row) {
pq.push(x);
if (pq.size() > k) pq.pop();
        }
return pq.top();
}

int main() {
vector<vector<int>> mat = {{1,5,9},{10,11,13},{12,13,15}};
int k = 8;
cout << kthSmallest(mat, k);
}

