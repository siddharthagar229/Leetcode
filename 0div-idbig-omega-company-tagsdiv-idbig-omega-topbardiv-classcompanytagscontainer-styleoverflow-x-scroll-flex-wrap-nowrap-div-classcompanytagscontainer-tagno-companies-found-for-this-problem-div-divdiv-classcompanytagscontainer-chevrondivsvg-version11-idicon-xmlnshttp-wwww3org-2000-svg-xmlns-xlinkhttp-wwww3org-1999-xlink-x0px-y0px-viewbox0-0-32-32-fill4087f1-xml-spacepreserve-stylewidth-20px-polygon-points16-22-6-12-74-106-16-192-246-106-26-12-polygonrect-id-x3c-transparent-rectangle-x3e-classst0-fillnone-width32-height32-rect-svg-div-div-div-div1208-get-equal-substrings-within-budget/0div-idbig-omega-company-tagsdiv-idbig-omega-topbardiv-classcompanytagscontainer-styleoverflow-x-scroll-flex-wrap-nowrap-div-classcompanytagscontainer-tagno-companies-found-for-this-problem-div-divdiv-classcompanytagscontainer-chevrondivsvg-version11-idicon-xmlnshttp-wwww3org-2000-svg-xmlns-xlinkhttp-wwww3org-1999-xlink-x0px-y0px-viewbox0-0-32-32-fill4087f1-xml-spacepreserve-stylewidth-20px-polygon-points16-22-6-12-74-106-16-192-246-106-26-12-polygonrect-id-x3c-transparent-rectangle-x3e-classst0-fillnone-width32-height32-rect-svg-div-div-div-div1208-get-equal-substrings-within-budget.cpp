class Solution {
public:
    int equalSubstring(string s, string t, int maxCost) {
        
        int n=s.size();
      
          //abcd and acde
        // 0,1,1,1   
       int i=0, j=0, ans=0,sum=0;
       while(j<n){

        sum+=abs(int(s[j])-int (t[j]));

        if(sum<=maxCost){
            ans=max(j-i+1,ans);
            
        }

        else {
           while(sum>maxCost && i<=j){
             sum= sum-abs(int(s[i])-int (t[i]));
            i++;
           }
        }
        j++;

       }

       return ans;
        
    }
};