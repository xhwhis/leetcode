/*
 * @lc app=leetcode.cn id=1189 lang=javascript
 *
 * [1189] “气球” 的最大数量
 */

// @lc code=start
/**
 * @param {string} text
 * @return {number}
 */
var maxNumberOfBalloons = function(text) {
    let map = {'a' : 0, 'b' : 0, 'o' : 0, 'l' : 0, 'n' : 0};
    for (let ch of text) {
        map[ch]++;
    }
    return Math.min(map['a'], map['b'], map['o'] >> 1, map['l'] >> 1, map['n']);
};
// @lc code=end

