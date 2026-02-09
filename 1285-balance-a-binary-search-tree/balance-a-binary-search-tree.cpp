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
// inorder trvaresal se datat sorted array me mil jayega
void dfsinorder(TreeNode*root,vector <int>&nums){
    if(root==NULL)return;
    dfsinorder(root->left,nums);
    nums.push_back(root->val);
    dfsinorder(root->right,nums);
}
// nums hmare pass sorted order me hai mid find karke start se mid tak left me aur mid right tak right me
TreeNode* buildbst(int start,int end,vector<int>&nums){
    if(start>end)return NULL;
    int mid=start+(end-start)/2;
    TreeNode *root=new TreeNode(nums[mid]);
    root->left=buildbst(start,mid-1,nums);
    root->right=buildbst(mid+1,end,nums);
    return root;
}

    TreeNode* balanceBST(TreeNode* root) {
        vector<int>nums;
        dfsinorder(root,nums);
       return buildbst(0,nums.size()-1,nums);
    }
};