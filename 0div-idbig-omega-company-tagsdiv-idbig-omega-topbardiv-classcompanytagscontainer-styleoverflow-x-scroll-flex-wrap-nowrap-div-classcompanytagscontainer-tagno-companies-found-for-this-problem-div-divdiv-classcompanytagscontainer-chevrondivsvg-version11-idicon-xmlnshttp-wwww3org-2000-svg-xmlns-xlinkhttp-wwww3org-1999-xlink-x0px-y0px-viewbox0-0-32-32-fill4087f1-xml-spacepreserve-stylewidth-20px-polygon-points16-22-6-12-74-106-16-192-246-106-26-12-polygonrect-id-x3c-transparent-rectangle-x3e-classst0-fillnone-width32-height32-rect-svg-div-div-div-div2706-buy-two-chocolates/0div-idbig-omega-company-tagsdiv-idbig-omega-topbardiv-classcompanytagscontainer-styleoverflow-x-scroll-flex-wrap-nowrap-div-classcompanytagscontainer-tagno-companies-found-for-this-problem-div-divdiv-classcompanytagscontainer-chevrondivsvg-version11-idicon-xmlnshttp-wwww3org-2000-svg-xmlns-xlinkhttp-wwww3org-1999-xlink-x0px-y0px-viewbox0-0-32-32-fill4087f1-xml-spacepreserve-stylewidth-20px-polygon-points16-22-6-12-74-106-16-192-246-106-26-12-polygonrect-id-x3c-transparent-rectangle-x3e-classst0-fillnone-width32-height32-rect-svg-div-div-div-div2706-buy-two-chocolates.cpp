class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        
        sort(prices.begin(),prices.end());
        
        int x=prices[0];
        int y=prices[1];
        
        if(x+y<=money) return money-(x+y);
        
        return money;
        
    }
};