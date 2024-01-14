class Solution {
public:
    bool closeStrings(string word1, string word2) {
        
        
        if(word1.size() != word2.size()) return false; // check if the two words are of equal length
		vector<int> v1(26,0), v2(26,0); // initialise two vectors of size 26 with all entries as 0
		for(char ch: word1) v1[ch-'a']++; // count the number of each character in word1 and increment the corresponding index in v1
		for(char ch: word2) v2[ch-'a']++; // count the number of each character in word2 and increment the corresponding index in v2
		for(int i=0; i<26; i++){ // check if there is a character in word1 and not in word2 or vice versa
			if((v1[i] == 0 && v2[i] != 0) || (v1[i] != 0 && v2[i] == 0)) return false;
		}
		sort(v1.begin(), v1.end()); // sort the two vectors
		sort(v2.begin(), v2.end());
		return v1 == v2; // check if the two vectors are equal
        
        
    }
};