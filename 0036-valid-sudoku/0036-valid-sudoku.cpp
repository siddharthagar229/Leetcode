class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) 
{
	int n = board.size(), m = board[0].size();
        
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if( board[i][j] == '.' ) continue;
            char val = board[i][j];
            board[i][j] = '*';
            for(int k = 0; k<9; k++) 
            {
				if ( board[i][k] == val) return false;
                if ( board[k][j] == val) return false;
                if ( board[ 3*(i/3) + k/3 ][ 3*(j/3) + k%3 ] == val) return false;                    
			}
			board[i][j] = val;
		}
        
	}
        
	return true;
}
};