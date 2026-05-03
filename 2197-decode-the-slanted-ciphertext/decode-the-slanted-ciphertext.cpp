class Solution {
public:
    string decodeCiphertext(string encodedText, int rows) {
        int l = encodedText.size();
        int colums = l / rows;

        string originalText;

        for (int col = 0; col < colums; col++) {
            for (int j = col; j < l; j += (colums + 1)) {
                originalText += encodedText[j];
            }
        }
        while (!originalText.empty() && originalText.back() == ' ') {
            originalText.pop_back();
        }
        return originalText;
    }
};