class Solution {
public:
    int matrixScore(vector<vector<int>>& matrix) {
        
          for(int i = 0 ; i<matrix.size() ; i++)
        {
            
            if(matrix[i][0] == 0)
            {
                for(int j = 0 ; j<matrix[i].size() ; j++)
              {
                matrix[i][j] = !matrix[i][j];
              }
            }
        }
        
        // Now From Column 1st Check How Many values are greater than 1 in each column
        // If It is less than row size than toggle that column
        
        for(int j = 1 ; j<matrix[0].size() ; j++)
        {
            int count = 0;
            
            for(int i = 0 ; i<matrix.size() ; i++)
            {
                if(matrix[i][j])
                    count++;
            }
            
            if(count*2 >= matrix.size())
                continue;
            
            else 
            {
                for(int i = 0 ; i<matrix.size() ; i++)
                 matrix[i][j] = !matrix[i][j];
            }
        }
        
        int ans = 0;
        // Store The result
        for(int i = 0 ; i<matrix.size() ; i++)
        {
            int power = 0;
            for(int j = matrix[0].size()-1 ; j>=0 ; j--)
            {
                // cout<<matrix[i][j]<<" ";
                ans+= matrix[i][j] * pow(2, power++);
            }
            // cout<<endl;
        }
        return ans;
        
    }
};