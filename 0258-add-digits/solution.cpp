class Solution {
public:
    int addDigits(int num) {
        while (num > 9) {
             int r = 0;
            while (num > 0) {
                int y = num % 10;
                r = r + y;
                num = num / 10;
            }
            num = r;
        }
        return num;
    }
};
