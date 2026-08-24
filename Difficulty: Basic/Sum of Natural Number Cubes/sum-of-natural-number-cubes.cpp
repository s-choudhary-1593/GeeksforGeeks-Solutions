//Back-end complete function Template for C++

class Solution {
  public:
    // Function to calculate the sum of series using formula.
    int sumOfSeries(int n) {
        // Using the formula for sum of squares of natural numbers.
        int ans = (n * n * (n + 1) * (n + 1)) / 4;
        return ans;
    }
};