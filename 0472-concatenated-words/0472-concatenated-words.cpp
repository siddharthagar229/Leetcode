class Solution {
public:
   unordered_map<string,bool> mp;

   bool check(string &word){
    
     int n=word.length();
    
    for(int i=1;i<n;i++){
        
        string suff=word.substr(0,i);
        string pref=word.substr(i,n-i);

        if(mp.find(suff)!=mp.end() && (mp.find(pref)!=mp.end()||check(pref))) return true;
        
    }
    
    return false;
}

vector<string> findAllConcatenatedWordsInADict(vector<string>& words) {
    
        vector<string> ans;

    for(auto word:words) mp[word]=true;
    
    
    for(auto word:words){
        
        if(check(word)) ans.push_back(word);
        
    }
    
  return ans;  
}
};