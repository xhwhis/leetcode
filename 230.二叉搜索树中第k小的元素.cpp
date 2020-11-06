/*
 * @lc app=leetcode.cn id=230 lang=cpp
 *
 * [230] 二叉搜索树中第K小的元素
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
    int ans = 0, rank = 0;
    void traverse(TreeNode* root, int k) {
        if (root == nullptr) return ;
        traverse(root->left, k);
        rank++;
        if (k == rank) {
            ans = root->val;
            return ;
        }
        traverse(root->right, k);
    }
    int kthSmallest(TreeNode* root, int k) {
        traverse(root, k);
        return ans;
    }
};
// @lc code=end

