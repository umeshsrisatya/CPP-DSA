class Solution {
public:
    int reverse(int x) {
        // bruteForce
        long temp = 0;
        while(x){
            int digit = x % 10;
            if((temp*10+digit) >= INT_MAX || (temp*10+digit) <= -INT_MAX){
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