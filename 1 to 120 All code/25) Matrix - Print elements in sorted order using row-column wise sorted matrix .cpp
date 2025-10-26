// 25) Matrix : Print elements in sorted order using row-column wise sorted matrix 

#include <iostream>
using namespace std;
int main(){
int r,c; cin>>r>>c;
int a[r*c];
for(int i=0;i<r*c;i++) cin>>a[i];
for(int i=0;i<r*c-1;i++)
for(int j=i+1;j<r*c;j++)
if(a[i]>a[j]) swap(a[i],a[j]);
for(int i=0;i<r*c;i++) cout<<a[i]<<" ";
}
