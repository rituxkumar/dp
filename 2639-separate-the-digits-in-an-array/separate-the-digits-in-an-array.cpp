class Solution {
public:
    vector<int> separateDigits(vector<int>& nums) {
        vector<int> result;
        for (auto it : nums) {
            string s = to_string(it);

            for (char ch : s) {
                result.push_back(ch - '0');
            }
        }
        return result;
    }
};