class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        int maxi=-1, mini=-1;
        vector<int> ans;
        vector<int> ele;

        int n=matrix.size();
        int m=matrix[0].size();

        // find minimum element from each row
        for(int i=0; i<n; i++)
        {
            mini=*min_element(matrix[i].begin(), matrix[i].end());
            ele.push_back(mini);
        }

        //find maximum element from each column
        for(int j=0; j<m; j++)
        {
            maxi=matrix[0][j];
            for(int i=1; i<n; i++){
                if(matrix[i][j]>maxi)
                maxi=matrix[i][j];
            }
            ele.push_back(maxi);
        }

        int s=ele.size();

        // sort the vector
        sort(ele.begin(), ele.end());

        // return the duplicate elements
        for(int i=0; i<s-1; i++)
        {
            if(ele[i]==ele[i+1])
            ans.push_back(ele[i]);
        }

        return ans;
    }
};