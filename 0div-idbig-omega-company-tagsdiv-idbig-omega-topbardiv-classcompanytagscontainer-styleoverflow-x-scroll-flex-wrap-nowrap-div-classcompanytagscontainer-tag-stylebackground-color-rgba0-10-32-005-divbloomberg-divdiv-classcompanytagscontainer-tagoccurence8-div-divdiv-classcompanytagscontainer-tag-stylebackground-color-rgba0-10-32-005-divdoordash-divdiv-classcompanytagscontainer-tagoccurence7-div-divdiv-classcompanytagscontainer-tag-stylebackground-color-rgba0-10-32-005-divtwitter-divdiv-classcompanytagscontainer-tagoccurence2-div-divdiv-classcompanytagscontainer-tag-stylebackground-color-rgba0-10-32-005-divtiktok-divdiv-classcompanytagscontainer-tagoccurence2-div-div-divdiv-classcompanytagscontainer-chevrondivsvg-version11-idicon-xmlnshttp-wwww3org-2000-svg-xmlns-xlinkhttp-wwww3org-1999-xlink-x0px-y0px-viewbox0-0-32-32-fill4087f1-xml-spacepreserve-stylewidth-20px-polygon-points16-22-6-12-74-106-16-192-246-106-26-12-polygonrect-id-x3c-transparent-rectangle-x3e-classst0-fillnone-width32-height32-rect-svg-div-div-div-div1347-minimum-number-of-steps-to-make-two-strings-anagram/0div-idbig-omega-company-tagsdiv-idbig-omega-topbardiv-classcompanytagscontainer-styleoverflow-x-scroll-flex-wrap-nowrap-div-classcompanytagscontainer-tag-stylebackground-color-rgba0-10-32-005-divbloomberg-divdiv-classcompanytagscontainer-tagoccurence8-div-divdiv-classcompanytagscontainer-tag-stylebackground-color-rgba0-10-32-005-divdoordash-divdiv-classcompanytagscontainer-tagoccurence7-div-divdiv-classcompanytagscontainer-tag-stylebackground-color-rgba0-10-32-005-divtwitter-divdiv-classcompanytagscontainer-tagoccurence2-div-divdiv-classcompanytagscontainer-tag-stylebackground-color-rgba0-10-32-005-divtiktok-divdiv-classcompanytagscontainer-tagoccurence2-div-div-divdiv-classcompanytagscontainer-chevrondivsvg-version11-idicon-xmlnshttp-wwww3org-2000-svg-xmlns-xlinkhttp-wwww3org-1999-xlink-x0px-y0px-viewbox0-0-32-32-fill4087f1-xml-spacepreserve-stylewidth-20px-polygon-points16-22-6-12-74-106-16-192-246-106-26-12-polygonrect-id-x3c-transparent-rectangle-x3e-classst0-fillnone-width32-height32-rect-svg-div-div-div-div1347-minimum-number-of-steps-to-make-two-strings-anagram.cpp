class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> freq1(26, 0);
        for(char c:s)
            freq1[c-'a']++;
        for(char c:t)
            freq1[c-'a']--;
        int ans = 0;
        for(int i=0; i<26; i++)
        {
            ans+=max(freq1[i], 0);
        }
        return ans;
    }
};