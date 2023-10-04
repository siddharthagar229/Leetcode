class Solution {
public:

    vector<vector<int>> adjList; // globally defining adjacency List
    int ans=1; // to store the answer

    int dfs(int node,int parent,string &s){
       // to store maximum length upto that node including it so initialize it with 1
       int maxLength=1;

       for(auto x : adjList[node]){
       // check only for children
        if(x!=parent){
          int temp = dfs(x,node,s);

          // if parent character and it's child character is not equal
          if(s[node]!=s[x]){
            // update the ans with maximum value
            // update the maxLength to return  to its parent.
            ans = max(ans,maxLength+temp);
            maxLength = max(maxLength,1+temp);
          }
        }
       }
        
      // return  maxLength for current node
      return  maxLength;
    }
    
    

    int longestPath(vector<int>& parent, string s) {
        int n = parent.size();
        adjList.resize(n);

        // create adjacency List
         for(int i=1; i<n; i++){
             adjList[parent[i]].push_back(i);
             adjList[i].push_back(parent[i]);
         }
         // call dfs
         dfs(0,-1,s);
         return ans;
    }
    
    
};
