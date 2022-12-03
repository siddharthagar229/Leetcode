class Solution {
public:
    string frequencySort(string s) {
        
        unordered_map<char,int> mp;
      priority_queue<pair<int,char>> p;

      for(auto &x: s)
      {
        mp[x]++;
      }
      for(auto &x: mp)
      {
          p.push({x.second, x.first});
      }
    
     string t="";
      while(!p.empty())
      {
        int n=p.top().first;
        while(n--)
        {
            t.push_back(p.top().second);
        }
            p.pop();
        
      }
      return t;
        
    }
};