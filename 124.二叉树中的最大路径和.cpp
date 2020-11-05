/*
 * @lc app=leetcode.cn id=124 lang=cpp
 *
 * [124] 二叉树中的最大路径和
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
    int ans = INT_MIN;
    int maxGain(TreeNode* root) {
        if (root == nullptr) return 0;
        int leftGain = max(maxGain(root->left), 0), rightGain = max(maxGain(root->right), 0);
        ans = max(ans, root->val + leftGain + rightGain);
        return root->val + max(leftGain, rightGain);
    }
    int maxPathSum(TreeNode* root) {
        maxGain(root);
        return ans;
    }
};
// @lc code=end

