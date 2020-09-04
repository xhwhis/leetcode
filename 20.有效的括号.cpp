/*
 * @lc app=leetcode.cn id=20 lang=cpp
 *
 * [20] 有效的括号
 */

// @lc code=start
class Solution {
public:
    bool isValid(string s) {
        stack<char> left;
        for (char ch : s) {
            if (ch == '(' || ch == '{' || ch == '[') {
                left.push(ch);
            } else {
                if (!left.empty() && ((left.top() == '(' && ch == ')') || (left.top() == '{' && ch == '}') || (left.top() == '[' && ch == ']'))) {
                    left.pop();
                } else {
                    return false;
                }
            }
        }
        return left.empty();
    }
};
// @lc code=end

