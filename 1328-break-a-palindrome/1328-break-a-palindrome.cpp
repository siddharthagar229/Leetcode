class Solution {
public:
    string breakPalindrome(string s) {
        
        int n = s.size(); //size of string 
        if(n==1 || n==0)  //return empty string if size==1 or size==0
            return "";
        
        for(int i=0; i<n/2; i++) {
            if(s[i]!='a') {
                s[i] = 'a'; // character doesnot equal to 'a' replace it with a and return the string
                return s;
            }
        }
        
        s[n-1] = 'b'; // change the last  character with b
        return s;
        
    }
};