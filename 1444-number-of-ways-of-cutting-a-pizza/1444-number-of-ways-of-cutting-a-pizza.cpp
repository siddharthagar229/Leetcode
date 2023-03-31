typedef long long ll;
const ll mod = 1e9 + 7;

class Solution {
public:
    
    ll DP[55][55][11];
    char a[55][55];
    int N , M;
    
    int check(int x1 , int y1 , int x2 , int y2){
        for(int i = x1; i <= x2; ++i){
            for(int j = y1; j <= y2; ++j){
                if(a[i][j] == 'A')return 1;
            }
        }
        return 0;
    }
    
    ll solve(int x , int y , int k){
        if(k == 0){
            return check(x , y , N , M);
        }
        if(x < 0 || x > N || y < 0 || y > M){
            return 0;
        }
        ll& ret = DP[x][y][k];
        if(~ret){
            return ret;
        }
        ret = 0;
        for(int i = y + 1; i <= M; ++i){
            if(check(x , y , N , i - 1)){
                ret = (ret + solve(x , i , k - 1)) % mod;
            }
        }
        for(int i = x + 1; i <= N; ++i){
            if(check(x , y , i - 1,  M)){
                ret = (ret + solve(i , y , k - 1)) % mod;
            }
        }
        return ret;
    }
    
    int ways(vector<string>& p, int k) {
        N = p.size();
        M = p[1].size();
        for(int i = 0; i < N; ++i){
            for(int j = 0; j < M; ++j){
                a[i + 1][j + 1] = p[i][j];
            }
        }
        memset(DP , -1 , sizeof(DP));
        return solve(1 , 1 , k - 1);
    }
};

