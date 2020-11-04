/*
 * @lc app=leetcode.cn id=1022 lang=cpp
 *
 * [1022] 从根到叶的二进制数之和
 */

// @lc code=start
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
    int sum = 0;
    void dfs(TreeNode* node, int num) {
        if (node == nullptr) return ;
        num = (num << 1) + node->val;
        if (node->left == nullptr && node->right == nullptr) {
            sum += num;
            return ;
        }
        dfs(node->left, num);
        dfs(node->right, num);
    }
    int sumRootToLeaf(TreeNode* root) {
        dfs(root, 0);
        return sum;
    }
};
// @lc code=end

