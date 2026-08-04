class Solution {
public:
    bool isPalindrome(int x) {
        if (x<0) return false;
        int temp = x;
        long long revnum = 0;
        while(x>0){
            int digit = x%10;
            revnum = revnum * 10 + digit;
            x=x/10;
        }
        if(temp==revnum){
            return true;
        }
        return false;
    }
};