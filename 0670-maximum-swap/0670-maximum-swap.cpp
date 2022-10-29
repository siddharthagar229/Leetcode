class Solution {
public:
    int maximumSwap(int num) {
        
         string s = to_string(num);
        string k = s;
        sort(begin(k),end(k));
        reverse(begin(k),end(k));
        int i;
        for( i=0;i<s.length();i++)
         if(s[i]!=k[i]) break;
        if(i==s.length()) return stoi(s);
        for(int j=s.length();j>=0;j--)
          if(k[i]==s[j])
            swap(s[i],s[j]);
        return stoi(s);
        
    }
};