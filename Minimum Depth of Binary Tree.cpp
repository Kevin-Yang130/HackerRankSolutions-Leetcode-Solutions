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
    int minDepth(TreeNode* root) {
        queue<TreeNode*>q;
        q.push(root);
        if(root == nullptr) {return 0;}
        int level=1;
        int length=0;
        TreeNode temp;
        TreeNode* tempptr; 
        while(!q.empty()) {
            length=q.size();
            for(int i=0;i<length;i++) {
                tempptr=q.front();
                q.pop();
                if(tempptr->right) {q.push(tempptr->right);}
                if(tempptr->left) {q.push(tempptr->left);}
                if(!(tempptr->left) && !(tempptr->right)) { 
                    return level;
                }
            }
            level++;
        }
        return level;
    }
};
