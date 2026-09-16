

class Solution {
  public:
    int kthDigit(int a, int b, int k) {
        // calculate a^b
        long long int x = pow(a, b);
        string s = to_string(x);
        return s[s.size() - k] - '0';
    }
};