/*
 * @lc app=leetcode.cn id=56 lang=cpp
 *
 * [56] 合并区间
 */

// @lc code=start
class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> ans;
        int n = intervals.size();
        if (n == 0 || n == 1) return intervals;
        sort(intervals.begin(), intervals.end(), [](auto& a, auto& b) { return a[0] < b[0]; });
        ans.push_back(intervals[0]);
        for (int i = 1; i < n; i++) {
            auto& last = ans.back();
            if (intervals[i][0] > last[1]) {
                ans.push_back(intervals[i]);
            } else if (intervals[i][1] > last[1]) {
                last[1] = intervals[i][1];
            }
        }
        return ans;
    }
};
// @lc code=end

