class Solution {
public:
    int findWinningPlayer(vector<int>& skills, int k) {
        
        int a = 0;
    
    for(int i = 1, t = 0; i != skills.size(); i++){
      if(skills[a] > skills[i]) t++;
      else a = i, t = 1;
      if(t >= k) return a;
    }
    
    return a;    
        
    }
};