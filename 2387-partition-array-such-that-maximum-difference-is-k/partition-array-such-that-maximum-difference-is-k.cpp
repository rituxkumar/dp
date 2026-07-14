class Solution {
public:
    int partitionArray(vector<int>& nums, int k) {
        sort(nums.begin(), nums.end());
        int groups = 1;
        int start = nums[0];

        for (int i = 0; i < nums.size(); i++) {
            if (nums[i] - start > k) {
                groups++;
                start = nums[i];
            }
        }
        return groups;
    }
};