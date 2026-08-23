class Solution {
public:
    vector<int> lcmAndGcd(int A, int B) {
        int a = A, b = B;

        while (b != 0) {
            int temp = b;
            b = a % b;
            a = temp;
        }

        int gcd = a;
        int lcm = (A / gcd) * B;

        return {lcm, gcd};
    }
};