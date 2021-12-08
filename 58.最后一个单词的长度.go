/*
 * @lc app=leetcode.cn id=58 lang=golang
 *
 * [58] 最后一个单词的长度
 */

// @lc code=start
func lengthOfLastWord(s string) int {
	i := len(s) - 1
	for s[i] == ' ' {
		i--
	}
	ans := 0
	for i >= 0 && s[i] != ' ' {
		ans++
		i--
	}
	return ans
}
// @lc code=end

