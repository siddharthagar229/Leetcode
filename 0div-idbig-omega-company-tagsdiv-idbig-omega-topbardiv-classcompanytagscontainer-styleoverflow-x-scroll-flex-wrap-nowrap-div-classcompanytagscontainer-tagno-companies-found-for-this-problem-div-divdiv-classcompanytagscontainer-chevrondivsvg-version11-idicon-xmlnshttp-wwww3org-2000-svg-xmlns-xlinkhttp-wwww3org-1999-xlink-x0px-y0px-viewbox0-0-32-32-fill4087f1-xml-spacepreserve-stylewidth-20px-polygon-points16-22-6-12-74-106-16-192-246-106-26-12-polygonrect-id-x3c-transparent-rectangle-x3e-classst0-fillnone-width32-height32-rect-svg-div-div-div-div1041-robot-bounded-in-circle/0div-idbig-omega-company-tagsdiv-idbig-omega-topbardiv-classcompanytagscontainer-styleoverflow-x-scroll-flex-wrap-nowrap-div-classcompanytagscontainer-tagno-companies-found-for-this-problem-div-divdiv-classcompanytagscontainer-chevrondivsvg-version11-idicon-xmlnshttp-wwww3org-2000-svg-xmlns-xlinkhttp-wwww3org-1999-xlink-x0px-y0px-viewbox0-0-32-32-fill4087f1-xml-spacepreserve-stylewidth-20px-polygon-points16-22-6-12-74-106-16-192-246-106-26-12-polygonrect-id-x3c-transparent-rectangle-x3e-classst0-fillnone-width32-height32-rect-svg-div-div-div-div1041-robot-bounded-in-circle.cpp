class Solution {
public:
    bool isRobotBounded(string A) {
        
        A=A+A+A+A;
       int n=A.size();
       int no_moves[]={0,0,0,0};
       // top left down right
       int d=0;// to detrmine the which direction am i going 
       
       for(int i=0;i<n;i++)
       {
           if(A[i] == 'G')no_moves[d]++;
           else if(A[i] == 'L')d++;
           else {
               d+=4;
               d--;
           }
           d%=4;
       }
       return (no_moves[0] == no_moves[2] && no_moves[1] == no_moves[3]);
        
    }
};