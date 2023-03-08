class Solution {
public:
   
        
        
        
        
bool count(vector<int>& piles, int k, int h){
    long long hcount = 0;
    for(int i=0;i<piles.size();i++){
        long long div = piles[i]/k;
        hcount += div;
        if(piles[i]%k!=0)
            hcount++;
    }
    return hcount<=h;
}


int minEatingSpeed(vector<int>& piles, int h) {
    int start=1, end=*max_element(piles.begin(), piles.end());
    while(start<=end){
        int mid = (start+end)/2;
        if(count(piles, mid, h))
            end = mid-1;
        else
            start = mid+1;
    }
    return start;
}
        
    
};