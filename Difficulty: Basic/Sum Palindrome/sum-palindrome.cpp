//Back-end complete function Template for C++
class Solution {
  public:
    // Function to reverse the digits of a number.
    int reversDigits(int num) {
        int rev_num = 0;
        while (num > 0) {
            rev_num = rev_num * 10 + num % 10;
            num = num / 10;
        }
        return rev_num;
    }

    /* Function to check whether the number is palindrome or not */
    bool isPalindrome(int num) { return (reversDigits(num) == num); }

    // Function to find palindrome by adding reverse of the number to itself.
    int isSumPalindrome(int n) {
        int count = 0;
        while (!isPalindrome(n) && count < 5) {
            int k = reversDigits(n);
            n += k;
            count++;
        }
        if (isPalindrome(n))
            return n;
        return -1;
    }
};