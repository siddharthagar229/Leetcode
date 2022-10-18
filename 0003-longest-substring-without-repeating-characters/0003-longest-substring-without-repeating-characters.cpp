class Solution {
public:
    int lengthOfLongestSubstring(string s) {
       vector <int>  mp(256,-1);
        int r=0,l=0,n=s.size();
        int len=0;
        while(r<n){
            if(mp[s[r]]!=-1){
                l=max(mp[s[r]]+1,l);
               
            }
            
             len=max(len,r-l+1);
            
            mp[s[r]]=r;
        r++;
        }
        
        return len;
    }
    
    
};