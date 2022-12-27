class Solution {
public:
    int maximumBags(vector<int>& capacity, vector<int>& rocks, int additionalRocks) {
        
        
          int ans = 0;
        vector<int>diff;

        for(int i = 0; i < rocks.size(); i++) diff.push_back(capacity[i] - rocks[i]);

        sort(diff.begin(), diff.end());

        for(auto it : diff){

            if(it > 0 and additionalRocks >= it){
                ans++;
                additionalRocks -= it;
            }else if(it == 0) ans++;
            else 
                break;           
        }

        return ans;
    }
};