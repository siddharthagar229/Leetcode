class Solution {
public:
    long long minimumTime(vector<int>& time, int trip) {
        sort(time.begin(),time.end());
        
        long long mid, s=0, e=100000000000000;
        long long ans=e;
        
        while(s<e){
            
            mid= (s+e)/2;
            long long c=0;
            for(int i=0;i<time.size();i++){
                c+=mid/time[i];
            }
            
            if(c>=trip){
                ans=min(ans,mid);
                e=mid;
            }
            else{
                s=mid+1;
            }
        }
        
        return ans;
        
        
    }
};