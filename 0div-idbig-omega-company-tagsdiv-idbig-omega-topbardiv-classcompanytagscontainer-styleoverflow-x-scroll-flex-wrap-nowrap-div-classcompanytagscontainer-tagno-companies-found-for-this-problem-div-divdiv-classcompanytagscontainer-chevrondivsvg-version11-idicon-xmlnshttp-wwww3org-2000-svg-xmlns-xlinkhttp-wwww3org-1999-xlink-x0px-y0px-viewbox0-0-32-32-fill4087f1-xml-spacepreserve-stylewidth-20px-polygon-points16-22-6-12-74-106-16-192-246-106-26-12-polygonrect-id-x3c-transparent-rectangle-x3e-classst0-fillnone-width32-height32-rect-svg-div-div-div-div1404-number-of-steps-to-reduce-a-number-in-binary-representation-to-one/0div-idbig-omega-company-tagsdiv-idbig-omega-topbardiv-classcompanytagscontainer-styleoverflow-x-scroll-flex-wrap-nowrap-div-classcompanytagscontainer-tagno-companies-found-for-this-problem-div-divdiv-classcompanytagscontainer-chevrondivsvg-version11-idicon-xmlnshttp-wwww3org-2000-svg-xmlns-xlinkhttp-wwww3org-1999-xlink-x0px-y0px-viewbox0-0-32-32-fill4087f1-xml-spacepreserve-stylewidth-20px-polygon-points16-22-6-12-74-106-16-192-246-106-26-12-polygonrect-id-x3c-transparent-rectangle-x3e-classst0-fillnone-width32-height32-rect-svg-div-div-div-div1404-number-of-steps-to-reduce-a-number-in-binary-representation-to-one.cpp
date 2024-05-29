class Solution {
public:
    int numSteps(string s) {
        
        int n = s.length(); // Length of the binary string
        int num = 0; // Carry indicator
        int i = n - 1; // Start from the last character
        int count = 0; // Steps counter

        while (i > 0) {
            if (s[i] == '1') {
                if (num == 0) {
                    count += 2; // Add and divide
                    num++; // Set carry
                } else {
                    count++;
                }
            } else { // s[i] == '0'
                count++;
                if (num == 1) {
                    count++; // Handle carry
                }
            }
            i--; // Move to the previous bit
        }

        if (num == 1) {
            count++; // Final carry handling
        }

        return count;
        
    }
};