class Solution {
public:
    vector<int> getRow(int rowIndex) {
        vector<int> ans(rowIndex+1, 1);
	//set all values to 1 because we don't need to calculate start and end of the vector.
    unsigned long int temp;
	//prevents integer overflow; will fit in integer format after division.
    for(int i = 1;i<=rowIndex/2;++i){
	//calculates only half of the size because it's symmetrical.
        temp = ans[i-1];
        ans[i] = temp * (rowIndex - i + 1) / i;
        ans[rowIndex-i] = ans[i];
    }
    return ans;
    }
};