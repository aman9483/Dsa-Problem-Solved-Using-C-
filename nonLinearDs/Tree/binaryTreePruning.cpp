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
    
    TreeNode* pruneTree(TreeNode* a) {
        if(!a) return nullptr;

        a->left=pruneTree(a->left);
        a->right=pruneTree(a->right);

        if(!a->left && !a->right && a->val==0) return nullptr;
        return a;
    }
};