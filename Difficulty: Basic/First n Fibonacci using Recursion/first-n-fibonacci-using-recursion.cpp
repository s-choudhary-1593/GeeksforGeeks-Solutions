class Solution {
  public:
    int fib(int n, vector<int>& dp) {

        // Base cases
        if (n <= 1)
            return n;

        // Return already calculated value
        if (dp[n] != -1)
            return dp[n];

        // Calculate and store the Fibonacci number
        return dp[n] = fib(n - 1, dp) + fib(n - 2, dp);
    }

    vector<int> fibonacciNumbers(int n) {
        vector<int> dp(n, -1);
        vector<int> res;

        // Calculate each Fibonacci number
        for (int i = 0; i < n; i++) {
            res.push_back(fib(i, dp));
        }

        return res;
    }
};