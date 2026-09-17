class Solution {
  public:
    vector<int> gfSeries(int n) {
        vector<int> series(n);

        // First two terms of the series
        if (n >= 1)
            series[0] = 0;
        if (n >= 2)
            series[1] = 1;

        // Generate remaining terms using:
        // Tn = (Tn-2)^2 - Tn-1
        for (int i = 2; i < n; i++) {
            series[i] = series[i - 2] * series[i - 2] - series[i - 1];
        }

        return series;
    }
};