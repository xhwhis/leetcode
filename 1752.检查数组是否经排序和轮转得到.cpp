/*
 * @lc app=leetcode.cn id=1752 lang=cpp
 *
 * [1752] 检查数组是否经排序和轮转得到
 */

// @lc code=start
class Solution {
public:
    bool check(vector<int>& nums) {
        int n = nums.size();
        bool flag = nums[0] < nums[n - 1];
        for (int i = 1; i < n; i++) {
            if (nums[i] < nums[i - 1]) {
                if (flag) return false;
                flag = true;
            }
        }
        return true;
    }
};
// @lc code=end

