class Solution {
  public:
    long long nPr(int n, int r) {
        if (r > n)
            return 0;

        long long ans = 1;

        // Compute n × (n-1) × ... × (n-r+1)
        for (int i = 0; i < r; i++)
            ans *= (n - i);

        return ans;
    }
};