class Solution {
public:
    int numberOfSubarrays(vector<int>& nums, int k) {
        
        int count[50001]={0};
    // int i; 
    count[0]=1;
    int curr=0,ans=0;
    for(int i=0;i<nums.size(); i++) {
        curr += nums[i]%2;
        if(curr-k >=0) ans += count[curr-k];
        count[curr]++;
    }
    return ans;
        
    }
};