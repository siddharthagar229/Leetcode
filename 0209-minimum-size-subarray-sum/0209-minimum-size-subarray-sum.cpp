class Solution {
public:
    int minSubArrayLen(int target, vector<int>& nums) {
        int i = 0;
            int j = 0;
            int sum = 0;
            int minlength = INT_MAX;
            while (j < nums.size())
            {

                sum += nums[j]; // updating our sum everytime 
                
                // if (sum < target)
                // {
                //     j++;
                // }
                if (sum >= target)
                {

                    while (sum >= target)
                    {
                        minlength = min(minlength, j - i + 1);	// update out minlength whenever we hit the target
                        sum -= nums[i];
                        i++;
                    }
                    // j++;
                }
                j++;
            }

            return (minlength == INT_MAX) ? 0 : minlength;
    }
};