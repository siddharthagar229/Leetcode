class Solution {
public:
    int maxDepth(string s) {
        
         stack<char> st;
        int maxDepth = 0;
        
        for(auto ch:s){
            
            if(ch == '(' ){
                st.push(ch);
                if(st.size()>maxDepth) maxDepth = st.size();
            }
            
            if(ch == ')')  st.pop();   
        }
        return maxDepth;
        
    }
};