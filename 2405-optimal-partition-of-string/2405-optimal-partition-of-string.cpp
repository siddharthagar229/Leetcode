class Solution {
public:
    int partitionString(string s) {
        
         int n=s.size();
        unordered_map<char,int>m;
		//we will have the ans equal to 1 always as we can take the whole string
        int ans=1;
		//now we will start putting char in the hashmap
        for(int i=0;i<n;i++){
		//checking if the char already occured
            if(m.count(s[i])){
			//increasing ans by 1
                ans++;
			//clearing the hashmap
                m.clear();
            }
			//putting char in hashmap
            m[s[i]]++;
        }
		//returning the ans
        return ans;
        
    }
};