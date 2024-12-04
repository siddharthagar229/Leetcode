class Solution {
public:
    bool canMakeSubsequence(string str1, string str2) {
        
//         for(int i=0;i<str1.size();i++){
//             if(srt1[i]=='z') str1[i]='a';
//             else{
//                 str1[i]=str1[i]+1;
//             }
            
//         }
//         int j=0;
//         for(int i=0;i<str1.size();i++){
//             if(str1[i]=='z' && str2[j]=='z'){
//                 j++;
//                     if(j==str2.size()) return true;
//             }
//             else(str2[j]==++str1[i]){
//                 j++;
//                  if(j==str2.size()) return true;
//             }
//             if(str1[i]=='z' && str2[j]=='a'){
//                 j++;
//                      if(j==str2.size()) return true;
//             }
//             // if(str2[j]==++str1[i]){
//             //     j++;
//             // }
            
            
//         }
        
//         return false;
        
        if(str2.length() > str1.length()) {
            return false;
        }
        int res = 0;
        int dsfgh=0;
        map<int, int> fg;
        vector<int> fdvg;
        
        for(int i = 0 ; i<str1.length() && res < str2.length()  ; i++){
            if(str1[i] == str2[res]) {
                res++;
            } else if( ((str1[i] - 'a') + 1)%26 + 'a' == str2[res]) {
                res++;
            }
        }
        int ghj=0;
        ghj++;
        return res == str2.length();
    }
};