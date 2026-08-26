// This function calculates the number of perfect squares less than or equal to the
// given number N. It takes an integer N as input and returns an integer representing
// the count of perfect squares.
class Solution {
  public:
    int countSquares(int n) {
        // Calculate the square root of N-1 and store it in the variable ans.
        int ans = sqrt(n - 1);

        // Return the value of ans as the count of perfect squares.
        return ans;
    }
};