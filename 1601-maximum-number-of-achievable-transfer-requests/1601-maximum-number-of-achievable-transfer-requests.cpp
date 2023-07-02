class Solution {
public:
    int ans=0;
    void help(int i, vector<vector<int>>& r,int l, vector<int>& temp ){
        
        if(i==r.size()){
            for(auto it: temp)if(it!=0 ) return ;
            ans=max(l, ans);
            return ;
        }
        
        help(i+1, r, l, temp);
        temp[r[i][0]]--;
        temp[r[i][1]]++;
        help(i+1, r, l+1, temp);
        temp[r[i][0]]++;
        temp[r[i][1]]--;
        
    }
    int maximumRequests(int n, vector<vector<int>>& requests) {
        
        int r=0,l=0;
        vector<int> temp(n,0);
        help(r, requests, l,  temp);
        
        return ans;
        
        
        
        
        
        
    }
};