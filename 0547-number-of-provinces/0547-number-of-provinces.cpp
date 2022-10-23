class Solution {
public:
    void dfs(int idx, vector<bool> &visited, vector<vector<int>> &isConnected, int &ans){
        
        visited[idx]= true;
        
        for(int i=0; i<isConnected.size(); i++){
            if(i!=idx){
                if(isConnected[idx][i] and !visited[i])
                    dfs(i, visited, isConnected, ans);
            }
        }
        return;
    }
    
    int findCircleNum(vector<vector<int>>& isConnected) {
        int n= isConnected.size();
        vector<bool> visited(n, false);
        int ans=0;
        
        for(int i=0; i<n; i++){
            if(!visited[i]){
                dfs(i, visited, isConnected, ans);
                ans++;
            }
        }
        return ans;
    }
};