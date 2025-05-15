class Solution {
public:
    bool isPalindrome(int x) {
        int orignal =x;
        int reversed =0;
        
        while(x>0){
            int digit = (x%10);
            x=x/10;
            reversed = (reversed*10)+digit;
            if((reversed > INT_MAX/10)||(reversed < INT_MIN/10)){
                return orignal == reversed ? true : false;
            }
            
        }
        return orignal == reversed ? true : false;
        
    }
};