class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string sub2;
        int size = s.length();
        int i = 1, j;
        for (i = 1; i <= size / 2; i++) {
            string sub = s.substr(0, i);
            for (j = i; j <= size; j = j + i) {
                sub2 = s.substr(j, i);
                if (!(sub2.compare(sub)==0))break;
            }
            if (j == size) return true;
        }
        return false;      
    }
};