/*
 * @lc app=leetcode.cn id=752 lang=cpp
 *
 * [752] 打开转盘锁
 */

// @lc code=start
class Solution {
public:
    string up(string code, int j) {
        if (code[j] == '9') code[j] = '0';
        else code[j]++;
        return code;
    }
    string down(string code, int j) {
        if (code[j] == '0') code[j] = '9';
        else code[j]--;
        return code;
    }
    int openLock(vector<string>& deadends, string target) {
        queue<string> q;
        q.push("0000");
        unordered_map<string, int> deads;
        for (string& i : deadends) {
            deads[i] = 1;
        }
        int cnt = 0;
        while (!q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; i++) {
                string now = q.front();
                q.pop();
                if (deads[now] == 1) continue;
                if (now == target) {
                    return cnt;
                }
                for (int j = 0; j < 4; j++) {
                    if (!deads[up(now, j)]) {
                        q.push(up(now, j));
                    }
                    if (!deads[down(now, j)]) {
                        q.push(down(now, j));
                   }
                }
                deads[now] = 1;
            }
            cnt++;
        }
        return -1;
    }
};
// @lc code=end

