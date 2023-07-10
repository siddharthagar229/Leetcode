class Solution {
public:
    bool isNStraightHand(vector<int>& hand, int groupSize) {
        
        //  int n = hand.size();
        // if(n%k)return 0;
        // map<int,int> mp;
        // for(auto it:hand)mp[it]++;
        // for(auto it:mp)
        // {
        //     if(it.second>0)
        //     {
        //         for(int i = 0;i<k;i++)
        //         {
        //             if(mp[i+it.first]-it.second<0)return 0;
        //             mp[i+it.first] -= it.second;
        //         }
        //     }
        // }
        // return 1;
        
         int n = hand.size();
        sort(hand.begin(),hand.end());
        unordered_map<int,int> mp;
        for(auto it: hand){
            mp[it]++;
        }
        for(int i=0;i<n;i++){
            if(mp[hand[i]] == 0){
                continue;
            }
            int st = hand[i];
            int count= 1;
            while(count<=groupSize){
                if(mp[st]==0){
                    return false;
                }
                mp[st]--;
                st++;
                count++;
            }
        }
        return true;
        
    }
};