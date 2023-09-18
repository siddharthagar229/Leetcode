class disjointset{
    vector<int> parent;
    vector<int> rank;
    public:
    disjointset(int n){
        parent.resize(n+1);
        for(int i=0;i<=n;i++)parent[i] = i;
        rank.resize(n+1,0);
    }
    int findUpar(int node){
        if(parent[node] == node)return node;
        return parent[node] = findUpar(parent[node]);
    }
    void  make_union(int u,int v){
        int ulp_u = findUpar(u);
        int ulp_v = findUpar(v);
        if(rank[ulp_u] > rank[ulp_v]){
            parent[ulp_v] = ulp_u;
        }
        else if(rank[ulp_u] < rank[ulp_v]){
            parent[ulp_u] = ulp_v;
        }
        else{
            parent[ulp_v] = ulp_u;
            rank[ulp_u]++;
        }
    }
    bool isconnected(int u,int v){
        int ulp_u = findUpar(u);
        int ulp_v = findUpar(v);
        if(ulp_u == ulp_v)return true;
        return false;
    }

};
class Solution {
public:
    int minimumHammingDistance(vector<int>& source, vector<int>& target, vector<vector<int>>& allowedSwaps) {
        
        int n = source.size();
        disjointset ds(100005);
        for(int i=0;i<allowedSwaps.size();i++){
            int a = allowedSwaps[i][0];
            int b = allowedSwaps[i][1];
            ds.make_union(a,b);
        }
        int ans = 0;
        map<int,multiset<int>>mp;
        for(int i=0;i<n;i++){
            int ele = ds.findUpar(i);
            mp[ele].insert(source[i]);//to cheek current source[i]
            //is the part of which component parent
            //whose parnet is ele
        }
        for(int i=0;i<n;i++){
            // int u = source[i];
            //u is already in the set mp[ds.findUpar(i)]
            int v = target[i];
            if(mp[ds.findUpar(i)].find(v)!=mp[ds.findUpar(i)].end()){
                //i find the two nodes u and v are part of the current 
                mp[ds.findUpar(i)].erase(mp[ds.findUpar(i)].find(v));
                //current node is erased because 
                //once i made a swap i get a sequence .....if i made another 
                //swap then that will be another sequence ...no relation with
                //current sequence 
            }
            else{
                ans++;
            }
        }
        return ans;
    }
};