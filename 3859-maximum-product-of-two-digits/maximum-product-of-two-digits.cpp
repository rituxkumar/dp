class Solution {
public:
    int maxProduct(int n) {
        int largest = INT_MIN;
        int secondLargets = INT_MIN;
        
         while(n>0){
            int digit = n%10;
            if(digit >= largest ){
                secondLargets=largest;
                largest=digit;
            }else if(digit >secondLargets){
                secondLargets=digit;

            }
            n /= 10;
         }
         return largest*secondLargets;
    }
};