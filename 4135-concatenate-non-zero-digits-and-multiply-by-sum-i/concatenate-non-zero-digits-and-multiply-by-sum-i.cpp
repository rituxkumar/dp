class Solution {
public:
    long long sumAndMultiply(int n) {
        int x = 0;
        int sum = 0;
        string s = to_string(n);

        for (char ch : s) {
            if (ch != '0') {
                int digit = ch - '0';
                x = x * 10 + digit;
                sum += digit;
            }
        }
        return 1LL*x * sum;
    }
};