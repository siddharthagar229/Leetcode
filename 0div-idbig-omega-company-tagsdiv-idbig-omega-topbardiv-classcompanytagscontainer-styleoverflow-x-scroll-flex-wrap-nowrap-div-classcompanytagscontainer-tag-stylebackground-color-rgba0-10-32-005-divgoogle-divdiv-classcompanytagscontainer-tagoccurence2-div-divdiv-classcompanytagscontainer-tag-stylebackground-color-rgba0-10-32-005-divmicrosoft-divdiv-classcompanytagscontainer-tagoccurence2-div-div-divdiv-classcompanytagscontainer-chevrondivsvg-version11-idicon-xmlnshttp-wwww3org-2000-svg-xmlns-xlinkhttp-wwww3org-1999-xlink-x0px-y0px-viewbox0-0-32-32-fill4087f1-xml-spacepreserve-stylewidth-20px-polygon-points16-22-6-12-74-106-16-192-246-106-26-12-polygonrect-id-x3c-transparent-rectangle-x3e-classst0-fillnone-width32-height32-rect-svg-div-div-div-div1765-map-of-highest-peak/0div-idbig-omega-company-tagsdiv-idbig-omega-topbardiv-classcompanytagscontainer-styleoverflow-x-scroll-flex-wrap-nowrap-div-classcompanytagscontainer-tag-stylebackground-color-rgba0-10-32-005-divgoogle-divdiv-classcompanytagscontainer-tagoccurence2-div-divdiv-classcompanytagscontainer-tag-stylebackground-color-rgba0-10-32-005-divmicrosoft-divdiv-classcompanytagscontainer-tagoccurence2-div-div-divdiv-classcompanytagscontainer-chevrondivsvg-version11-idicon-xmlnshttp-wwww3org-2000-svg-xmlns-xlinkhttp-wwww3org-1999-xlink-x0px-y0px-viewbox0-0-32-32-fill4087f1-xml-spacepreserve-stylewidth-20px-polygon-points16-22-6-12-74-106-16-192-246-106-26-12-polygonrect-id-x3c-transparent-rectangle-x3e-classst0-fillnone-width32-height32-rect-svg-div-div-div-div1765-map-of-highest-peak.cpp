class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& mat) {
        int n = mat.size();
        int m = mat[0].size();

        vector<vector<int>> ans(n, vector<int>(m, -1));

        queue<pair<int, int>> q;

        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                if(mat[i][j]==1) {
                    ans[i][j] = 0; //assign height 0 to the water;
                    q.push({i, j});
                }
            }
        }

        int delr[] = {0, +1, 0, -1};
        int delc[] = {+1, 0, -1, 0};

        while(!q.empty()) {
            int s = q.size();
            for(int ss=0;ss<s;ss++) {
                int row = q.front().first;
                int col = q.front().second;
                q.pop();
                int height = ans[row][col];

                for(int i=0;i<4;i++) {
                    int nrow = row + delr[i];
                    int ncol = col + delc[i];

                    if(nrow>=0 && ncol>=0 && nrow<n && ncol<m && mat[nrow][ncol]==0 &&ans[nrow][ncol]==-1) {
                        ans[nrow][ncol] = height+1;
                        q.push({nrow, ncol});
                    }
                }
            }
        }
        return ans;
    }
};
