/*
 * @lc app=leetcode.cn id=98 lang=cpp
 *
 * [98] 验证二叉搜索树
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    bool is_val(TreeNode* root, TreeNode* min, TreeNode* max) {
        if (root == nullptr) return true;
        if ((min && root->val <= min->val) || (max && root->val >= max->val)) return false;
        return is_val(root->left, min, root) && is_val(root->right, root, max);
    }
    bool isValidBST(TreeNode* root) {
        return is_val(root, nullptr, nullptr);
    }
};
// @lc code=end

