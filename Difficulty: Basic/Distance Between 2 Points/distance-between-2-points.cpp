class Solution {
  public:
    int distance(int x1, int y1, int x2, int y2) {
        int ans =
            round(sqrtl((x1 - x2) * (x1 - x2) * 1.0 + (y1 - y2) * (y1 - y2) * 1.0));
        return ans;
    }
};