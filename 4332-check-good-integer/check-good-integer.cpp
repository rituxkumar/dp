class Solution {
public:
    bool checkGoodInteger(int n) {
        int digitSum = 0;
        int squareDigitSum = 0;

        while (n > 0) {
            int digit = n % 10;
            digitSum += digit;
            squareDigitSum += digit * digit;

            n /= 10;
        }

        return (squareDigitSum - digitSum >= 50);
    }
};