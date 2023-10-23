class Solution {
public:
    bool isPowerOfFour(int n) {
        
        long long pn=1;
        while(pn<n) pn*=4;
        return pn==n;
        
    }
};