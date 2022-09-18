class Solution {
public:
    int rangeBitwiseAnd(int left, int right) {
        long res = left;
        for(long i=left; i<=right ; i++){
            res = res & i;
            if(res == 0)  break;
        }
        return res;
    }
};