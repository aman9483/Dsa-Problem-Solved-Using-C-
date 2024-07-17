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

    void f(TreeNode* root,int sum, int target, vector<int> sub, vector<vector<int>> &ans){
        if(root == NULL) return;
        if(root->left == NULL and root->right == NULL){
            sum+= root->val;
            sub.push_back(root->val);
            if(sum == target) ans.push_back(sub);
            return;
        }
        sub.push_back(root->val);
        f(root->left, sum + root->val, target, sub, ans);

        f(root->right, sum + root->val, target, sub, ans);

    }
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        vector<vector<int>> ans;
        vector<int> sub;
        int sum = 0;
        if(root == NULL) return ans;

        f(root, sum, targetSum, sub, ans);

        return ans;
    }
};
