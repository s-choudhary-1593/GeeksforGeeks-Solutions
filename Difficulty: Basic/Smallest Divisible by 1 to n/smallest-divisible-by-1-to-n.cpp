//Back-end complete function template for C++

class Solution {
  public:
    long long getSmallestDivNum(long long n) {
        long long ans = 1; // initialize ans as 1

        // iterating from 1 to n and calculating least common multiple(LCM)
        // of ans and current number i using the formula ans = (ans * i)/(__gcd(ans,
        // i)).
        for (long long i = 1; i <= n; i++)
            ans = (ans * i) / (__gcd(ans, i));

        // returning the final ans which is the smallest number divisible by all numbers
        // from 1 to n.
        return ans;
    }
};