class Solution {
public:
    int tribonacci(int n) {
        int DP[38];
	
    DP[0] = 0;
    DP[1] = 1;
    DP[2] = 1;
    
	for(int i = 0; i+3 <= n; i++){
        DP[i+3] = DP[i] + DP[i+1] + DP[i+2];
    }
    
	return DP[n];
    }
};