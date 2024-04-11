class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int>st;
        vector<int> ans;
        if(asteroids.size()<1)return {};   
        
        for(auto it: asteroids){
            bool flag=true;
            while(!st.empty() && it<0 && st.top()>0){
                if(-it>st.top()){
                    st.pop();
                }
                else if(-it<st.top()){
                    flag=false;
                    break;
                }
                else{
                    st.pop();
                    flag=false;
                    break;
                }
            }
            if(flag==true) st.push(it);
        }
      
        
        while(!st.empty()){
            int a=st.top();
            st.pop();
            ans.push_back(a);
        }
        reverse(ans.begin(),ans.end());

        return ans;  
    }
};