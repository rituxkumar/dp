class Solution {
public:
    int subarraysDivByK(vector<int>& nums, int k) {
        int n = nums.size();
        // Test PR #1
        // vector<int> prefixSum(n + 1, 0);
        // for (int i = 0; i < n; i++) {
        //     prefixSum[i + 1] = prefixSum[i] + nums[i];
        // }
        // int result = 0;
        // for (int i = 0; i < n; i++) {
        //     for (int j = i; j < n; j++) {
        //         int sum = prefixSum[j + 1] - prefixSum[i];

        //         if (sum % k == 0) {
        //             result++;
        //         }
        //     }
        // }
        // return result;

        unordered_map<int, int> mp;
        mp[0] = 1;

        int prefixSum = 0;
        int result = 0;

        for (int num : nums) {
            prefixSum += num;
            int rem = prefixSum % k;

            if (rem < 0) {
                rem += k;
            }

            if (mp.find(rem) != mp.end()) {
                result += mp[rem];
            }
            mp[rem]++;
        }

        return result;
    }
};
