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
    int diameter=0;
    int dfs(TreeNode* root) {
        if(!root){return -1;}
        int left=dfs(root->left);
        int right=dfs(root->right);
        diameter = max(diameter,left + right + 2);
        return 1+max(left, right);
        
    }
    int diameterOfBinaryTree(TreeNode* root) {
        int temp = dfs(root);
        return diameter;
    }
};
