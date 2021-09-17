/*
 * @lc app=leetcode.cn id=1185 lang=cpp
 *
 * [1185] 一周中的第几天
 */

// @lc code=start
class Solution {
public:
    string dayOfTheWeek(int day, int month, int year) {
        if (month == 1 || month == 2) {
            month += 12;
            --year;
        }
        int week = (day + month * 2 + (month + 1) * 3 / 5 + year + year / 4 - year / 100 + year / 400) % 7;
        string weeks[] = {"Monday", "Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday"};
        return weeks[week];
    }
};
// @lc code=end

