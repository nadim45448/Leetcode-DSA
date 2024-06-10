class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int buy=prices[0]; // buying day-> buy at minimum price
        int profit=0;
        for(int i=1;i<prices.size();i++)
        {
            // selling day: prices[i] ->sell at maximim price
            int cost=prices[i]-buy; // profit or loss?
            profit=max(profit, cost); // ensure maximum profit
            buy=min(buy, prices[i]); // ensure minimum price for buy 
        }
        return profit;
    }
};