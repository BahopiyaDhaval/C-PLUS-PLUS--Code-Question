//20)Array : Find the triplet that sums to a given value.
#include <iostream>
using namespace std;

bool findTriplet(int a[], int n, int sum) {
for(int i=0; i<n-2; i++)
for(int j=i+1; j<n-1; j++)
for(int k=j+1; k<n; k++)
if(a[i] + a[j] + a[k] == sum)
return true;
return false;
}
int main() {
int a[] = {1,4,45,6,10,8};
int n = sizeof(a)/sizeof(a[0]);
int sum = 22;
cout << (findTriplet(a, n, sum) ? "Triplet Found" : "No Triplet");
}
