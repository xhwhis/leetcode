/*
 * @lc app=leetcode.cn id=1779 lang=cpp
 *
 * [1779] 找到最近的有相同 X 或 Y 坐标的点
 */

// @lc code=start
class Solution {
public:
    int nearestValidPoint(int x, int y, vector<vector<int>>& points) {
        int n = points.size(), min = INT_MAX, ans = -1;
        for (int i = 0; i < n; i++) {
            if (points[i][0] == x || points[i][1] == y) {
                int len = fabs(points[i][0] - x) + fabs(points[i][1] - y);
                if (min > len) {
                    min = len;
                    ans = i;
                }
            }
        }
        return ans;
    }
};
// @lc code=end

