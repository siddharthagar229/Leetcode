class Solution {
public:
    long long putMarbles(vector<int>& weights, int k) {
        
        long long n=weights.size();
        if (k==1) return 0;
        vector<long long> partition(n-1, 0);
        for (long long i=0; i<n-1; i++)
            partition[i]=weights[i]+weights[i+1];
        
        sort(partition.begin(), partition.end());

        long long minP=0, maxP=0;
        long long l=0,r=0;
        for(long long i=0; i+1<k; i++) {
            l+=partition[i];
            r+=partition[partition.size()-1-i];
        }
        
        return r-l;
            
       
        
        
        
    }
};