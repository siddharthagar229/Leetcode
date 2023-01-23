class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        if(trust.size()==0 && n==1) 
            return 1;
        
        vector<int>adj[n+1];
        
        for(int i=0;i<trust.size();i++)
        {
            int x=trust[i][0];
            int y=trust[i][1];
            adj[x].push_back(y);
        }
        
        vector<int>indegree(n+1,0);
               
        for(int i=1;i<=n;i++)
	    {
	        for(auto child:adj[i])
	        {
	            indegree[child]++;
                if(indegree[child]==n-1 && adj[child].size()==0)
                    return child;
	        }
	    }
        return -1;
        
    }
};