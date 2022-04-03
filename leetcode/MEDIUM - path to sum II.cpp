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
    vector<vector<int>> ans;
    void driver(TreeNode *root,int target,int sum,vector<int> helper) {
        helper.push_back(root->val);
        if(root->left==NULL && root->right==NULL) {
            if(sum+root->val==target)
            ans.push_back(helper);
            return;
        }
        if(root->left!=NULL)
        driver(root->left,target,sum+root->val,helper);
        if(root->right!=NULL)
        driver(root->right,target,sum+root->val,helper);

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        if(root== NULL) {
            return ans;
        }
        vector<int> helper;
        driver(root,targetSum,0,helper);


        return ans;
    }
};
