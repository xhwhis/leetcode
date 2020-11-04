/*
 * @lc app=leetcode.cn id=306 lang=cpp
 *
 * [306] 累加数
 */

// @lc code=start
class Solution {
public:
    string add_str(string a, string b) {
        int len = max(a.size(), b.size());
        vector<int> sum(len + 1);
        for (int i = b.size() - 1, j = 0; i >= 0; i--, j++) {
            sum[j] = b[i] - '0';
        }
        for (int i = a.size() - 1, j = 0; i >= 0; i--, j++) {
            sum[j] += (a[i] - '0');
        }
        for (int i = 0; i < len; i++) {
            if (sum[i] < 10) continue;
            sum[i + 1] += sum[i] / 10;
            sum[i] %= 10;
            len += (i == len - 1);
        }
        string res;
        for (int i = len - 1; i >= 0; i--) {
            res.push_back(sum[i] + '0');
        }
        return res;
    }
    bool backtrack(string num, int a, int b, int c) {
        if ((num[a] == '0' && a < b - 1) || (num[b] == '0' && b < c - 1)) return false;
        string sum = add_str(num.substr(a, b - a), num.substr(b, c - b));
        if (c + sum.size() > num.size() || sum != num.substr(c, sum.size())) return false;
        if (c +sum.size() == num.size()) return true;
        return backtrack(num, b, c, c + sum.size());
    }
    bool isAdditiveNumber(string num) {
        for (int i = 1; i < num.size(); i++) {
            for (int j = i + 1; j < num.size(); j++) {
                if (backtrack(num, 0, i, j)) return true;
            }
        }
        return false;
    }
};
// @lc code=end

