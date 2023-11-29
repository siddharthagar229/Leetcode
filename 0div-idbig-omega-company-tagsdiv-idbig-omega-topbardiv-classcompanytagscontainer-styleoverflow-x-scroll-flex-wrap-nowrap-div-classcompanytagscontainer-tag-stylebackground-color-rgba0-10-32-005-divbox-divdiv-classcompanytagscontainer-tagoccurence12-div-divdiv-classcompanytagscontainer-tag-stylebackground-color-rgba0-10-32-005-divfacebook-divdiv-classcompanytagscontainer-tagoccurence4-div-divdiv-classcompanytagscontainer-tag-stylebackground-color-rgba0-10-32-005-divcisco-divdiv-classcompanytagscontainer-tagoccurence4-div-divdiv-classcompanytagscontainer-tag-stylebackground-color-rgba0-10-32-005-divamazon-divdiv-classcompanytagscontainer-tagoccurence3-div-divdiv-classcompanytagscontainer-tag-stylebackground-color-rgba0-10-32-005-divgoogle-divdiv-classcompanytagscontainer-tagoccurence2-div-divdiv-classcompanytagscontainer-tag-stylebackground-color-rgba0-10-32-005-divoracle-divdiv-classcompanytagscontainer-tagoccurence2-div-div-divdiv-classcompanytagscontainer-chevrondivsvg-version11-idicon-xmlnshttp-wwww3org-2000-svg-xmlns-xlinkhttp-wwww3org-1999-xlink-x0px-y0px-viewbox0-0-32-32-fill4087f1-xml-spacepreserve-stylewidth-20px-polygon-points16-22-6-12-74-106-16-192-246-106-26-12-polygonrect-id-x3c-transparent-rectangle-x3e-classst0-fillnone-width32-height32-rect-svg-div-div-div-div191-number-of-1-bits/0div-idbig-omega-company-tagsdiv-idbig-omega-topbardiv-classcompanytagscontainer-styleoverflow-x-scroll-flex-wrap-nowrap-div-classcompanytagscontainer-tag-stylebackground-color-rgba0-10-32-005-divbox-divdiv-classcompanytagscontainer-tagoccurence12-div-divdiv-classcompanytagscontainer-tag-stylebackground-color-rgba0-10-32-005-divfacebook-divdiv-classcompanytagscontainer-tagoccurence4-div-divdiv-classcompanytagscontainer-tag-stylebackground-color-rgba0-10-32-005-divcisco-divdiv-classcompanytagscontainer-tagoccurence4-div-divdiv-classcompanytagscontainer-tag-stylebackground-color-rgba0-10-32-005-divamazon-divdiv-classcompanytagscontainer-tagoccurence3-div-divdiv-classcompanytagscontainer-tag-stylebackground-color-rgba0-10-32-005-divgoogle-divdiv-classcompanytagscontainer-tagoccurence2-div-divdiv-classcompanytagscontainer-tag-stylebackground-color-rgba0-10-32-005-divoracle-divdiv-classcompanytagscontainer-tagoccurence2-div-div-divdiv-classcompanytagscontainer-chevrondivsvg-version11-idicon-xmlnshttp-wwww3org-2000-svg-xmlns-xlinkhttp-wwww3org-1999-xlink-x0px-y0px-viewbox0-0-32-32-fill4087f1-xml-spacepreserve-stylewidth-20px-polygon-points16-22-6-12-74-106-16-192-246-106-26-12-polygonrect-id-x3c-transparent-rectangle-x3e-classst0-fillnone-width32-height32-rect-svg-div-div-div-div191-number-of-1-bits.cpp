class Solution {
public:
int hammingWeight(uint32_t n) {
int res = 0;
while(n!=0)
{
res += n%2; //adding last bit to the result
n = n/2;// shift one bit to right
}
return res;
}
};