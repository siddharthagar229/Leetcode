class Solution {
public:
    int appendCharacters(string s, string t) {
        int j= 0;
        
        int n = t.size(), cnt = 0;   //this much we have to match
        for(int i=0; i<s.size(); i++){
            // cout<<s[i]<<" "<<t[j]<<endl;
            //check how many char are matching
            while(i<s.size() && j<t.size() && s[i] == t[j]){
                cnt++;
                i++; j++;
            }
                
        }
        
       //total - matched
        return n-cnt;
    }
};