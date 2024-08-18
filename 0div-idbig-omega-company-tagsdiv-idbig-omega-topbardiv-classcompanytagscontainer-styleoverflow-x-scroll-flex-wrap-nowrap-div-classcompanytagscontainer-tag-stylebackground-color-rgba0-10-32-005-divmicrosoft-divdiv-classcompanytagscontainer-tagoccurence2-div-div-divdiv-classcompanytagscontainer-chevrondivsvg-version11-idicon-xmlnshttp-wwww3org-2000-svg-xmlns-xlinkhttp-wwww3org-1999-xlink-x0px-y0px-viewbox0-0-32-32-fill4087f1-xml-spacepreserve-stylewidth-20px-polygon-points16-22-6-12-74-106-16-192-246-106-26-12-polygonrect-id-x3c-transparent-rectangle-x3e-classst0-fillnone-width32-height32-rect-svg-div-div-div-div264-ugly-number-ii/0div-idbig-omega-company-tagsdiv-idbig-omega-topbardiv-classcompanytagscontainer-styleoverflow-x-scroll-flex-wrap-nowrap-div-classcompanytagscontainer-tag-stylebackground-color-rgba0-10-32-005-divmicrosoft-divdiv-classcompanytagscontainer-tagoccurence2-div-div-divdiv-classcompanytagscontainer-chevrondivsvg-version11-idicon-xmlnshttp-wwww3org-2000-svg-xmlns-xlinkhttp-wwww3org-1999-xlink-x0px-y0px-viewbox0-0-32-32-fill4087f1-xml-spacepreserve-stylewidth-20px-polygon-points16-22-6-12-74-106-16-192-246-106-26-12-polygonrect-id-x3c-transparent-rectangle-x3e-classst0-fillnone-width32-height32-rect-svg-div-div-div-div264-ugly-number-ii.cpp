class Solution {
public:
    int nthUglyNumber(int n) {
        int i=0;
        int j=0;
        int k=0;
        vector<int> v;
        v.push_back(1);

        while(v.size()!=n){
               int m=min(v[i]*2,min(v[j]*3,v[k]*5));
	   if(m==v[i]*2) i++;
	   if(m==v[j]*3) j++;
	   if(m==v[k]*5) k++;
               v.push_back(m);  
        }
        return v.back();
    }
};