//Back-end complete function Template for C++

class Solution {
  public:
    bool isDigitSumPalindrome(int n) {
        int newNum = 0;
        // Finding out the digit sum
        while (n) {
            newNum += n % 10;
            n /= 10;
        }
        int reversedNewNum = 0;
        n = newNum;
        // Reversing n and storing it in reversedNewNum
        while (n) {
            reversedNewNum = (reversedNewNum * 10) + (n % 10);
            n /= 10;
        }
        if (reversedNewNum == newNum)
            return true;

        return false;
    }
};