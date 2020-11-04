/*
 * @lc app=leetcode.cn id=90 lang=cpp
 *
 * [90] 子集 II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> ans;
    void backtrack(vector<int>& nums, int depth, vector<int>& val) {
        ans.push_back(val);
        for (int i = depth; i < nums.size(); i++) {
            if (i > depth && nums[i] == nums[i - 1]) continue;
            val.push_back(nums[i]);
            backtrack(nums, i + 1, val);
            val.pop_back();
        }
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<int> val;
        backtrack(nums, 0, val);
        return ans;
    }
};
// @lc code=end

