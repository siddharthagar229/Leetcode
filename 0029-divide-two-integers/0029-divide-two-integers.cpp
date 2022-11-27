class Solution {
public:
    int divide(int x, int y) {
        
        
        long long int a=x,b=y;
        long long ans=0,temp=0;
        int sign=0;
        
        if((a<0 && b>0) || (a>0 && b<0)){
            sign=1;
        }
        
        if(a<0) a=-a;
        if(b<0) b=-b;
        
        for(int i=31;i>=0;i--){
            
            if(temp+ (b<<i)<=a){
                temp+=b<<i;
                ans+=1ll<<i;
            }

            
        }
        
        if(sign==1) ans=-ans;
        if(ans>INT_MAX ||  ans<INT_MIN) return INT_MAX;
        return ans;
    }
};