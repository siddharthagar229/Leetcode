class Solution {
public:
    static bool cmp(string &a, string &b){
        return a + b > b + a;
    } 
    string largestNumber(vector<int>& nums) {
        int n = nums.size();
        string ans = "";
        vector<string> str;
        for(int i = 0; i < n; i++){
            str.push_back(to_string(nums[i]));
        }
        
        sort(str.begin(), str.end(), cmp);
        
        // MSB is 0 , return 0
        if(str[0] == "0"){
            return "0";
        }
        
        for(int i = 0; i < n; i++){
            ans += str[i];
        }
        
        return ans;
    }
};