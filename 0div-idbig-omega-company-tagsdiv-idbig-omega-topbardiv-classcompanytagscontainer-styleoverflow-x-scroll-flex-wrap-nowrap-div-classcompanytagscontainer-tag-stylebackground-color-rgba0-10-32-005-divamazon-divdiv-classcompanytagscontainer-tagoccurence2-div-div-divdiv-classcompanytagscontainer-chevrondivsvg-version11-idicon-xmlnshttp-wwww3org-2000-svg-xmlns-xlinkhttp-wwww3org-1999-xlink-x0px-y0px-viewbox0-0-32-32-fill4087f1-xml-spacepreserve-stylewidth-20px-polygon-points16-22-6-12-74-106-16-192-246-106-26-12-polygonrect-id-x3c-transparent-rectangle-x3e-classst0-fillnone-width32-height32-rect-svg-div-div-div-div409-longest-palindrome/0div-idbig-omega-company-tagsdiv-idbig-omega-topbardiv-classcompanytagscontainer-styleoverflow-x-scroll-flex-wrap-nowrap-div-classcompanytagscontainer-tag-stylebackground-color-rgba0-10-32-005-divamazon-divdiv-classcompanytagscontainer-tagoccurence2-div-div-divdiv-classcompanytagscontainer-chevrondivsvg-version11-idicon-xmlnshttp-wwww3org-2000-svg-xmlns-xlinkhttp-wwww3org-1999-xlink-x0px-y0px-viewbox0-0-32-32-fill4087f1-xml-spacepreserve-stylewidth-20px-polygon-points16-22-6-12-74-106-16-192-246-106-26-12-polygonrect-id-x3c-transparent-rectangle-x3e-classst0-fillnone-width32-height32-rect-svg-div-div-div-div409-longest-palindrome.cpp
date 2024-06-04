class Solution {
public:
    int longestPalindrome(string s) {
        
       if(s.size()==1)return 1;
        unordered_map<char,int>mp;
        for(int i=0;i<s.size();i++)
        {
           mp[s[i]]++; 
        }
        int ans =0;
        
        for(auto x: mp)
        {
            if(x.second%2==0){
                ans+=x.second;
            }
            else {
                int diff = x.second%2;
                ans +=x.second-diff;
            }
        }
        if(ans==s.size())return ans;
        else
        return ans+1;
        
    }
};