class Solution {
public:
    long long minimumSteps(string s) {
        
         int n = s.size();
        int cnt = 0;
        long long ans = 0;
        for(int i = 0; i < n; i++){
            if(s[i] == '0'){
                ans += i - cnt;
                cnt++;
            }
        }
        
        return ans;
        
    }
};