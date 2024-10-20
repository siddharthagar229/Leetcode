class Solution {
public:
    bool check(map<char, int>& mp, int& k) {
        int c = 0;

        for (auto i : mp) {
            if (i.second >= k) {
                return true;
            }
        }

        return false;
    }
    int numberOfSubstrings(string s, int k) {
        int totalSubstrings = 0;
        int n = s.length();
        map<char, int> mp;

        int r = 0;
        int l = 0;
        while (r < s.size()) {
            mp[s[r]]++;
            while (check(mp, k)) {
                totalSubstrings += (n - r);
                mp[s[l]]--;
                l++;
            }
            r++;
        }

        return totalSubstrings;
    }
};