
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
    void preorder(TreeNode * root,int cnt) {
        if(root==NULL) {
            mx = max(mx,cnt);
            return;
        }
        cnt++;
        preorder(root->left,cnt);
        preorder(root->right,cnt);
    }
    int maxDepth(TreeNode* root) {
        preorder(root,0);
        return mx;
    }
};
