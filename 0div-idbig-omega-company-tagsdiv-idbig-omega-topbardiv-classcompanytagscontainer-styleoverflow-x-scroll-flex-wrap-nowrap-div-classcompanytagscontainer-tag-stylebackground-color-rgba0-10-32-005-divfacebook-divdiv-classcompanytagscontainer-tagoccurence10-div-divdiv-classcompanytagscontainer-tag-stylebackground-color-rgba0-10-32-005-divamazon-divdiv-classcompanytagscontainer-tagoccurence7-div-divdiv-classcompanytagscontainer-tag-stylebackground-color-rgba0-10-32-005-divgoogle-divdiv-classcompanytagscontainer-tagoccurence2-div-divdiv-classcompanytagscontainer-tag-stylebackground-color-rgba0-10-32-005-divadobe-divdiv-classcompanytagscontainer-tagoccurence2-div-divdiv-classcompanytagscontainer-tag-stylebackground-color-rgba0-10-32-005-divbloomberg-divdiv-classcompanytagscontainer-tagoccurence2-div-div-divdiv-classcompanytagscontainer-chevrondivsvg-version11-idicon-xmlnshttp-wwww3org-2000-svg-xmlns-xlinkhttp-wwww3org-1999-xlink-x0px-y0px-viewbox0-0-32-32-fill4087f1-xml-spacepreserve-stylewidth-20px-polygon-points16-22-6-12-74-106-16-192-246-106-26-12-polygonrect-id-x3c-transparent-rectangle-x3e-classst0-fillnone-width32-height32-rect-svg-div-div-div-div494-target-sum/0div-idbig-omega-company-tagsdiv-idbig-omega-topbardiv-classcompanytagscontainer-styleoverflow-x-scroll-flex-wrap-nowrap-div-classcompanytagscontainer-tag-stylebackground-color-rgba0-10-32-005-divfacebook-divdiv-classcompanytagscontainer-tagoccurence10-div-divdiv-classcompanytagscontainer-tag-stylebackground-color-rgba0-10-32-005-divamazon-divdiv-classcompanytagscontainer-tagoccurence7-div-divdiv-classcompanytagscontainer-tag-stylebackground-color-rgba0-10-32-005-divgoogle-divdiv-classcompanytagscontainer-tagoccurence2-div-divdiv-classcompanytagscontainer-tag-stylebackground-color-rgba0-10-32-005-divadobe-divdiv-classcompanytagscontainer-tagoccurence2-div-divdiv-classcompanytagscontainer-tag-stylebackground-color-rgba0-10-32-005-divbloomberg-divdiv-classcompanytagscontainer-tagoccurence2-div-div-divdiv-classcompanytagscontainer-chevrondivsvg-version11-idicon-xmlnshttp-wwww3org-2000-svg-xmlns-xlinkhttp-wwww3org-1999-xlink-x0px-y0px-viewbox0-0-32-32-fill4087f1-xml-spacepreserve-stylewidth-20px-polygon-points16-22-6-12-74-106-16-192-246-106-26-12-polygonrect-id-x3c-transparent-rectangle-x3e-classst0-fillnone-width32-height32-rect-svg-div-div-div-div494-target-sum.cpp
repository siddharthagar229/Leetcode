class Solution {
public:
    int findTargetSumWays(vector<int>& nums, int target) {
         int n=nums.size();
        int sum=0;
        
        unordered_map<int,int> mp;
        mp[nums[0]]++;
        mp[-nums[0]]++;
        for(int i=1;i<n;i++)
        {
            unordered_map<int,int> temp;
            for(auto x: mp)
            {
                int y=x.first-nums[i];
                temp[y]+=x.second;
                y=x.first+nums[i];
                temp[y]+=x.second;
                
            }
            mp.clear();
            mp=temp;
           
        }
        
        
        return mp[target];
    }
};