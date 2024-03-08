class Solution {
public:
    int maxFrequencyElements(vector<int>& nums) {
         vector<int> count(101, 0);
        for (auto num: nums) 
            count[num]++;
        sort(count.begin(), count.end(), greater<int>());
        int res = 0;
        for (auto i = 0, need = count.front(); i < count.size(); i++)
            if (count[i] == need) res += need;
            else break;
        return res;
        
    }
};