class Solution {
public:
    int minFlipsMonoIncr(string s) {
         int zero = 0, one = 0, i = 0;
        while(i < s.length() and s[i] == '0') i++;
        while( i < s.length()) {
            if(s[i++] == '0') zero++;
            else one++;
            if(zero > one) zero = one;
        }
        return zero ;
    }
};