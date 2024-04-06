class Solution {
public:
    string minRemoveToMakeValid(string s) {
        stack<int>st;
    
    for(long long i = 0; i < s.size();i++){            
        if(s[i] == '('){
            st.push(i);
        }            
        else if(s[i] == ')' && st.empty()){
            s[i] = '.';                
        }            
        else if(s[i] == ')' && !st.empty()){
            st.pop();                
        }             
    }
    
    while(!st.empty()){
        s[st.top()] = '.';
        st.pop();
    }
    
    string ans ="";
    long long i = 0;
    while(i<s.size()){
        if(s[i] != '.'){
            ans.push_back(s[i]);      
        }
        i++;
    }        
    return ans;     
    }
};