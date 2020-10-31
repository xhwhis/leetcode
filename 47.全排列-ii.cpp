/*
 * @lc app=leetcode.cn id=47 lang=cpp
 *
 * [47] 全排列 II
 */

// @lc code=start
class Solution {
public:
    vector<int> flags;
    vector<vector<int>> ans;
    void backtrack(vector<int>& nums, int depth, vector<int>& val) {
        if (depth >= nums.size()) {
            ans.push_back(val);
            return ;
        }
        for (int i = 0; i < nums.size(); i++) {
            if (flags[i] || (i > 0 && nums[i] == nums[i - 1] && !flags[i - 1])) continue;
            flags[i]++;
            val.push_back(nums[i]);
            backtrack(nums, depth + 1, val);
            flags[i]--;
            val.pop_back();
        }
    }
    vector<vector<int>> permuteUnique(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        flags.resize(nums.size());
        vector<int> val;
        backtrack(nums, 0, val);
        return ans;
    }
};
// @lc code=end

