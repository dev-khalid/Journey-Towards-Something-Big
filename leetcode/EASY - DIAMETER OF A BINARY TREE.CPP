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
    int mx = 0;
    int d(TreeNode *root) {
    if(root==NULL) {
            return 0;
        }
        int lh = d(root->left);
        int rh = d(root->right);
        mx = max(mx,lh+rh);
        return max(lh,rh)+1; }
    int diameterOfBinaryTree(TreeNode* root) {
        d(root);
        return mx;
    }
};
