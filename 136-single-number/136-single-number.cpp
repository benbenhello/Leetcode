class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int result;
        std::sort(nums.begin(),nums.end());
        for(int i=0 ; i<nums.size() ; i+=2){
            if(i==nums.size()-1){
                result = nums[i];
                break;
            }
            if(nums[i] != nums[i+1] ){
                result = nums[i];
                break;
            }
        }
        return result;
    }
};