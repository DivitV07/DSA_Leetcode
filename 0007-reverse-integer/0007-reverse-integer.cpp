class Solution {
public:
    int reverse(int num) {
        long long x = num;
        long long revnum=0;
        int sign = 1;
        if (x < 0) {
            sign = -1;
            x = abs(x);
        }
        while(x>0){
            int lastdigit=x%10;
            if (revnum > INT_MAX/10 || revnum == INT_MAX/10 && lastdigit>7 ) return 0;
            revnum=(revnum*10)+lastdigit;
            x=x/10;
        }
        return revnum*sign;
    }
};