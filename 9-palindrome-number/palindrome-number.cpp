class Solution {
public:
    bool isPalindrome(int x) {
        if (x < 0 || (x % 10 == 0 && x != 0)) {
            return false;
        }

        int reversedHalf = 0;
        while (x > reversedHalf) {
            reversedHalf = reversedHalf * 10 + x % 10;
            x /= 10;
        }

        // When length is odd, we can get rid of the middle digit by reversedHalf / 10.
        // For example, for 12321: x = 12, reversedHalf = 123, so x == reversedHalf / 10 (12 == 12).
        return x == reversedHalf || x == reversedHalf / 10;
        
    }
};