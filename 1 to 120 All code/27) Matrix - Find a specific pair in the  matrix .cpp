// 27) Matrix : Find a specific pair in the  matrix 

#include <bits/stdc++.h>
using namespace std;

int main() {
int a[4][4] = {{1,2,3,4},
               {5,3,2,1},
               {4,6,5,2},
               {8,7,6,5}};
int n=4, maxVal = INT_MIN;

for(int i=0;i<n;i++)
for(int j=0;j<n;j++)
for(int x=i+1;x<n;x++)
for(int y=j+1;y<n;y++)
maxVal = max(maxVal, a[x][y] - a[i][j]);
cout << "Maximum pair difference: " << maxVal;
}
