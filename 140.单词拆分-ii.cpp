/*
 * @lc app=leetcode.cn id=140 lang=cpp
 *
 * [140] 单词拆分 II
 */

// @lc code=start
class Solution {
public:
    unordered_map<string, bool> dict;
    vector<bool> flags;
    vector<string> ans;
    void backtrack(string s, int depth, string words) {
        if (depth >= s.size()) {
            words.pop_back();
            ans.push_back(words);
            return ;
        }
        for (int i = depth; i < s.size(); i++) {
            string word = s.substr(depth, i - depth + 1);
            if (dict.find(word) == dict.end() || !flags[i + 1]) continue;
            backtrack(s, i + 1, words + word + " ");
        }
    }
    vector<string> wordBreak(string s, vector<string>& wordDict) {
        for (auto word : wordDict) {
            dict[word] = true;
        }
        int n = s.size();
        flags.resize(n + 1);
        flags[n] = true;
        for (int i = n - 1; i >= 0; i--) {
            for (int j = i; j < n; j++) {
                if (dict.find(s.substr(i, j - i + 1)) != dict.end() && flags[j + 1]) {
                    flags[i] = true;
                    break;
                }
            }
        }
        backtrack(s, 0, "");
        return ans;
    }
};
// @lc code=end

