class Solution {
public:
    vector<string> findRepeatedDnaSequences(string s) {
          if(s.size() < 10) 
            return {};
        set<string> seen, res;
        for(int l = 0; l < s.size() - 9; l ++)
        {
            string cur = s.substr(l, 10);
            if(seen.count(cur))
                res.insert(cur);
            seen.insert(cur);
        }
        vector<string> v(res.begin(), res.end());
        return v;
    }
};