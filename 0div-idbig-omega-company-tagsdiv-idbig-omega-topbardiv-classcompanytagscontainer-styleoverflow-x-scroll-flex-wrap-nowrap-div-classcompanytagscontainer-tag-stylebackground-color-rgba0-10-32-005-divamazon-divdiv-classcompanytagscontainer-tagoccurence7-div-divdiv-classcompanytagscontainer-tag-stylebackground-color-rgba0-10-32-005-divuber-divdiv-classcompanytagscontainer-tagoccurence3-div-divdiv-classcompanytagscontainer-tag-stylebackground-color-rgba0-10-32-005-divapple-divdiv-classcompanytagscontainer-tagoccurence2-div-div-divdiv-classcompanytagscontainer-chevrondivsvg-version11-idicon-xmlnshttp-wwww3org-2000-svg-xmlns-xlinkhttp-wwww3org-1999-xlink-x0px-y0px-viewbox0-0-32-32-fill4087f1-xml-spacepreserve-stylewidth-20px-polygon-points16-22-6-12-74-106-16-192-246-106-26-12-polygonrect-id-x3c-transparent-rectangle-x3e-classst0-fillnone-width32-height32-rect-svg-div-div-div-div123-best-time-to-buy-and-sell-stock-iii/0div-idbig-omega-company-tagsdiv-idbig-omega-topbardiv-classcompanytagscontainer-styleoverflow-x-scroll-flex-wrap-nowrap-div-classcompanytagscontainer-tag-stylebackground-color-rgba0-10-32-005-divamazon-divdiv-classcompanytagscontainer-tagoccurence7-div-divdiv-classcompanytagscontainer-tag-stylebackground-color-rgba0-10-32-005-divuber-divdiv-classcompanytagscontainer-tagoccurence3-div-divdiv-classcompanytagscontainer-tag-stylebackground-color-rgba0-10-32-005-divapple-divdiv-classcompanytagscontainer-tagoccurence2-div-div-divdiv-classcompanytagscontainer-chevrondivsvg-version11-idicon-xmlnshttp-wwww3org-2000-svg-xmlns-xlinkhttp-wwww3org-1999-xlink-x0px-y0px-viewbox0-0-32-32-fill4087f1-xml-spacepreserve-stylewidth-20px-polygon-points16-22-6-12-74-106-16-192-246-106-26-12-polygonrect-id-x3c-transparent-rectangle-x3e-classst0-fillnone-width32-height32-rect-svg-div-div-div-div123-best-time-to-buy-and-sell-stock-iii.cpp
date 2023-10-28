class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice1=INT_MAX, profit1=0, minprice2=INT_MAX, profit2=0;
        
        for(int i=0; i<prices.size(); i++){
            minprice1 = min(minprice1, prices[i]);
            profit1 = max(profit1, prices[i]-minprice1);
            minprice2 = min(minprice2, prices[i]-profit1);
            profit2 = max(profit2, prices[i]-minprice2);
        }
        return profit2;
//         priority_queue<int>pq;
//          int maxProfit=0;
//         for(int i = 0; i < prices.size()-1; ++i) {
//             if(prices[i] < prices[i+1]) {
//                 // maxProfit += (prices[i+1] - prices[i]);
//                 pq.push(prices[i+1] - prices[i]);
//             }
//         }
//         int i=0, ans=0;
//         while(i<2){
//             ans+=pq.top();
//             pq.pop();
//             i++;
//         }
        
//         return ans;
    }
};