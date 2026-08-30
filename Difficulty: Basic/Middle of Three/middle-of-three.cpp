// Backend complete function template for C++

class Solution {
  public:
    int middle(int a, int b, int c) {
        if (a < b)
            return (b < c) ? b : max(a, c);
        return (a < c) ? a : max(b, c);
    }
};