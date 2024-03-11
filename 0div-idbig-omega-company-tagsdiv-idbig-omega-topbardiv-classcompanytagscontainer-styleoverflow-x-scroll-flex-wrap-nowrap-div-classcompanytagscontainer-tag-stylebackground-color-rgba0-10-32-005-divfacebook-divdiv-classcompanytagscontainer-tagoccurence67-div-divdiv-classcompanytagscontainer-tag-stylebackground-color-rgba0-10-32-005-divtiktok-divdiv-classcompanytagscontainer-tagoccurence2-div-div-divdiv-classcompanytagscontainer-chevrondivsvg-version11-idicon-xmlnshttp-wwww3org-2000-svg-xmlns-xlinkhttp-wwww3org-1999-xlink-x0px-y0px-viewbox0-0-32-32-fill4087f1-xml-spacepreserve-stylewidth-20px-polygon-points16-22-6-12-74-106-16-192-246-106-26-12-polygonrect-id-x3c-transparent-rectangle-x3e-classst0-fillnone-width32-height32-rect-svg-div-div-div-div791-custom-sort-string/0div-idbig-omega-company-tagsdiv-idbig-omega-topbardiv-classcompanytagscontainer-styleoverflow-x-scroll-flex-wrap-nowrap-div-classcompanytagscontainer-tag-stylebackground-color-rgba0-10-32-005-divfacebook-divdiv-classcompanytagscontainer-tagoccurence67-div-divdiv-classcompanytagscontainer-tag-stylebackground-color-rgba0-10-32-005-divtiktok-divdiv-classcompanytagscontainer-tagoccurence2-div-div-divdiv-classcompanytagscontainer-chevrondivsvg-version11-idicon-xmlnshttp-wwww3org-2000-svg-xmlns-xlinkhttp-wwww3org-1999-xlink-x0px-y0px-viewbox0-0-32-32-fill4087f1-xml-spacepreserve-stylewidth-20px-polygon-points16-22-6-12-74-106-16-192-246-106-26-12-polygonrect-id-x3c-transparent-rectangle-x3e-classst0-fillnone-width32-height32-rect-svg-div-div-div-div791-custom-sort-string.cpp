class Solution {
public:
    string customSortString(string order, string s) {
        unordered_map<char, int>mp;
        
        for(auto x:s) {
            mp[x]++;
        }
        string ans= "";
        for(auto it:order) {
            if(mp.find(it)!=mp.end()) {
                auto temp= mp.find(it);
                char x= temp->first;
                int count= temp->second;
                
                for(int i= 0;i<count;i++) {
                    ans +=x;
                }
                mp.erase(it);
            }
        }
        for(auto it:mp) {
            char x= it.first;
            int count= it.second;
            
            for(int i= 0;i<count;i++) {
                ans +=x;
            }
        }
        return ans;
    }
};