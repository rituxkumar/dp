class Solution {
public:
    bool consecutiveSetBits(int n) {
        int count = 0;
        while (n > 1) {
            int lastBit = n & 1;
            int secondlastbit = (n >> 1) & 1;

            if (lastBit == 1 && secondlastbit == 1) {
                count++;
            }

            n = n >> 1;
        }
        return count == 1;
    }
};