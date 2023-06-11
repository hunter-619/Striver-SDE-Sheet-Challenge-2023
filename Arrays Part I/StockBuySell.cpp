/*

6. Best time to buy and sell stocks
Time Complexity : O(N)
Space Complexity : O(1)

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int max_profit(0), lowest_price(prices[0]);

        for(int i = 1; i < prices.size(); i++) {
            if(prices[i] < lowest_price) lowest_price = prices[i];
            if(prices[i] - lowest_price > max_profit) max_profit = (prices[i] - lowest_price);
        }

        return max_profit;
    }
};

*/