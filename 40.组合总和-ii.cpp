/*
 * @lc app=leetcode.cn id=40 lang=cpp
 *
 * [40] 组合总和 II
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> ans;
    void backtrack(vector<int>& candidates, int target, int depth, vector<int>& val) {
        if (target == 0) {
            ans.push_back(val);
            return ;
        }
        for (int i = depth; i < candidates.size(); i++) {
            if (target < candidates[i] || (depth < i && candidates[i] == candidates[i - 1])) continue;
            val.push_back(candidates[i]);
            backtrack(candidates, target - candidates[i], i + 1, val);
            val.pop_back();
        }
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        vector<int> val;
        backtrack(candidates, target, 0, val);
        return ans;
    }
};
// @lc code=end

