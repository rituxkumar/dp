class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> result;
        int n = nums.size();

        for (auto num : nums) {
            if (num < pivot) {
                result.push_back(num);
            }
        }

        for (auto num : nums) {
            if (num ==  pivot) {
                result.push_back(num);
            }
        }

        for (auto num : nums) {
            if (num > pivot) {
                result.push_back(num);
            }
        }

        return result;
    }
};