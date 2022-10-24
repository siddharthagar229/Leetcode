class Solution {
public:

bool check(string s , string t ){
    vector <int> temp(26 , 0);
  for(int i = 0 ; i < max(s.length() , t.length()) ; i++){
      if(i < s.length()) temp[s[i] - 'a']++;
      if(i < t.length()) temp[t[i] - 'a']++;
  }
    for(int i = 0; i < 26 ; i++){
        if(temp[i] > 1 ) return false;
}

    return true;
    
}

int ans = 0;

void soln(vector<string>& arr ,  string str , int i ){
    
    if(i == arr.size()){
        int acha = str.length();
        ans = max(ans  , acha);
        return;
    }
    
    soln(arr , str , i+1);
    if(check(str , arr[i])){
    soln(arr , str+ arr[i] , i+1);
}

}
int maxLength(vector<string>& arr) {
soln(arr , "" , 0);
return ans;
}
};