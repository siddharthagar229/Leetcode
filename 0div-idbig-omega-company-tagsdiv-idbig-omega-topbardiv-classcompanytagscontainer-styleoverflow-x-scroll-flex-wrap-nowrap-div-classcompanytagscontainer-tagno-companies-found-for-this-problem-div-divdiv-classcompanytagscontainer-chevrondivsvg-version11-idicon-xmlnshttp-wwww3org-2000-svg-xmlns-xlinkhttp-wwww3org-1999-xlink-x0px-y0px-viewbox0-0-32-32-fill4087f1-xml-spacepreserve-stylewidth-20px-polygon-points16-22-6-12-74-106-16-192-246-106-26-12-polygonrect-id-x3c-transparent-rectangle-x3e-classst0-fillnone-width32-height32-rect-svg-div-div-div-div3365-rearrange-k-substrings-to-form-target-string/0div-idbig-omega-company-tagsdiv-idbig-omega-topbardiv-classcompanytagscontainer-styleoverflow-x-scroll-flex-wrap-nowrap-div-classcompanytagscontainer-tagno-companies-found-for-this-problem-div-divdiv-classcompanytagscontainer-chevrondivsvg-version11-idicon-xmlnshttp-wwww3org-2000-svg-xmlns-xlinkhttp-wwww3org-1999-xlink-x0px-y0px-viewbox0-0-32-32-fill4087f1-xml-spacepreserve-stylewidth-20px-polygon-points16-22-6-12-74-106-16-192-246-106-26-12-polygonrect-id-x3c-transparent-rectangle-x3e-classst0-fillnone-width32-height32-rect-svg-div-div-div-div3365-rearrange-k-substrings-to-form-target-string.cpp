class Solution {
public:
    bool isPossibleToRearrange(string s, string t, int k) {               
        unordered_map<string,int>temp,temp2;
        int n=s.length();
        string c=""; string c2="";
        int div=n/k;        
        int cnt=0;  
        for(int i=0;i<n;i++){
            cnt++;
            c+=s[i]; c2+=t[i];
            if(cnt==div){
                temp[c]++; temp2[c2]++;               
                c2="";  c="";
                cnt=0;   
            }            
        }         
        for(auto &[x,y]:temp){
            if(y!=temp2[x])return false;    
        }
        return true;    
    }
};