class Solution {
public:
    string lastNonEmptyString(string s)
    {
        int l = s.size();
        vector <int> f(26,0);
        vector <int> last(26,-1);
        for(int i=0;i<l;i++){
            last[s[i]-'a'] = i;
            f[s[i]-'a']++;
        }
        int maxi = -1;
        for(int i:f)
            maxi = max(maxi,i);
        vector <pair<int,int>> fin;
        for(int i=0;i<26;i++)
        {
            if(f[i]==maxi)
            {
                fin.emplace_back(last[i],i);
            }
        }
        sort(fin.begin(),fin.end());
        string ans = "";
        for(auto i:fin)
        {
            ans+=(i.second+'a');
        }
        return ans;
    }
};