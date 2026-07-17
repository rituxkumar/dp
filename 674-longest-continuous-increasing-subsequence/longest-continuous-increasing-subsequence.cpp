class Solution {
public:
    int findLengthOfLCIS(vector<int>& nums) {
        int n = nums.size();
        int curr = 1;
        int ans = 1;
        if(nums.empty()){
            return 0;
        }

        for (int i = 1; i < n; i++) {
            if (nums[i] > nums[i - 1]) {
                curr++;
            } else {
                curr = 1;
            }
            ans = max(curr, ans);
        }
        return ans;
    }
};