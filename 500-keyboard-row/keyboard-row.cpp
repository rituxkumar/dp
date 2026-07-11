class Solution {
public:
    vector<string> findWords(vector<string>& words) {

        string row1 = "qwertyuiop";
        string row2 = "asdfghjkl";
        string row3 = "zxcvbnm";
        vector<string> ans;

        for (string& word : words) {
            string lower = word;
            for (char& ch : lower) {
                ch = tolower(ch);
            }
            bool ok = true;

            if (row1.find(lower[0]) != string::npos) {
                for (char ch : lower) {
                    if (row1.find(ch) == string::npos) {
                        ok = false;
                        break;
                    }
                }
            } else if (row2.find(lower[0]) != string::npos) {
                for (char ch : lower) {
                    if (row2.find(ch) == string::npos) {
                        ok = false;
                        break;
                    }
                }
            }else{
                for(char ch:lower){
                    if(row3.find(ch) == string::npos){
                        ok = false;
                        break;
                    }
                }
            }
            if(ok){
                ans.push_back(word);
            }
        }
        return ans;
    }
};