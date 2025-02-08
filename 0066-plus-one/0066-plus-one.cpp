class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int idx = digits.size()-1;
        int carry = 1;
        while(idx>=0){
            if(digits[idx]==9 && carry==1){
                // carry=1;
                digits[idx] = 0;
                
            }
            else if(carry==1){
                digits[idx] += 1;
                carry = 0;
            }
            idx--;
        }
        if(carry == 1) digits.insert(digits.begin(),1);
        return digits;
    }
};