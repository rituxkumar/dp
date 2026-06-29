class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {

        int total = 0;

        for (string p : patterns) {
            if (word.find(p) != string::npos)
                total++;
        }

        return total;
    }
};
