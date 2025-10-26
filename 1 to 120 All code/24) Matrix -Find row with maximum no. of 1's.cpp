// 24) Matrix :Find row with maximum no. of 1's

#include <iostream>
using namespace std;
int main() {
int r, c, x, cnt, max=0, row=0;
cin >> r >> c;
for(int i=0;i<r;i++){
cnt=0;
for(int j=0;j<c;j++){ cin>>x; if(x==1) cnt++; }
if(cnt>max){ max=cnt; row=i; }
}
cout<<row;
}
