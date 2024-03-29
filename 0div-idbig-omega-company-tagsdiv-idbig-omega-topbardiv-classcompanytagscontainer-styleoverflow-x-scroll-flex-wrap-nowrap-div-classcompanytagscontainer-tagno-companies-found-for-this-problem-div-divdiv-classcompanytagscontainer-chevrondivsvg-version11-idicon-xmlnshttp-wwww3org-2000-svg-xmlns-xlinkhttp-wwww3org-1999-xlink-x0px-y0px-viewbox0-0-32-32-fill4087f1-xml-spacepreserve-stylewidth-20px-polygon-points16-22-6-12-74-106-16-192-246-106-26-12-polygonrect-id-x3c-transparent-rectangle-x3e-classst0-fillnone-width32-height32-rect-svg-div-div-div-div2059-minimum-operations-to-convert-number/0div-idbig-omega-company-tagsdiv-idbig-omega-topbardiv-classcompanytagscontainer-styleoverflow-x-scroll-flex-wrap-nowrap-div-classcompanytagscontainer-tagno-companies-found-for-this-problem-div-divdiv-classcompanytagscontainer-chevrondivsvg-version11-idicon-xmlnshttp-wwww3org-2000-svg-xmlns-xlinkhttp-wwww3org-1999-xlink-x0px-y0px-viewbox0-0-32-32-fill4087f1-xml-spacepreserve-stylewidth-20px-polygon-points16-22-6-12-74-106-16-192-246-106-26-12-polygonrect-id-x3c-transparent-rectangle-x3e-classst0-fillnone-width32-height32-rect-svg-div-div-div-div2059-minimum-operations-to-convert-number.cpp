class Solution {
public:
    int minimumOperations(vector<int>& nums, int start, int goal) {
        
        queue<int> q;
        q.push(start);
        unordered_set<int> vis; //keep track of processed number
        int steps=0; //count steps
        while(!q.empty())
        {
            int sz=q.size();
            while(sz--)
            {
                auto temp=q.front();
                q.pop();
                if(temp==goal)
                {
                    return steps;
                }
                if(temp<0 || temp>1000 || vis.find(temp)!=vis.end()) //if x<0 || x>100 || already processed
                {
                    continue;
                }
                vis.insert(temp);
                for(int i=0;i<nums.size();++i)
                {
                    //performing operations
                    int op1=temp+nums[i];
                    int op2=temp-nums[i];
                    int op3=temp^nums[i];
                    q.push(op1);
                    q.push(op2);
                    q.push(op3);
                }
            }
            steps++;
        }
        return -1;
        
    }
};