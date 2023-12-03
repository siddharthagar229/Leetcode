class Solution {
public:
    int minimumAddedCoins(vector<int>& coins, int target) {
        
         // Sort the coins in ascending order
        sort(coins.begin(), coins.end());

        int maxi = 0; // Variable to track the maximum reachable value
        int cnt = 0; // Variable to count the number of coins added

        for (int coin : coins) {
            // While the maximum reachable value is less than the target and
            // the next coin's value is more than 1 greater than the maximum reachable value
            while (maxi < target && maxi + 1 < coin) {
                // Update the maximum reachable value by adding (maxi + 1) to it
                maxi += maxi + 1;
                cnt++; // Increment the count of added coins
            }

            // If the maximum reachable value is equal to or greater than the target, exit the loop
            if (maxi >= target) {
                break;
            }

            // Update the maximum reachable value by adding the current coin value
            maxi += coin;
        }

        // After iterating through the coins, add coins until the maximum reachable value reaches the target
        while (maxi < target) {
            maxi += maxi + 1;
            cnt++; // Increment the count of added coins
        }

        return cnt; // Return the total count of added coins
        
    }
};