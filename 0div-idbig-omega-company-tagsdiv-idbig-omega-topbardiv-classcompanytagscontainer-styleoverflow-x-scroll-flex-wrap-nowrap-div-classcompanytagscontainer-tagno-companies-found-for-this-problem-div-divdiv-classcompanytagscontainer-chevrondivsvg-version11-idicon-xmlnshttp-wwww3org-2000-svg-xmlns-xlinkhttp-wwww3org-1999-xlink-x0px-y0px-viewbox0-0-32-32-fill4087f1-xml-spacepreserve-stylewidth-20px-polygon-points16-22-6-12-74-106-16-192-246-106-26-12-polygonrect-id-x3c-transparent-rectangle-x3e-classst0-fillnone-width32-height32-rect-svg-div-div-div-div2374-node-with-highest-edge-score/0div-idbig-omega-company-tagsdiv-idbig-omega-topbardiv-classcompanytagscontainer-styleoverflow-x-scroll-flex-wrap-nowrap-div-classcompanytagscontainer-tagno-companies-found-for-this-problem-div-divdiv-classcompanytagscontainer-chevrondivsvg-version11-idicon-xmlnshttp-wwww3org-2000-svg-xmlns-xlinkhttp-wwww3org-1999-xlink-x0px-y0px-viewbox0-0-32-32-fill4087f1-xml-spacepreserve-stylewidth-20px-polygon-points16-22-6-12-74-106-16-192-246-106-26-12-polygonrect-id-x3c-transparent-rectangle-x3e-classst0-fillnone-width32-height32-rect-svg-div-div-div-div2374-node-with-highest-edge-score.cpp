class Solution {
public:
    int edgeScore(vector<int>& edges) {
        
         int n = edges.size();
        vector<long long> score(n);
		//score[i] = sum of all the nodes that have an edge pointing to i.
        for(int i = 0; i < n; i++){
            score[edges[i]] += i;
        }
        long long mx = INT_MIN;
        int idx = 0;
		//Finding the maximum score and it's index
        for(int i = 0; i < n; i++){
            if(score[i] > mx){
                mx = score[i];
                idx = i;
            }
        }
        return idx;
        
        
        
    }
};