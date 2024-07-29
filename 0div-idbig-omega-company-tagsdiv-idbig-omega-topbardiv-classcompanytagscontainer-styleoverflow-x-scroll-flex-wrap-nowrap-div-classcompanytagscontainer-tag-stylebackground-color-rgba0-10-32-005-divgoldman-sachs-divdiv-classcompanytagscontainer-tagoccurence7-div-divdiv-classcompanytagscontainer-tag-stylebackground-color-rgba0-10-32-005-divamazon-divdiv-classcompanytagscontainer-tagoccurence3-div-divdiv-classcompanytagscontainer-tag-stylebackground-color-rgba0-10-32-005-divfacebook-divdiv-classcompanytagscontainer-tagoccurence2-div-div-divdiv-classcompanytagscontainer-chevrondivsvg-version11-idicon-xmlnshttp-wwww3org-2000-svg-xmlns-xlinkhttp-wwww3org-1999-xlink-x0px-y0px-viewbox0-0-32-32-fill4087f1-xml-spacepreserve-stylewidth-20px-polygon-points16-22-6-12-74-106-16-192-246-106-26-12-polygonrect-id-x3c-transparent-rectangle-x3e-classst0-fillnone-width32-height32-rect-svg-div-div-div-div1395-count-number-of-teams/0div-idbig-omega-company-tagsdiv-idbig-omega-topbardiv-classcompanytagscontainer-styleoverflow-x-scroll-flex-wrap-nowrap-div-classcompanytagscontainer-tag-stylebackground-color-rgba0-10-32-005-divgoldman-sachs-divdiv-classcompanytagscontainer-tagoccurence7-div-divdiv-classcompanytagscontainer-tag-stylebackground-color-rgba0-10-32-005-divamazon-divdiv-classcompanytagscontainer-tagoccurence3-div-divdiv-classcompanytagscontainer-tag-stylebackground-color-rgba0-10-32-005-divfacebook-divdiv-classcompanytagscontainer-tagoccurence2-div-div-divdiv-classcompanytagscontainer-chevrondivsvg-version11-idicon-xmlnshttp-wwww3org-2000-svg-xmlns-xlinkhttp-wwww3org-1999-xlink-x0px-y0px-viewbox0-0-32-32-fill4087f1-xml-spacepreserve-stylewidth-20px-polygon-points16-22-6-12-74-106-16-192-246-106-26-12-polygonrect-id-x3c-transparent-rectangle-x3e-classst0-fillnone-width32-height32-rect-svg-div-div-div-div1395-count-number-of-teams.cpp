class Solution {
public:
    int numTeams(vector<int>& rating) {
       int res=0;
            int n=rating.size();
            for(int i=1;i<n-1;i++){
                    int l_small=0;
                    int l_big=0;
                    int r_small=0;
                    int r_big=0;
                            
                   for(int j=0;j<i;j++){
                           if(rating[j]<rating[i]){
                                   l_small++;
                           }
                          else if(rating[j]>rating[i]){
                                  l_big++;
                          }
                   }
                       for(int k=i+1;k<rating.size();k++){
                           if(rating[k]<rating[i]){
                                   r_small++;
                           }
                          else if(rating[k]>rating[i]){
                                  r_big++;
                          }
                   }
                    res+=l_small*r_big+l_big*r_small;//taking all possible combination
            }
        
            return res;
        
    }
};