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
       bool solve(TreeNode *root,int &ans){
        if(root==NULL)
           return true;
        if(root->val != ans)
          return false;
        return solve(root->left,ans) && solve(root->right,ans);     
    }
    bool isUnivalTree(TreeNode* root) {
        if(root==NULL) return true;
        int ans=root->val;
        return solve(root,ans);
    }
};