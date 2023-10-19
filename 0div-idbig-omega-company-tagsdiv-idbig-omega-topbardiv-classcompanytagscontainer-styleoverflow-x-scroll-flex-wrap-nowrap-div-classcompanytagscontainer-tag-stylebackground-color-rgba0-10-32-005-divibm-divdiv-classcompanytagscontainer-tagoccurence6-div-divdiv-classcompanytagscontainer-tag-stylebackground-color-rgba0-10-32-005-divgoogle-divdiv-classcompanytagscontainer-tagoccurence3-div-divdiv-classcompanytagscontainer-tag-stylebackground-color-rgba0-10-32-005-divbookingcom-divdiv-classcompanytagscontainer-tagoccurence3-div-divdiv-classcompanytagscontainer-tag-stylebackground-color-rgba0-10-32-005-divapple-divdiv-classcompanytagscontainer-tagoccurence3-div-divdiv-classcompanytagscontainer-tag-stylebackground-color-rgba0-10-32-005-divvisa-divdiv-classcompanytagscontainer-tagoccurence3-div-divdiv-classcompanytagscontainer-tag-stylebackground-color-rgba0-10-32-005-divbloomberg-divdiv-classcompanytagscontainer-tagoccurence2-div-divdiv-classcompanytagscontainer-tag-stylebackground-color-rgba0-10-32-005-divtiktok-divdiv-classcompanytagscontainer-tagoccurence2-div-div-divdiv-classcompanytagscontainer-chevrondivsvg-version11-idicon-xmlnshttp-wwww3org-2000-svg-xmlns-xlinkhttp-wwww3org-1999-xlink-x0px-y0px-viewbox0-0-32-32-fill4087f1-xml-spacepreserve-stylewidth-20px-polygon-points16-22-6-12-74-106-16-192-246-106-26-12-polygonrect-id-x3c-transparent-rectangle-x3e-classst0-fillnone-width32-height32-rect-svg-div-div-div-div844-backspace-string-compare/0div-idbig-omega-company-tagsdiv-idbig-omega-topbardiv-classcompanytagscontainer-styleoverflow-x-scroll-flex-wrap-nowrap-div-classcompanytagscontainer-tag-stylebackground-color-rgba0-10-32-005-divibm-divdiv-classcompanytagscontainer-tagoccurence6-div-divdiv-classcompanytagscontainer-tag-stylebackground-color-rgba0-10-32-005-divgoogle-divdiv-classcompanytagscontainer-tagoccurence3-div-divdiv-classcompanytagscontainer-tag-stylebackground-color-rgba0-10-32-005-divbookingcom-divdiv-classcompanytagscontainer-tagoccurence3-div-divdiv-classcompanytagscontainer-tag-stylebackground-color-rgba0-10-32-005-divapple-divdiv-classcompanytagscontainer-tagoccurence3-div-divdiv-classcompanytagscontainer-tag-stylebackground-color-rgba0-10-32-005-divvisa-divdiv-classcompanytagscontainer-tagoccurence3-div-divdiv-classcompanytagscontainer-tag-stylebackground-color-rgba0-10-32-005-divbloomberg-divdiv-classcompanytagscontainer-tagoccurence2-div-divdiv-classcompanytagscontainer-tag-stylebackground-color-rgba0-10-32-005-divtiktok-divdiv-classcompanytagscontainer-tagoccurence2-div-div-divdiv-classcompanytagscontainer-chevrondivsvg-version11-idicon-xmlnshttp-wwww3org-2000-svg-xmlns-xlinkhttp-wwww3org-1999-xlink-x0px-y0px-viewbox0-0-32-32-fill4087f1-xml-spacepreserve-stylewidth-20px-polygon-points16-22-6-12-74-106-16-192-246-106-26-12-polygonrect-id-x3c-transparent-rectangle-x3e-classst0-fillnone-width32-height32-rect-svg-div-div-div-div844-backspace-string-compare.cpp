class Solution {
public:

    bool backspaceCompare(string s, string t) {
        string ans = "";
        string res = "";
        for(int i = 0; i<s.size(); i++){
            if(s[i] == '#'){
                ans = ans.substr(0, ans.size()-1);
            }else{
                ans = ans + s[i];
            }
        }
        for(int i = 0; i<t.size(); i++){
            if(t[i] == '#'){
                res = res.substr(0, res.size()-1);
            }else{
                res = res + (t[i]);
            }
        }
        // cout << ans << " " << res << endl;
        return ans == res;
    }
};