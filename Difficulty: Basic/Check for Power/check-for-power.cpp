class Solution {
  public:
    bool isPower(int x, int y) {
        // Edge case: 1^k = 1 only
        if (x == 1)
            return y == 1;

        // Edge case: x^0 = 1
        if (y == 1)
            return true;

        // Compute logarithm
        double res = log(y) / log(x);

        // Compare with rounded value using a small
        // tolerance to avoid floating point errors
        return fabs(res - round(res)) < 1e-10;
    }
};