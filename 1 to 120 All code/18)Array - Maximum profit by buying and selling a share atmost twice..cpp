//18)Array : Maximum profit by buying and selling a share atmost twice
#include <iostream>
#include <vector>
#include <climits> 
using namespace std;

int maxProfit(vector<int>& p) {
int b1 = INT_MAX, b2 = INT_MAX;
int p1 = 0, p2 = 0;

for (int price : p) {
b1 = min(b1, price);
p1 = max(p1, price - b1);
b2 = min(b2, price - p1);
p2 = max(p2, price - b2);
    }
    return p2;
}
int main() {
vector<int> prices = {3,3,5,0,0,3,1,4};
cout << "Max Profit: " << maxProfit(prices);
}
