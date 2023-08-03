class Solution {
public:

string removeOuterParentheses(string s) {

// to store the ans
        string ans = "";
        // to keep the track of valid parenthesis we have initialized count variable
        // valid parenthesis contains equal number of 
        int count = 0;
        for(char ch: s){
            if(ch == '(' && count == 0){
                // this bracket is a part of outermost parenthesis
                // dont add it to the ans, skip it
                count++;
            }else if(ch == '(' && count >= 1){
                // this bracket is a part of inner parenthesis
                // add it to the ans
                ans += ch;
                count++;
                
            }else if(ch == ')' && count > 1){
                // this bracket is a part of inner parenthesis
                // add it to the ans, and decrease the count
                ans += ch;
                count--;
            }else if(ch == ')' && count == 1){
                // this bracket is a part of outer parenthesis
                // avoid it
                count--;
            }
        }
        
        return ans;

}
};