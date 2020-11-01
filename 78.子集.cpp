/*
 * @lc app=leetcode.cn id=78 lang=cpp
 *
 * [78] 子集
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> ans;
    void backtrack(vector<int>& nums, int depth, vector<int>& val) {
        if (depth >= nums.size()) {
            ans.push_back(val);
            return ;
        }
        backtrack(nums, depth + 1, val);
        val.push_back(nums[depth]);
        backtrack(nums, depth + 1, val);
        val.pop_back();
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<int> val;
        backtrack(nums, 0, val);
        return ans;
    }
};
// @lc code=end

