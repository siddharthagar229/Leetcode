//{ Driver Code Starts
// Initial Template for C++

#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
// User function Template for C++

class Solution{
public:
    int maxLength(string S){
        
         int ind = -1, maxi = 0;
        stack<int> st;
        for(int i = 0;i < S.size();i++){
            if(S[i] == '(')
                st.push(i);
            else{
                if(!st.empty()){
                    st.pop();
                    if(!st.empty())
                        maxi = max(maxi, i-st.top());
                    else
                        maxi = max(maxi, i-ind);
                }
                else
                    ind = i;
            }
        }
        return maxi;
        // code here
    }
};

//{ Driver Code Starts.

int main(){
    int t;
    cin>>t;
    while(t--){
        string S;
        cin>>S;
        
        Solution ob;
        cout<<ob.maxLength(S)<<"\n";
    }
    return 0;
}
// } Driver Code Ends