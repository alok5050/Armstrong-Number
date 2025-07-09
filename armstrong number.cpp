class Solution {
  public:
    bool armstrongNumber(int n) {
        
        int original = n;
        int sum = 0;
        int digits = 0;
        int temp = n;
       
        while (temp > 0) {
            digits++;
            temp /= 10;
        }

        temp = n;

        while (temp > 0) {
            int digit = temp % 10;
            int power = 1;
            for (int i = 0; i < digits; i++) {
                power *= digit;
            }
            sum += power;
            temp /= 10;
        }

        return sum == original;
        
    }
};
