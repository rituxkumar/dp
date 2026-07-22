class Solution {
public:
    vector<int> numberGame(vector<int>& nums) {
        // min heap me sare elements ko push kar diye...
        priority_queue<int, vector<int>,greater<int>> pq;
        for (int num : nums) {
            pq.push(num);
        }

        // ab loop tab tak chalega jab tak heap khali na ho jaye.
        vector<int> ans;
        while (!pq.empty()) {
            int first = pq.top();
            pq.pop();

            int second = pq.top();
            pq.pop();

            ans.push_back(second);
            ans.push_back(first);
        }
        return ans;
    }
};