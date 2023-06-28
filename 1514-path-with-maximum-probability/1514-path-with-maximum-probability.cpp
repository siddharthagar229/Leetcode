class Solution {
public:
    double maxProbability(int n, vector<vector<int>>& edges, vector<double>& succProb, int start, int end) {
        
        
        vector<double> prob(n + 1,0.0);
        vector<pair<int,double>> adj[n + 1]; 
       
        for(int i = 0;i < edges.size();i++){
            adj[edges[i][0]].push_back({edges[i][1],succProb[i]});
            adj[edges[i][1]].push_back({edges[i][0],succProb[i]});
        }
        

        priority_queue<pair<double,int>>pq;

        
        pq.push({1.0,start});
        
        prob[start] = 1.0;

        while(!pq.empty()){
            int node = pq.top().second; // node 
            double node_prob = pq.top().first;// probabilty of that node

            pq.pop();

           
            for(auto it : adj[node]){
                int neigh_node = it.first; 
                double neigh_prob = it.second;

                double new_prob = neigh_prob * node_prob; 
               
                if(prob[neigh_node] < new_prob) {
                    prob[neigh_node] = new_prob;
                    pq.push({prob[neigh_node],neigh_node});
                }

            }
        } 

        return prob[end];    
        
        
        
    }
};