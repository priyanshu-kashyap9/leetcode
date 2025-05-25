class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int n = digits.size();
        for(int i = n - 1; i >= 0; i--) {
            if(digits[i] == 9) {
                digits[i] = 0;
            } else {
                digits[i]++;
                return digits;
            }
        }
        // If all digits were 9, we need to add a new digit at the beginning
        digits.insert(digits.begin(), 1);
        return digits;
    }
};
