class Solution {
public:
    int findMinArrowShots(vector<vector<int>>& points) {
        
         sort(points.begin(),points.end());
        int first,second,i=0,n=points.size(),cnt=0;
        while(i<n){
            first=points[i][0],second=points[i][1];
            while(i<n && points[i][0]<=second && points[i][0]>=first){
                second=min(second,points[i][1]);
                first=max(first,points[i][0]);
                i++;
            }
            cnt++;
        }
        return cnt;
        
    }
};