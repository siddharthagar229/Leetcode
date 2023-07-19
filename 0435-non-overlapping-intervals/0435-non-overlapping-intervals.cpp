class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        
        sort(intervals.begin(),intervals.end());
        int c=0,n=intervals.size(),left=0,right=1;
        
        while(right<n){
            if(intervals[left][1]<=intervals[right][0]){
                left=right;
                right++;
            }
           else if(intervals[left][1]<=intervals[right][1]){
                c++;
                right++;
            }
           else if(intervals[left][1]>intervals[right][1]){
                left=right;
                c++;
                right++;
            }
            
        }
        
        return c;
        
    }
};