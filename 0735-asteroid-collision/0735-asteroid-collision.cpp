class Solution {
public:
    vector<int> asteroidCollision(vector<int>& asteroids) {
        stack<int> stk;
        for (auto& ast : asteroids) {
            
            
            if (stk.empty() || (stk.top() < 0 && ast > 0)) {
                stk.push(ast);
                continue;
            }
            
            
            while (!stk.empty()) {
                
                
                if (stk.top() * ast > 0) {
                    stk.push(ast);
                    break;
                }
                
                
                else {
                    if (abs(ast) > abs(stk.top())) {
                        stk.pop();
                    }
                    else if (abs(ast) < abs(stk.top())) {
                        break;
                    }
                    else {
                        stk.pop();
                        break;
                    }
                }
                
                
                
                if (stk.empty()) {
                    stk.push(ast);
                    break;
                }
                
            }
        }
        
        vector<int> ans;
        while (!stk.empty()) {
            ans.push_back(stk.top());
            stk.pop();
        }
        reverse(ans.begin(), ans.end());
        return ans;
    }
};