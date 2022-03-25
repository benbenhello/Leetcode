/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    TreeNode* sortedArrayToBST(vector<int>& nums) {
        TreeNode *result;
        int l = 0;
        int r = nums.size()-1;
        result = re(l,r,nums);
        
        
        
        return result;
    }
    TreeNode* re(int l, int r, vector<int>& nums){
        int m = (l+r)/2;
        TreeNode* t = new TreeNode();
        t->val = nums[m];
        if(l<m){
            t->left = re(l,m-1,nums);  
        }
        if(m<r){
            t->right = re(m+1,r,nums);
        }
        return t;
    }
};