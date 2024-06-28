/*
121. Best time to buy and sell stock

You are given an array prices where prices[i] is the price of a given stock on the ith day.
You want to maximize your profit by choosing a single day to buy one stock and choosing a different day in the future to sell that stock.
Return the maximum profit you can achieve from this transaction. If you cannot achieve any profit, return 0.

*/

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int n = prices.size();
        vector<int> sellPrices(n);

        sellPrices[n - 1] = prices[n - 1];

        int largest = prices[n - 1];

        for (int i = n - 2; i >= 0; i--) {
            largest = max(largest, prices[i]);
            sellPrices[i] = largest;
        }

        int profit = 0;

        for (int i = 0; i < sellPrices.size(); i++) {
            int diff = sellPrices[i] - prices[i];
            profit = max(profit, diff);
        }

        return profit;
    }
};