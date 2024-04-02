class Solution {
public:
    bool isIsomorphic(string s, string t) {
        
        map<char, int> m1, m2;

	for (int i = 0; i < s.length(); i++)
	{
		int index1 = m1.find(s[i]) != m1.end() ? m1[s[i]] : (m1[s[i]] = i);
		int index2 = m2.find(t[i]) != m2.end() ? m2[t[i]] : (m2[t[i]] = i);

		if (index1 != index2)
		{
			return false;
		}
	}
	return true;
        
    }
};