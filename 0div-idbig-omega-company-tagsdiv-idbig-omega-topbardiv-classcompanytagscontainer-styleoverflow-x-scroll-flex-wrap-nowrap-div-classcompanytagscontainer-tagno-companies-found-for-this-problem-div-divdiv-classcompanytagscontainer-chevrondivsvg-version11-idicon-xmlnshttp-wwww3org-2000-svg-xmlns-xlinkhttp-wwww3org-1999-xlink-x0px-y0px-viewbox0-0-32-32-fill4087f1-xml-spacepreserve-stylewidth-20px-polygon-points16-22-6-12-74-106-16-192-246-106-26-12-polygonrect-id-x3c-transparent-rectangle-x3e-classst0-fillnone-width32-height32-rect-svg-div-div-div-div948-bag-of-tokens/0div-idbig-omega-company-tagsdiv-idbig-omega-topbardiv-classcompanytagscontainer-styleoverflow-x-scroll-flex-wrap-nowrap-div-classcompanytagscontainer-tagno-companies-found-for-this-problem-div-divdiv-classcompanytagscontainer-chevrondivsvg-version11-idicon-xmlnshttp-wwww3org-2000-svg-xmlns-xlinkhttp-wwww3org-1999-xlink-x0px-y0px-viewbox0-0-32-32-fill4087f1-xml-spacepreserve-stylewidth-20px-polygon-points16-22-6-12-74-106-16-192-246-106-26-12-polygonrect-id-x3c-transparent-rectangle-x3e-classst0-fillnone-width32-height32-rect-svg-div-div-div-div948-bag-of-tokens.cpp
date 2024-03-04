class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int power) {
         sort(tokens.begin(), tokens.end());
        //i is the left pointer and j is the right pointer 
        //and score is the current score and maxScore is the maximum score
        int i = 0, j = tokens.size() - 1, score = 0, maxScore = 0; 
        while (i <= j) { 
          //while left pointer is less than or equal to right pointer
          if (power >= tokens[i]) { 
            //if power is greater than or equal to the value at left pointer
            power -= tokens[i++]; 
            //decrease power by the value at left pointer and increase left pointer by 1
            maxScore = max(maxScore, ++score); 
            //update the maximum score
          } 
          else if (score > 0) { 
            //if power is less than the value at left pointer and score is greater than 0
            power += tokens[j--]; 
            //increase power by the value at right pointer and decrease right pointer by 1
            score--; 
            //decrease score by 1
          } 
          else {
            break; 
            //if power is less than the value at left pointer and score is 0 then break
          }
        }
        return maxScore; 
    }
};