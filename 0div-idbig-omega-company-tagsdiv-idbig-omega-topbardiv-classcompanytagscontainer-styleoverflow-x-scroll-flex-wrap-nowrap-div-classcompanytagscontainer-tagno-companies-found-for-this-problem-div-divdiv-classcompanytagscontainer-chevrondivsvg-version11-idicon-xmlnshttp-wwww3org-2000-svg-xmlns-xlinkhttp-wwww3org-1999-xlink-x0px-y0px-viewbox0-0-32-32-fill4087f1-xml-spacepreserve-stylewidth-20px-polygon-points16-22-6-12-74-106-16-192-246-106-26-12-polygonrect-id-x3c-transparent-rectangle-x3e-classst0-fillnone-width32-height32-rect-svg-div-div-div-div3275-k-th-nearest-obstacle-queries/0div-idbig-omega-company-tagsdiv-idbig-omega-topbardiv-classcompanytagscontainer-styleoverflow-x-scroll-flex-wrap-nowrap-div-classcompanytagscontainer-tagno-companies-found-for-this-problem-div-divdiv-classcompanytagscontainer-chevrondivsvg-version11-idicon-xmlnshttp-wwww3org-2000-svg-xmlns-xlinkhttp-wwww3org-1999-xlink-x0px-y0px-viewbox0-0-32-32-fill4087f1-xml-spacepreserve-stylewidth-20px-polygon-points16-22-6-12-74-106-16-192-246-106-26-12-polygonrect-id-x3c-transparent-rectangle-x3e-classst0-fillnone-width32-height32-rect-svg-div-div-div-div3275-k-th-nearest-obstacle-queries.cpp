class Solution {
public:
    vector<int> resultsArray(vector<vector<int>>& queries, int k) {
        vector<int> res;
        //priority_queue<pair<int, int>> pq;
        priority_queue<int> pq;
        for (int i = 0; i < queries.size(); i++) {
            int x = queries[i][0];
            int y = queries[i][1];
            int dist = abs(x) + abs(y);

            //pq.push({dist, i});
            pq.push(dist);
        if (pq.size() > k) {
                pq.pop();
            }
            if (pq.size() < k) {
                res.push_back(-1);
            } else {
                //res.push_back(pq.top().first);
                res.push_back(pq.top());
            }
        }

        return res;
    }
};