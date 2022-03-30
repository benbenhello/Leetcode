class Solution {
public:
    int mySqrt(int x) {
        int result = 1;
        while(pow(result,2) <= x){
            result++;
        }
        return result-1;
    }
};