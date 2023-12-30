class Solution {
public:
    bool isAnagram(string s, string t)
    {
        if(s.size()!=t.size())return false;
        
        vector<int> hash1(26,0);
        vector<int> hash2(26,0);
    
        for(auto i:s)hash1[i-'a']++;
        for(auto i:t)hash2[i-'a']++;
        
        return hash1==hash2;
    }
};