class Solution {
public:
    vector<int> survivedRobotsHealths(vector<int>& p, vector<int>& h, string d) {
        
        int n = p.size();
        vector<pair<int,int>> body(n);
        vector<int>ans;
        for(int i=0;i<n;i++) body[i] = {p[i], i};
        sort(body.begin(), body.end(), greater<>());
        stack<int>s;
        for(auto [p,i]: body){
            if(d[i] == 'L') s.push(i);
            else{
                while(!s.empty() && h[i] > 0){
                    int t = s.top();
                    int h1 = h[t] - h[i];
                    if(h1 > 0){
                        h[t]--;
                        h[i] = 0;
                    }
                    else if(h1 < 0){
                        h[t] = 0;
                        h[i]--;
                        s.pop();
                    }
                    else{
                        h[t] = 0;
                        h[i] = 0;
                        s.pop();
                    }
                }
            }
        }
        for(auto it:h){
            if(it > 0) ans.push_back(it);
        }
        return ans;
        
    }
};