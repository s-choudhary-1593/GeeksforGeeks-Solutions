class Solution {
  public:
    int sumOfAP(int n, int a, int d) {
        // Calculate the sum of the arithmetic progression using the formula
        int sum = (n * (2 * a + (n - 1) * d)) / 2;

        // Return the sum
        return sum;
    }
};