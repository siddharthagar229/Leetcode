class Solution {
public:
    bool isSubsequence(string s, string t) {
        if(t.size()<s.size())return 0; 
        if(s.size()==0)return 1;
        int j = 0; 
    for(int i = 0; i<t.size(); i++){ 
         if(s[j]==t[i])j++; 
         if(j==s.size()) return 1; 
    } 
         return 0;
    }
};