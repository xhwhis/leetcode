/*
 * @lc app=leetcode.cn id=53 lang=cpp
 *
 * [53] 最大子序和
 */

// @lc code=start
class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int a = nums[0], b, res = nums[0];
        for (int i = 1; i < nums.size(); i++) {
            b = max(nums[i], nums[i] + a);
            res = max(res, b);
            a = b;
        }
        return res;
    }
};
// @lc code=end

