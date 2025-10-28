// 30) Matrix : Common elements in all rows of a given matrix short and simplest
#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main() {
vector<vector<int>> a = {{1,2,3},{2,3,4},{2,3,5}};
map<int,int> mp;
for (auto x : a[0]) mp[x] = 1;
for (int i = 1; i < a.size(); i++)
for (auto x : a[i])
if (mp[x] == i) mp[x]++;
for (auto x : mp)
if (x.second == a.size()) cout << x.first << " ";
}
