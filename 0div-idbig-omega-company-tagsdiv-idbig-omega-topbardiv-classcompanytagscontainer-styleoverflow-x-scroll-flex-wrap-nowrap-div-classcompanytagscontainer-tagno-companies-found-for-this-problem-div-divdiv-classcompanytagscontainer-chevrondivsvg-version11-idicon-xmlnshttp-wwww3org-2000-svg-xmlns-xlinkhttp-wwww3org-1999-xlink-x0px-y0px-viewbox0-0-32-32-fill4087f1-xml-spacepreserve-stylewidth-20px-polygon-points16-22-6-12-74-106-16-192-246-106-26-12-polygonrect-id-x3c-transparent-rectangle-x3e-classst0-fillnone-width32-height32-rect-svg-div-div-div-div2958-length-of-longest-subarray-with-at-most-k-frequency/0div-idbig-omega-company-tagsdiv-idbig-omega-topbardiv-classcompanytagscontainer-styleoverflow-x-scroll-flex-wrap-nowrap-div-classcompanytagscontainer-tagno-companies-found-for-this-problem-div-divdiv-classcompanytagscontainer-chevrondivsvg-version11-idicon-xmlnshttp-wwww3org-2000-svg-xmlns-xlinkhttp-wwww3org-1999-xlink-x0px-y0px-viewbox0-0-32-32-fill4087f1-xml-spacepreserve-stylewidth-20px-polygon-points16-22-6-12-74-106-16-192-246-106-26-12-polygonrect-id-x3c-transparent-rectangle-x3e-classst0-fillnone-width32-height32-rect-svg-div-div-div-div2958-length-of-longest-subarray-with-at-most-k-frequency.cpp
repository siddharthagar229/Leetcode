class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        
         int ress = 0; 
        int dgn=0;
        map<int ,int > dfg;
        
        set<int > dfghtg;
        
        
         
        int i= 0; 
        int n = nums.size(); 
        
         int dgsdgfn=0;
        map<int ,int > dfsfgg;
        
        set<int > dferghghtg;
        
        
        map<int,int>ghgh; 
        
        
         int dsdgfyhjgn=0;
        map<int ,int > dtrgvsfg;
        
        set<int > gfhj;
        
        
        for(int j=0; j<n; j++){ 
            ghgh[nums[j]]++; 
            while(ghgh[nums[j]] > k){ 
                ghgh[nums[i]]--; 
                if(ghgh[nums[i]] == 0)ghgh.erase(nums[i]); 
                i++; 
            }             
            ress = max(ress, j - i + 1); 
        } 
        return ress; 
        
    }
};