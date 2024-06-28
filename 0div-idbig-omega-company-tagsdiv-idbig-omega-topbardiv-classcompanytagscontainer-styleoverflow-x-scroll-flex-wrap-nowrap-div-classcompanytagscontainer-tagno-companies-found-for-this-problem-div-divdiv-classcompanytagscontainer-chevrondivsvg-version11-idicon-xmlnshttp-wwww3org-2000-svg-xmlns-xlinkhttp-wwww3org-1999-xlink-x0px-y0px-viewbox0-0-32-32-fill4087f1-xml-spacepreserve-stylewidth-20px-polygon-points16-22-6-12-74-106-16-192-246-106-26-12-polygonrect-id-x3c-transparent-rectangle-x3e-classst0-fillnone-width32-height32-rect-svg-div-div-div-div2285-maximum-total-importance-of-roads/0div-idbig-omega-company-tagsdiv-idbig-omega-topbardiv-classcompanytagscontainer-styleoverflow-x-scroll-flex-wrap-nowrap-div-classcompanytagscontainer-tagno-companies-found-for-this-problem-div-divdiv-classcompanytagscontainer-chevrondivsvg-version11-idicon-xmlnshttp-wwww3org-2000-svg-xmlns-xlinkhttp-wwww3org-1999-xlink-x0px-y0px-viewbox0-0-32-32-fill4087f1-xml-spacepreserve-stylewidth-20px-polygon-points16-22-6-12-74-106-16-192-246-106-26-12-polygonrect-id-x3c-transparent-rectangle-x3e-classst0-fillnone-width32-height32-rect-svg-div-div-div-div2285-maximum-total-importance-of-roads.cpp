class Solution {
public:
    long long maximumImportance(int n, vector<vector<int>>& roads) {
        
        long long cnt = 0 ; 
          vector<long long> vv ; 
          map<long,long> mp; 
          for(auto a : roads ) {
               mp[a[0]]++ ; 
               mp[a[1]]++ ; 
          }
          
          for(auto a : mp ) {
              vv.push_back(a.second);
          }
         sort(vv.begin(), vv.end()); 
         reverse(vv.begin(), vv.end()); 
         for(auto a : vv)  {
               cnt = cnt + a * (n --) ; 
         }
         return cnt ; 
        
    }
};