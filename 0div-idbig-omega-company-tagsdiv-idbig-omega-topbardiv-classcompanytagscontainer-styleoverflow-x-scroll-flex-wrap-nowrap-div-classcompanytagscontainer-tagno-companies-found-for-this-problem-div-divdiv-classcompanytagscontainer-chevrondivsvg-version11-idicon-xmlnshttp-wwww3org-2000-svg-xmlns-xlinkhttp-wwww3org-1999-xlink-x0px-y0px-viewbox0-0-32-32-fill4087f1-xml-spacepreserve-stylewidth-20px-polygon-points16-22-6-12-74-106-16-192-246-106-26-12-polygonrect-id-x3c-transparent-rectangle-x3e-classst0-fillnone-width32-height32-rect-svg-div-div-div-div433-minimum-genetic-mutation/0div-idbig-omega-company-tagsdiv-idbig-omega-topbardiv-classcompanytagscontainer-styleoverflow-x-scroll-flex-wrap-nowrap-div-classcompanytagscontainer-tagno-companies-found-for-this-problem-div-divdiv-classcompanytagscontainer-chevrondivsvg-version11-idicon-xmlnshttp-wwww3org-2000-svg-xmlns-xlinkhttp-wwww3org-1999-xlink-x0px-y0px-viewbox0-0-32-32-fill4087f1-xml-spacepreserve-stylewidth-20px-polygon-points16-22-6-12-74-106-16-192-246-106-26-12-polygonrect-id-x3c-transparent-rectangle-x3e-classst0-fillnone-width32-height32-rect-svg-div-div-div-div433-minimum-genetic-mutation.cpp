class Solution {
public:
    int minMutation(string startWord, string targetWord, vector<string>& wordList) {
        
//          if(start == end)
//             return 0;
//         else if(bank.size() == 0)
//             return -1;
//         unordered_set<string> st(bank.begin(), bank.end());
//         if(st.count(end) == 0)
//             return -1;
//         int count = 1;
//         vector<char> mut_opt = {'A', 'C', 'G', 'T'};
//         queue<string> q;
//         q.push(start);
//         while(!q.empty())
//         {
//             int n = q.size();
//             for(int j = 0 ; j < n; j++)
//             {
//                 string s = q.front();
//                 q.pop();
//                 for(int i = 0 ; i < s.size(); i++)
//                 {
//                     char org = s[i];
                  
//                     for(int k = 0 ; k < mut_opt.size(); k++)
//                     {
                        
//                         if(org != mut_opt[k])
//                             s[i] = mut_opt[k];
                      
//                         if(s == end)
//                             return count;
                      
//                         if(st.count(s) > 0)
//                         {
                           
//                             q.push(s);
//                             st.erase(s);
//                         }
//                     }
//                     s[i] = org;
//                 }
//             }
//             count++;
//         }
//         return -1;
        
        
        queue<pair<string, int>> q;
        vector<char> v={'A', 'C', 'G', 'T'};

        // BFS traversal with pushing values in queue 
        // when after a transformation, a word is found in wordList.
        q.push({startWord, 1});

        // Push all values of wordList into a set
        // to make deletion from it easier and in less time complexity.
        unordered_set<string> st(wordList.begin(), wordList.end());
        st.erase(startWord);
        while (!q.empty())
        {
            string word = q.front().first;
            int steps = q.front().second;
            q.pop();

            // we return the steps as soon as
            // the first occurence of targetWord is found.
            if (word == targetWord)
                return steps-1;

            for (int i = 0; i < word.size(); i++)
            {
                // Now, replace each character of ‘word’ with char
                // from a-z then check if ‘word’ exists in wordList.
                char original = word[i];
                for (auto ch : v)
                {
                    word[i] = ch;
                    // check if it exists in the set and push it in the queue.
                    if (st.find(word) != st.end())
                    {
                        st.erase(word);
                        q.push({word, steps + 1});
                    }
                }
                word[i] = original;
            }
        }
        // If there is no transformation sequence possible
        return -1;
        
        
        
    }
};