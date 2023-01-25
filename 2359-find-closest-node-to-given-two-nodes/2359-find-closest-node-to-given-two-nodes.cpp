class Solution {
public:
    void solve(int node,int start,vector<int>& edges,vector<int>& arr)
    {
        if(node!=-1 && arr[node]==-1)
        {
            arr[node] = start;
            solve(edges[node],start+1,edges,arr);
        }
    }
    int closestMeetingNode(vector<int>& edges, int node1, int node2) {
        
        // we have to make two array for calculating distance 
        int n = edges.size();
        
        vector<int> arr1(n,-1);
        vector<int> arr2(n,-1);
        int ans  =-1;
        solve(node1,0,edges,arr1);
        solve(node2,0,edges,arr2);
        
        //for loop calculate distances store in  array
        int maxx = INT_MAX;
        for(int i=0;i<n;i++)
        {
            if(arr2[i]!=-1 && arr1[i]!=-1)
            {
                if(maxx > max(arr1[i],arr2[i]))
                {
                    maxx = max(arr1[i],arr2[i]);
                    ans = i;
                }
                
            }
        
        }
        return ans;
    }
};