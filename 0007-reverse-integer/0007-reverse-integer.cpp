class Solution {
public:
    int reverse(int x) {
        int rev = 0;
        
        while (x != 0) {
            int pop = x % 10; // Extract the last digit
            x /= 10;          // Remove the last digit from x
            
            // Check for overflow BEFORE updating rev
            if (rev > INT_MAX / 10 || (rev == INT_MAX / 10 && pop > 7)) return 0;
            if (rev < INT_MIN / 10 || (rev == INT_MIN / 10 && pop < -8)) return 0;
            
            rev = rev * 10 + pop;
        }
        
        return rev;
    }
};