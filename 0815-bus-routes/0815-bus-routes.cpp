class Solution {
public:
    int numBusesToDestination(vector<vector<int>>& routes, int source, int target) {
        
        unordered_map<int,vector<int>> mp;
    
    for(int i=0; i<routes.size(); i++)
    {
        for(auto x: routes[i])
        {
            mp[x].push_back(i);
        }
    }
    
    
    queue<pair<int,int>>q;
    
    q.push({source, 0});
    
    unordered_set<int> st;
    
    st.insert(source);
    
    while(!q.empty())
    {
        auto it = q.front();
        
        q.pop( );
        
        int stop = it.first, bus = it.second;
        
        if(target == stop)
        {
            return bus;
        }
        
        for(auto i: mp[stop])
        {
            for(auto j: routes[i])
            {
                if(st.find(j) == st.end())
                {
                    st.insert(j);
                    
                    q.push({j, bus+1});
                }
            }
            
            routes[i].clear();
        }
    }
    
    return -1;
        
    }
};