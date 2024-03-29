class Graph {
public:
    typedef pair<int, int> p;
    vector<vector<pair<int,int> > > adj;
    int node;
    int dijkstra(int V, int S,int des)
    {
        vector <int> dis(V,INT_MAX);
        dis[S]=0;   //source node =S
        priority_queue<p, vector<p>,greater<p> > pq;  //min queue
        
        pq.push({0,S}); //starting from this source node
        
        while(pq.size()){
            auto f =pq.top();
            int node = f.second;
            int d = f.first;
            pq.pop();
            
            for(auto num: adj[node]){
                int w = num.second; //weight
                int nextNode = num.first;    
                if( dis[node] + w < dis[nextNode] ){
                    dis[nextNode]= dis[node] + w;
                    pq.push({dis[nextNode], nextNode });    //pushing only if the distance is less
                }
            }
        }
        if(dis[des] == INT_MAX)
            return -1;
        return dis[des];
    }
    Graph(int n, vector<vector<int>>& edges) {
        adj.resize(n);
        node = n;
        for(auto ele:edges){
            adj[ele[0]].push_back({ele[1],ele[2]});
        }
    }
    
    void addEdge(vector<int> edge) {
        adj[edge[0]].push_back({edge[1],edge[2]});
    }
    
    int shortestPath(int node1, int node2) {
        return dijkstra(node,node1,node2);
    }
};
