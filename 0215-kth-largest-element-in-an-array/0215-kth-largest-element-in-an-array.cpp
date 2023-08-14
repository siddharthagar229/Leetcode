class Solution {
public:
    priority_queue<int,vector<int>,greater<int>> q;
    void add(int n)
    {
        if(n>q.top())
        {
            q.pop();
            q.push(n);
        }
    }
    int findKthLargest(vector<int>& nums, int k) {
       for(int i=0; i<k; i++)
       {
           q.push(nums[i]);
       }
       for(int i=k; i<nums.size(); i++)
       {
           add(nums[i]);
       }
        return q.top();
       // for(int i=0; i<nums.size(); i++)
       // {q.push(nums[i]);}
       // for(int i=1; i<k; i++)
       // {q.pop();}
       // return q.top(); 
    }
};