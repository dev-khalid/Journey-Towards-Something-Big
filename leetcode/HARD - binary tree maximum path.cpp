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
    int mx = -1e9;
    int helper(TreeNode * root) {
        if(root==NULL) {
            return 0;
        }
        int l,r;
        l = max(0,helper(root->left));
        r = max(0,helper(root->right));
        mx = max(l+r+root->val,mx);
        return root->val + max(l,r);
    }
    int maxPathSum(TreeNode* root) {
        helper(root);
        return mx;
    }
};
