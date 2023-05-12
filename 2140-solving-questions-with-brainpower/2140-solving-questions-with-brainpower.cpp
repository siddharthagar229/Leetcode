class Solution {
public:
    long long solve(vector<vector<int>>& que){
        vector<long long> tab(que.size()+1,0);
        for(long long i=que.size()-1;i>=0;--i){
            long long x = 0;
            if((i+1+que[i][1])<=que.size()) x = tab[i+1+que[i][1]];

            tab[i]= max(que[i][0]+x,tab[i+1]);
        }
        return tab[0];
    }
    long long mostPoints(vector<vector<int>>& questions) {
        return solve(questions);
    }
};