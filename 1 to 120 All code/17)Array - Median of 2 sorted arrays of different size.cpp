//17)Array : Median of 2 sorted arrays of different size
#include <iostream>
#include <vector>
#include <algorithm> 

using namespace std;
double findMedian(vector<int> a, vector<int> b) {
a.insert(a.end(), b.begin(), b.end());
sort(a.begin(), a.end());
int n = a.size();
return n % 2 ? a[n/2] : (a[n/2 - 1] + a[n/2]) / 2.0;
}
int main() {
vector<int> a = {1, 3};
vector<int> b = {2, 4, 5};
cout << "Median: " << findMedian(a, b);
}
