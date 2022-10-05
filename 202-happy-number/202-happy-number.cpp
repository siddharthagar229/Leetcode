class Solution {
private:
    int square_of_all_digit(int n){
        long long sum=0;
        while(n>0){
            long long r=n%10;
            sum+=(r*r);
            n/=10;
        }
        return sum;
    }
    
public:
    bool isHappy(int n) {
        long long sum=n,fast=0;
       while(fast!=7 && sum!=1){
           sum=square_of_all_digit(sum);
           fast++; 
           // cout<<sum<<" ";
       }
        return sum==1;
    }
};