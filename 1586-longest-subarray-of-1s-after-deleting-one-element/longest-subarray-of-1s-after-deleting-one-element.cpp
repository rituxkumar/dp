class Solution {
public:
    int longestSubarray(vector<int>& nums) {
        int n = nums.size();
        int zeroCount = 0;
        int maxLength = 0;
        int i = 0;

        for (int j = 0; j < n; j++) {
            if (nums[j] == 0) {
                zeroCount++;
            }
            while (zeroCount > 1) {
                if (nums[i] == 0) {
                    zeroCount--;
                }
                i++;
            }
            maxLength = max(maxLength, j - i);
        }
        return maxLength;
    }
};