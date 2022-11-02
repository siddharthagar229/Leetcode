class Solution {
public:
    void solve(vector<string> &res, vector<string> ss, string cur="", int i=0){
        if (cur.size() == ss.size()){
            if (cur != "")
            res.push_back(cur);
            return ;
        }
        for(int j = 0 ; j<ss[i].size(); j++){
            solve(res,ss,cur+ss[i][j],i+1);
        }
    }
    
    vector<string> letterCombinations(string digits) {
        map< int,string > m;
        m[2] = "abc";
        m[3] = "def";
        m[4] = "ghi";
        m[5] = "jkl";
        m[6] = "mno";
        m[7] = "pqrs";
        m[8] = "tuv";
        m[9] = "wxyz";
        
        vector<string> ss;
        for(char c:digits){
            ss.push_back(m[c-'0']);
        }
        vector<string> res;
        
        solve(res,ss);
        
        return res;
    }
};