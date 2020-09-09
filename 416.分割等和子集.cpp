/*
 * @lc app=leetcode.cn id=416 lang=cpp
 *
 * [416] 分割等和子集
 */

// @lc code=start
class Solution {
public:
    bool canPartition(vector<int>& nums) {
        int n = nums.size(), sum = 0;
        for (int num : nums) sum += num;
        if (sum & 1) return false;
        sum /= 2;
        vector<bool> dp(sum + 1, false);
        dp[0] = true;
        for (int i = 0; i < n; i++) {
            for (int j = sum; j >= 0; j--) {
                if (j >= nums[i]) {
                    dp[j] = dp[j] || (dp[j - nums[i]]);
                }
            }
        }
        return dp[sum];
    }
};
// @lc code=end

