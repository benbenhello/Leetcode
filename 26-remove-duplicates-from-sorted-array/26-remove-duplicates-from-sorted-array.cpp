class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int result;
        for(int i=1 ; i<nums.size() ; i++){
            if(nums[i] != nums[i-1]){
                continue;
            }
            if(nums[i] == nums[i-1]){
                nums[i-1] = 1000;
            }
        }
        std::sort(nums.begin(),nums.end());
        for(int i=0 ; i<nums.size() ; i++){
            // cout<<nums[i]<<endl;
            if(nums[i] == 1000){
                result = i;
                break;
            }
        }
        return result;
    }
};