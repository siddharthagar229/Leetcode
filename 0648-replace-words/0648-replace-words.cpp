class Solution {
public:
    string replaceWords(vector<string>& dict, string sn) {
        
         unordered_map<string,int> mp;
        
        for(auto x:dict) mp[x]++;
        
        string ans;
        
        stringstream s(sn);
        
        string t;
        
        while(getline(s,t,' ')){
            int n = t.size();
            string tmp;
            bool ok=0;
            for(int i=0;i<t.size();i++){
                tmp+=t[i];
                if(mp.count(tmp)){
                    ok=1;
                    ans+=tmp;
                    ans+=' ';
                    break;
                }
            }
            
            if(ok==0){
                ans+=t;
                ans+=' ';
            }
            
        }
        ans.pop_back();
        return ans;
        
    }
};