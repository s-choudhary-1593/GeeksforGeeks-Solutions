class Solution {
  public:
    int absolute(int n) {

        // If n is negative
        if (n < 0)

            // Convert it to positive
            return -1 * n;

        // If n is already positive
        else
            return n;
    }
};