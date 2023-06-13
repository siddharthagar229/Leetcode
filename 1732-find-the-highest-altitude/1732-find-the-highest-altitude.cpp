class Solution {
public:
    int largestAltitude(vector<int>& gain) {
          int n = gain.size();
        vector<int> altitudes(n+1);
        altitudes[0] = 0;

        for(int i = 1; i < n + 1; i++){
            altitudes[i] = gain[i-1] + altitudes[i-1];
        }

        return *max_element(altitudes.begin(), altitudes.end());
    }
};