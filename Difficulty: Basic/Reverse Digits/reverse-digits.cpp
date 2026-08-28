// Function to reverse the digits of a given number
class Solution {
  public:
    // Function to reverse the digits of a given number
    int reverseDigits(int n) {
        int rev_n = 0;
        // Iteration to reverse the digits
        while (n > 0) {
            rev_n = rev_n * 10 + n % 10;
            n = n / 10;
        }
        // Returning the reversed number
        return rev_n;
    }
};