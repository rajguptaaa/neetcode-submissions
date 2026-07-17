class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int maximum_profit = 0, n = prices.size();
        int minimum_price = INT_MAX;
        for(int i=0; i<n; i++){
            minimum_price = min(minimum_price, prices[i]);
            int profit = prices[i] - minimum_price;
            maximum_profit = max(maximum_profit, profit); 
        }
        return maximum_profit;
    }
};
