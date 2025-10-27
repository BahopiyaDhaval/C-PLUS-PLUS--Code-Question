// 28) Matrix : Rotate matrix by 90 degrees.

#include <iostream>
using namespace std;

int main() {
int a[3][3]={{1,2,3},{4,5,6},{7,8,9}}, n=3;
for(int i=0;i<n;i++)
for(int j=i;j<n;j++)
swap(a[i][j],a[j][i]);   
for(int i=0;i<n;i++)
for(int j=0;j<n/2;j++)
swap(a[i][j],a[i][n-j-1]); 
cout<<"Rotated Matrix:\n";
for(int i=0;i<n;i++){
for(int j=0;j<n;j++)
cout<<a[i][j]<<" ";
cout<<endl;
    }
}
