class StockSpanner {
public:
     stack<pair<int,int>>real;
    StockSpanner() {
        
    }
    
    int next(int price) {
        int count=1;
        while(!real.empty() && price>=real.top().first){
            count+=real.top().second;
            real.pop();
        }
        real.push({price,count});
        return count;
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */