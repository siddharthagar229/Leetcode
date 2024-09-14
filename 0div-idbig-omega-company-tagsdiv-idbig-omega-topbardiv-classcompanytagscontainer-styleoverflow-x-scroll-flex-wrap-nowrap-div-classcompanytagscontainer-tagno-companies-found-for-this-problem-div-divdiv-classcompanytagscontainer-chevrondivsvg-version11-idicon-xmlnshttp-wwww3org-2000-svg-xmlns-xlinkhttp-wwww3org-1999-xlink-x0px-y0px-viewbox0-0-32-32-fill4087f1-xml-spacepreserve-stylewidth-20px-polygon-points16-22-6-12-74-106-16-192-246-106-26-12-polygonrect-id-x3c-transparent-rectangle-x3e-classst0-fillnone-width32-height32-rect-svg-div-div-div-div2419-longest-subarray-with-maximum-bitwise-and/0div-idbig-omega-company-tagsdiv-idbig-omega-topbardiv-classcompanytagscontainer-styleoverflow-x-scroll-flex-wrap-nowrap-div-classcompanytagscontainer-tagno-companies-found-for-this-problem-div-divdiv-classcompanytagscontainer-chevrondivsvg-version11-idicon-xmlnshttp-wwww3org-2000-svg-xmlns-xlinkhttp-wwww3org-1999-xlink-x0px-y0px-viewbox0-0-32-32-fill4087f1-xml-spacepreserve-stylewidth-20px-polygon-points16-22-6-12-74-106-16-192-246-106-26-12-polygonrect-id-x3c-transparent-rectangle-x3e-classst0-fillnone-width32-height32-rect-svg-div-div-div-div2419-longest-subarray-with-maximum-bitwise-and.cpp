class Solution {
public:
    int longestSubarray(vector<int>& nums) {

         int maxx = *max_element(nums.begin(),nums.end());
        int len=0,cur=0;
        for(int x:nums){
            if(x==maxx)cur++;
            else {
               
                len = max(len,cur);

                cur=0;

            }
        }

        len = max(cur,len);
        return len;
    }
};