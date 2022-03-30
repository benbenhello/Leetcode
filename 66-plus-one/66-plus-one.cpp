class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int end = digits.size()-1;
        while(1){
            if(digits[end] < 9){
                digits[end] += 1;
                break;
            }else{
                if(end == 0){
                    digits.push_back(0);
                    digits[end] = 1;
                    break;
                }else{
                    digits[end] = 0;
                    end--; 
                }
            }
        }
        return digits;
    }
};