class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        
        
        vector<int> m(26,0);
        for (char c:tasks) m[c-'A']++;
        priority_queue<int> pq;
        for (auto i:m) if (i) pq.push(i);
        int ans=0;
        while (pq.size()) {
            vector<int> v;
            for (int i=0;i<=n;i++) {
                if (!pq.size()&&!v.size()) return ans;
                if (pq.size()) {
                    if (pq.top()-1) v.push_back(pq.top()-1);
                    pq.pop();
                }
                ans++;
            }
            for (auto i:v) pq.push(i);
        }
        return ans;
        
        
    }
};