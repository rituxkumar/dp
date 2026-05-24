class Solution {
public:
    int minimumSwaps(vector<int>& nums) {
        int n = nums.size();
        int zero = 0;

        for (int num : nums) {
            if (num == 0) {
                zero++;
            }
        }
        int swap = 0;
        for (int i = n - zero; i < n; i++) {
            if (nums[i] != 0) {
                swap++;
            }
        }
        return swap;
    }
};