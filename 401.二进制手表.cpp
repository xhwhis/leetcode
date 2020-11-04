/*
 * @lc app=leetcode.cn id=401 lang=cpp
 *
 * [401] 二进制手表
 */

// @lc code=start
class Solution {
public:
    vector<string> ans;
    void backtrack(int num, int depth, int hour, int minute) {
        if (depth > 10 || hour > 11 || minute > 59) return ;
        if (num <= 0) {
            ans.push_back(to_string(hour) + (minute < 10 ? ":0" : ":") + to_string(minute));
            return ;
        }
        for(int i = depth; i < 10; i++) {
            if (i < 4) {
                backtrack(num - 1, i + 1, hour + (1 << i), minute);
            } else {
                backtrack(num - 1, i + 1, hour, minute + (1 << (i - 4)));
            }
        }
    }
    vector<string> readBinaryWatch(int num) {
        backtrack(num, 0, 0, 0);
        return ans;
    }
};
// @lc code=end

