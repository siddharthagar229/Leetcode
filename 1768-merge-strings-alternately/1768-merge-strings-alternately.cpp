class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string res;
        int i = 0, j = 0; bool alt = true;
        while (i < word1.size() && j < word2.size()) {
            if (alt)
                res += word1[i++];
            else
                res += word2[j++];
            alt = !alt;
        }
        while(i < word1.size()) res += word1[i++];
        while(j < word2.size()) res += word2[j++];
        return res;
    }
};