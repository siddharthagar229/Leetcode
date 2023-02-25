class Solution {
public:
    int maxProfit(vector<int>& prices) {
         int current_profit = 0, max_profit = 0, current_min = INT_MAX;
        
        for( int i = 0; i < prices.size(); i++ ) {
            current_min    = min( current_min, prices[i] );
            current_profit = prices[i] - current_min;
            max_profit     = max( max_profit, current_profit );
            
        }
        
        return max_profit;
        
    }
};