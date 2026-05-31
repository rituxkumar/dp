class Solution {
public:
    int digitFrequencyScore(int n) {
        unordered_map<int, int> mp;
        string s = to_string(n);

        for (auto it : s) {
            mp[it-'0']++;
        }

        int result = 0;
        for (auto it : mp) {
            int a = it.first;
            int b = it.second;

            int temp = a * b;
            result += temp;
        }

        return result;
    }
};