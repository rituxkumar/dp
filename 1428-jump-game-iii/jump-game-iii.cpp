class Solution {
public:
    int n;
    bool solve(vector<int>& arr, int i) {
        if (i < 0 || i >= n || arr[i] < 0 ) {
            return false;
        }
        if (arr[i] == 0) {
            return true;
        }
        int jump = arr[i];
        arr[i] *= -1;

        int a = solve(arr, i - jump);
        int b = solve(arr, i + jump);

        return a || b;
    }
    bool canReach(vector<int>& arr, int start) {
        n = arr.size();

        return solve(arr, start);
    }
};