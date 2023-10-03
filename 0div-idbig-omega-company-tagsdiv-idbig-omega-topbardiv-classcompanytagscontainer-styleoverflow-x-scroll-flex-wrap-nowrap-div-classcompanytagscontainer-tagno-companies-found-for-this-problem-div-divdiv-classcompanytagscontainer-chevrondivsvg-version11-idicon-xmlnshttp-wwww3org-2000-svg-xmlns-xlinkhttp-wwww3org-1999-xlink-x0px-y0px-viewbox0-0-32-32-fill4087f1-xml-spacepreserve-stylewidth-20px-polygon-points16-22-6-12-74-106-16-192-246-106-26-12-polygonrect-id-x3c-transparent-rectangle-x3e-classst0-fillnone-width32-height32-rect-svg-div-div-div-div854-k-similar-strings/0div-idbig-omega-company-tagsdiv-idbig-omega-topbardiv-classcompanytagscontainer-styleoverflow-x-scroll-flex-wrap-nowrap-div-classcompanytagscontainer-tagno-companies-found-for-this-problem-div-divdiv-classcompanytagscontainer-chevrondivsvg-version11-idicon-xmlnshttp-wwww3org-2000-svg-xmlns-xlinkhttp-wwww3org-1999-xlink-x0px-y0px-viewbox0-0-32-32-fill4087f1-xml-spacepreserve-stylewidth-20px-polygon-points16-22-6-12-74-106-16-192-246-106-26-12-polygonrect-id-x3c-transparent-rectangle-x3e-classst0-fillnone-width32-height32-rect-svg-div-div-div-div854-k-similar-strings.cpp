class Solution {
public:
    
    vector<string> nextWords(string word, string& s2, int i){
        // we have to prune the unnecessary branches in the BFS tree
        int n = word.size();
        vector<string> result;
        
        // skip the characters that are equal
        while(word[i] == s2[i]){
            i++;
        }
        
        // perform swap with the characters that are equal to s2[i]
        for(int j=i+1; j<n; j++){
            if(word[j] == s2[i]){
                swap(word[i], word[j]);
                result.push_back(word);
                swap(word[i], word[j]);
            }
        }
        
        return result;
    }
    
    int kSimilarity(string s1, string s2) {
        // typical BFS code
        queue<string> queue;
        unordered_set<string> visited;
        
        queue.push(s1);
        visited.insert(s1);
        
        int count = 0;
        
        while(not queue.empty()){
            int size = queue.size();
            
            while(size--){
                string currWord = queue.front();
                queue.pop();
                
                if(currWord == s2){
                    return count;
                }
                
                for(string nextWord : nextWords(currWord, s2, count)){
                    if(not visited.count(nextWord)){
                        queue.push(nextWord);
                        visited.insert(nextWord);
                    }
                }
            }
            
            count++;
        }
        
        return 1;
    }
};