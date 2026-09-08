class Solution {
public:
    int countCommas(int n) {
        string s = to_string(n);
        int digits = 0;
        for(char ch : s){
            digits++;
        }
        if(digits<4){
            return 0;
        }
        return n-999;
    }
};