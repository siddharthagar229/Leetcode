class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        
         int cnt1 = 0, cnt2 = 0;
        for(int a : bills)
        {
            if(a == 5) cnt1++;
            else if(a == 10)
            {
                if(cnt1 < 1) return false;
                cnt2++; cnt1--;
            }
            else
            {
                if(cnt2 > 0 && cnt1 > 0){cnt2--; cnt1--;}
                else if(cnt1 > 2) cnt1 -= 3;
                else return false;
            }
            // else return false;
        }
        return true;
        
    }
};