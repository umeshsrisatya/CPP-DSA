class Solution {
public:
    int reverse(int x) {
        // bruteForce
        long temp = 0;
        while(x){
            int digit = x % 10;
            if((temp*10+digit) >= 2147483647 || (temp*10+digit) <= -2147483647){
                return 0;
            }
            temp = temp * 10 + digit;
            x = x / 10;
        }
        return temp;
    }
};
// topics learned :-
// overflow 
// no need to take negative
// ,