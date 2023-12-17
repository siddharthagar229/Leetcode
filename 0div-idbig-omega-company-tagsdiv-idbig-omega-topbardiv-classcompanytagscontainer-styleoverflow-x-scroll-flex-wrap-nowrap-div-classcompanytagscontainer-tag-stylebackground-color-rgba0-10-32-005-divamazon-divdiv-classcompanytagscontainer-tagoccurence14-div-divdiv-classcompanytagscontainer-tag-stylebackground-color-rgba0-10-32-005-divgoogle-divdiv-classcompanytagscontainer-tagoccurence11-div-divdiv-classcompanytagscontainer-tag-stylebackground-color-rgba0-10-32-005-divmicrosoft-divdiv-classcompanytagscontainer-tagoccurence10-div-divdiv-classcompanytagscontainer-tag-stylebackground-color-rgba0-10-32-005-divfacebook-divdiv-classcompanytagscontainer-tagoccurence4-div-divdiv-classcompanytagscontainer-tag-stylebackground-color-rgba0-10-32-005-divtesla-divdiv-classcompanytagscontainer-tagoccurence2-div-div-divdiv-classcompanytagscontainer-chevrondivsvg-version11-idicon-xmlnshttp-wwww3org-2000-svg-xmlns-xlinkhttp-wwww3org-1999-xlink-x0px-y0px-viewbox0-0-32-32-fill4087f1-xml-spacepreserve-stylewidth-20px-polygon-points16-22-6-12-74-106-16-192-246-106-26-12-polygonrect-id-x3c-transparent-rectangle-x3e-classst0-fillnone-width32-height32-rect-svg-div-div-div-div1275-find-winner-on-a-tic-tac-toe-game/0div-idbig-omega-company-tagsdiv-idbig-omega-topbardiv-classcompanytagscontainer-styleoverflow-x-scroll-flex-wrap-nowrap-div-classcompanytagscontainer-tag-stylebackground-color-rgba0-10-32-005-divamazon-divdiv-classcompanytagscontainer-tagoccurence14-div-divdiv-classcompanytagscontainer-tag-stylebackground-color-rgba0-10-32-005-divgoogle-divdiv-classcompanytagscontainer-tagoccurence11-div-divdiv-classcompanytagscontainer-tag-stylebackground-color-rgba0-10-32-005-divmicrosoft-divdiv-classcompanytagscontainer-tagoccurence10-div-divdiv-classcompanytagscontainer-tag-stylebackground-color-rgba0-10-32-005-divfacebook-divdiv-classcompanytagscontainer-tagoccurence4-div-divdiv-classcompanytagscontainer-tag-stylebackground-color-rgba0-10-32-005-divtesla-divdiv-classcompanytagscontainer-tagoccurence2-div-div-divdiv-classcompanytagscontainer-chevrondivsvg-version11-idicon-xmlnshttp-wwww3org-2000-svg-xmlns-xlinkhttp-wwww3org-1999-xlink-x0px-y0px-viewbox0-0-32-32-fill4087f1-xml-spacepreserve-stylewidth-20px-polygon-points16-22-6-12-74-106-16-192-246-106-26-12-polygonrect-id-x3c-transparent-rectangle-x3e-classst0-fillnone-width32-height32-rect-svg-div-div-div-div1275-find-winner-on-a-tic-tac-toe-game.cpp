class Solution 
{

  private:
  vector<vector<char>> grid = vector<vector<char>> (3, vector<char>(3, ' '));

  void fillGrid(vector<vector<int>>& moves)
  {
    for(int i = 0; i < moves.size(); i++)
    {
      grid[moves[i][0]][moves[i][1]] = ((i % 2 == 0)? 'X' : 'O');
    }
  }

  bool isThereAWinner(char ch)
  {  
    for(int i = 0; i < 3; i++)
    {
      if(grid[i][0] == ch && grid[i][1] == ch && grid[i][2] == ch)
      {
        return true;
      }
    }
  for(int i = 0; i < 3; i++)
  {
    if(grid[0][i] == ch && grid[1][i] == ch && grid[2][i] == ch)
    {
      return true;
    }
  }
    return ((grid[0][0] == ch && grid[1][1] == ch && grid[2][2] == ch) || 
            (grid[0][2] == ch && grid[1][1] == ch && grid[2][0] == ch));
  }

  public:
  
  string tictactoe(vector<vector<int>>& moves) 
  {
    fillGrid(moves);
    if(isThereAWinner('X'))
    {
      return "A";
    }
    else if(isThereAWinner('O'))
    {
      return "B";
    }
    return ((moves.size() == 9)? "Draw" : "Pending");
  }

};