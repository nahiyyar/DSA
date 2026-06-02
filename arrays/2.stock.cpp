#include <bits/stdc++.h>
using namespace std;

class Solution{
    public:
    int stock(vector<int> &prices){
        int min_price = INT_MAX;
        int profit = 0;

        for(int price : prices){
            if (price<min_price){
                min_price = price;
            }
            else{
                profit = max(profit, price-min_price);
            }
        }
        return profit;
    }
};


int main() {
    Solution obj;
    vector<int> prices = {7, 1, 5, 3, 6, 4};

    cout << obj.stock(prices) << endl;

    return 0;
}