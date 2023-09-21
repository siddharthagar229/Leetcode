//{ Driver Code Starts
// Initial Template for C++
#include <bits/stdc++.h>
using namespace std;


// } Driver Code Ends
// User function Template for C++

class Solution {
  public:
    string minWindow(string str1, string str2) {
        
        
        int n1 = str1.size();
        int n2 = str2.size();
        int st = 0;
        int ans = INT_MAX;
        
        for(int it = 0; it < n1; it++){
            if(str1[it] == str2[0]){
                int i = it, j = it, k = 0;
                
                while(j < n1 && k < n2){
                    if(str1[j] == str2[k]) j++, k++;
                    else j++;
                }
                
                if(k == n2){
                    if(j-i < ans){
                        st = i;
                        ans = j-i;
                    }
                }
            }
        }
        
        if(ans == INT_MAX) return "";
        
        return str1.substr(st, ans);
        
        
        // Write your Code here
    }
};


//{ Driver Code Starts.

int main() {
    int t = 1;
    cin >> t;

    // freopen ("output_gfg.txt", "w", stdout);

    while (t--) {
        // Input
        string str1, str2;
        cin >> str1 >> str2;

        Solution obj;
        cout << obj.minWindow(str1, str2) << endl;

        // cout << "~\n";
    }
    // fclose(stdout);

    return 0;
}

// } Driver Code Ends