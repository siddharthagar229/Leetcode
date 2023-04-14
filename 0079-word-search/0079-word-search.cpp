class Solution {
public:

 bool signal(vector<vector<char>>& board, string word,int i,int j,int curr){
    
    if(curr == word.length()) return true;
    if(i >= board.size() || j >= board[0].size() || i < 0 || j < 0 || board[i][j] != word[curr]) return false;
    // if(board[i][j] != word[curr]) return false;
    
    char temp = board[i][j];
    board[i][j] = '*';
    
    if(signal(board,word,i,j+1,curr+1) ||
      signal(board,word,i+1,j,curr+1) ||
      signal(board,word,i-1,j,curr+1)||
      signal(board,word,i,j-1,curr+1))
        
        return true;
     
     
    board[i][j] = temp; //backtracking condition
    return false;
}


bool exist(vector<vector<char>>& board, string word) {
 
    for(int i=0;i<board.size();i++){
        
        for(int j=0;j<board[0].size();j++){
            
            if(word[0] == board[i][j] &&  signal(board,word,i,j,0))
                 return true;
         }
        
    }
    
    return false;
 }
};