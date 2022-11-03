class Solution {
public:
    int maxScoreSightseeingPair(vector<int>& values) {
        int ans=-1;
        
        int mx=values[0];
        
        for(int i=1;i<values.size();i++){
            ans=max(ans,mx+values[i]-i);
            
            mx=max(mx,values[i]+i);
        }
        
        return ans;
    }
};