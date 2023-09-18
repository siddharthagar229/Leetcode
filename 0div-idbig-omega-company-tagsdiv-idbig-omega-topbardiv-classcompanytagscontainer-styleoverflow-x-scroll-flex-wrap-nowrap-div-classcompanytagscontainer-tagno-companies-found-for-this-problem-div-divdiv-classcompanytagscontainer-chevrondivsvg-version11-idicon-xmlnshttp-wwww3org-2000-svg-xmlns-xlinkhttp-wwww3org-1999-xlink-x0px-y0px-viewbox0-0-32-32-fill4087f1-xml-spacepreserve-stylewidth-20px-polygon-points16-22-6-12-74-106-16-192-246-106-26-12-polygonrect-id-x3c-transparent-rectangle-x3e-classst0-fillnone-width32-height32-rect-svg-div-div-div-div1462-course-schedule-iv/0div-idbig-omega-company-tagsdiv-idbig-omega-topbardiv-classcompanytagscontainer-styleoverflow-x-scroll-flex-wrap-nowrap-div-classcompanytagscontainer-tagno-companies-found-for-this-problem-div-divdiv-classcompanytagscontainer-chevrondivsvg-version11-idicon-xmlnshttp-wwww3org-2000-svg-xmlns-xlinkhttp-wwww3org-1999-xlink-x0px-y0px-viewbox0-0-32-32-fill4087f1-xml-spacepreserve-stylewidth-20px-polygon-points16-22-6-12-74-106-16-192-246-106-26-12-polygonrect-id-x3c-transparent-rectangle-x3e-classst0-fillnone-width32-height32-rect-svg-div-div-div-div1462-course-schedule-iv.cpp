class Solution {
public:
    vector<bool> checkIfPrerequisite(int num, vector<vector<int>>& prereq, vector<vector<int>>& queries) {

        vector<vector<int>> dis(num, vector<int>(num, 1e9));

        for(auto it:prereq){
            dis[it[0]][it[1]] = 1;
        }

        for(int k = 0; k < num; k++){
            for(int i = 0; i < num; i++){
                for(int j = 0; j < num; j++){
                    dis[i][j] = min(dis[i][j], dis[i][k]+dis[k][j]);
                }
            }
        }
        vector<bool> ans;

        for(int i = 0; i < queries.size(); i++){
            if(dis[queries[i][0]][queries[i][1]] == 1e9)
            ans.push_back(false);
            else
            ans.push_back(true);
        }
        return ans;
    }
};