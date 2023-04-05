class Solution {
public:
    int minimizeArrayValue(vector<int>& nums) {
        long long mini_ans=nums[0];  // Assuming the ans to be the first element as it can't be further minimised than its present value.
        long long sum=nums[0];  // For storing the sum of the elements for taking their average.

        for(int i=1;i<nums.size();i++){  // We alredy computed for the first element of the array so we started the loop from the 2nd element.
            sum += nums[i];
            int avg = sum / (i+1);  // Taking the average of the new sum
            if(avg >= mini_ans){  // If average is bigger than the current mini_ans
                mini_ans = avg;  // Than we update the mini_ans
                if(sum % (i+1)){  // If the avg is not exactly divided that means we have to increment mini_ans.
                    mini_ans++;  // Its because we cannot change the values of array < 1.
                }
            }            
        }                
        return mini_ans; 
    }
};