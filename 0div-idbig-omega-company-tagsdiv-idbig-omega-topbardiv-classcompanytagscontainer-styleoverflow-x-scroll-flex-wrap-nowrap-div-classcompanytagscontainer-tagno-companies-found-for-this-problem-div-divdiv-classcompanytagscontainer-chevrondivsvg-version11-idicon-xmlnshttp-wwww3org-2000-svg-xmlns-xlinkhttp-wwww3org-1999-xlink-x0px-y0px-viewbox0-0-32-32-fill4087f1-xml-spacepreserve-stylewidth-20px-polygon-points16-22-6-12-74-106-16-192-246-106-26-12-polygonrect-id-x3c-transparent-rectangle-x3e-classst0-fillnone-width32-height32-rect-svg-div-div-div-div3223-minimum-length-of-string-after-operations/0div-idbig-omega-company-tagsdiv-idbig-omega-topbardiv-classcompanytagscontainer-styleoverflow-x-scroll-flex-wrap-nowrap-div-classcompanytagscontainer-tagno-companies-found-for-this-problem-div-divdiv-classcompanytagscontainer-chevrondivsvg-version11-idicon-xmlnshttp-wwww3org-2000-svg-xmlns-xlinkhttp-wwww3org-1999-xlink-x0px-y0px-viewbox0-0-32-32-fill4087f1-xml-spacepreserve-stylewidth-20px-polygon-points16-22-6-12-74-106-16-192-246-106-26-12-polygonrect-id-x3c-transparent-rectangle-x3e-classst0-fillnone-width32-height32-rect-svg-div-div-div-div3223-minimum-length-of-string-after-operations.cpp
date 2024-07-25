class Solution {
public:
    int minimumLength(string s) {
       map<char,int>mpp;
       int count = 0 ; 
       for(int i = 0 ; i< s.length();i++){
        mpp[s[i]]++;
       } 
       for(auto it:mpp){
        if(it.second%2==0){count+=2;}
        else{count+=1;}
       }
       return count;
    }
};