class Solution {
public:
    unordered_map<int,int>ans;
    map<pair<int,int>,bool> memo;
    int last;
    bool show(int k,int stone){
        if(stone==last)
          return true;
        if(memo.find({k,stone}) != memo.end()) return memo[{k,stone}];
        bool b=false,a=false,f=false;
        if(k-1!=0 && ans.find(stone+k-1)!=ans.end()){
            b=show(k-1,stone+k-1);
        }
        if(ans.find(stone+k)!=ans.end()){
            a=show(k,stone+k);
        }
        if(ans.find(stone+k+1)!=ans.end()){
            f=show(k+1,stone+k+1);
        }

        return memo[{k,stone}]= a or b or f;
    }
    bool canCross(vector<int>& stones) {
         for(auto itr : stones){ 
            ans[itr]++;
           
        }
        if(stones[1]!=1) return false;
        last=stones[stones.size()-1];
        return show(1,1);
    }
};