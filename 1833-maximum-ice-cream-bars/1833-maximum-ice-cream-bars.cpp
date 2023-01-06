class Solution {
public:
    int maxIceCream(vector<int>& costs, int coins) {
        sort(costs.begin(), costs.end());
	costs.push_back(numeric_limits<int>::max());
	int ct= 0;
	while (costs[ct] <= coins) {
		coins -= costs[ct++];
	}
	return ct;
    }
};