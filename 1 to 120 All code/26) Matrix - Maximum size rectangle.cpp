// 26) Matrix : Maximum size rectangle

#include <iostream>
using namespace std;

int main() {
int a[4][4]={{0,1,1,0},{1,1,1,1},{1,1,1,1},{1,1,0,0}};
int max=0;
for(int i=0;i<4;i++)
for(int j=0;j<4;j++)
if(a[i][j]){
int w=j, h=i;
while(w<4 && a[i][w]) w++;
while(h<4 && a[h][j]) h++;
int area=(w-j)*(h-i);
if(area>max) max=area;
        }
    cout<<"Max rectangle area: "<<max;
}
