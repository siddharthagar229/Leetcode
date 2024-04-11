// class Solution {
// public:
//     string removeKdigits(string num, int k) {
//          string ans;
//         if(num.size() == 1) return "0";
        
//         for(int i=0;i<num.size();i++){
//             if(ans.back() > num[i] && k>0){
//                 ans.pop_back();
//                 k--;
//                 i--;
//             }
//             else if(ans.size()==0 && num[i]=='0') continue;
//             else ans+=num[i];
//         }
        
//         while(k > 0 && ans.size()>0){
//             ans.pop_back();
//             k--;
//         }
//         if(ans.size() == 0) return "0";
//         return ans;
//     }
// };


class Solution {
public:
    string removeKdigits(string num, int k) {
        vector<char>stk;
        string ans;
        for(char c :num){
            while(k>0 && !stk.empty() && stk.back()>c){
                stk.pop_back();
                k--;
            }
            stk.push_back(c);
        }
        while(k>0){
            stk.pop_back();
            k--;
        }
        for(char c : stk){
            if(ans.empty() && c=='0') continue;
            ans.push_back(c);

        }
        return ans.empty()?"0":ans;
    }
};