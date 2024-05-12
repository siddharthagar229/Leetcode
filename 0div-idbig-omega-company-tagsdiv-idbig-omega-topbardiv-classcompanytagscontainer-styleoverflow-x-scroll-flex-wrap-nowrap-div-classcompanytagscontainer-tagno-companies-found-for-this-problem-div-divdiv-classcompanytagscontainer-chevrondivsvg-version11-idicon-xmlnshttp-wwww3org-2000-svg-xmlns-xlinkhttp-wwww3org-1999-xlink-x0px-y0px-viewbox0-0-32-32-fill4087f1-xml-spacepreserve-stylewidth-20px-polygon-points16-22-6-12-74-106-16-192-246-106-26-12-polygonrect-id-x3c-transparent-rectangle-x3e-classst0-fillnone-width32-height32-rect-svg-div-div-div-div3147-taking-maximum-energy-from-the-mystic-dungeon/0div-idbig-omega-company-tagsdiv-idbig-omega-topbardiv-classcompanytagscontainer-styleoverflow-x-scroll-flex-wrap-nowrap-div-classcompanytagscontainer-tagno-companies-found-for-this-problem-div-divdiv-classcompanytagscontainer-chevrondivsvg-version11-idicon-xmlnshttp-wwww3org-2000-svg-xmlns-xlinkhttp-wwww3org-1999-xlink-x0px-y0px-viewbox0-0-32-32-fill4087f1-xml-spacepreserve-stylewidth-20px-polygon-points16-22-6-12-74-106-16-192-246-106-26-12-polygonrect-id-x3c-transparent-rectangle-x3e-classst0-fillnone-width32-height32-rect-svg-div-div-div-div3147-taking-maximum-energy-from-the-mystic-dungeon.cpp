class Solution {
public:
    int maximumEnergy(vector<int>& A, int k) {
        
        for(int i=A.size()-k-1;i>=0;i--){
            A[i]+=A[i+k];
        }
        
        return *max_element(A.begin(),A.end());
        
    }
};