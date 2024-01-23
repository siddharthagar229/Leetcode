class Solution {
public:
    bool isUnique(string& str){
        
        vector<int> hash(26, 0);
        
        for(int i=0; i<str.size(); i++){  
            hash[str[i]-'a']++; 
            if(hash[str[i]-'a'] != 1) 
                return false;   
        }
        return true;
    }
    
    void maxLengthString(vector<string>& arr, string curr, int i, int& ans){
        
        if(not isUnique(curr)){
            return; 
        }
        
        if(i == arr.size()){
            if(isUnique(curr)){
                ans = max(ans, (int)curr.size());
            }
            return;
        }
        
        curr = curr + arr[i];
        maxLengthString(arr, curr, i+1, ans);
        for(int j=0; j<arr[i].size(); j++) curr.pop_back();
        
        maxLengthString(arr, curr, i+1, ans);
    }
    
    
    int maxLength(vector<string>& arr) {
        
        int ans = 0;
        maxLengthString(arr, "", 0, ans);
        return ans;
	}
};