/*
 * @lc app=leetcode.cn id=1598 lang=golang
 *
 * [1598] 文件夹操作日志搜集器
 */

// @lc code=start
func minOperations(logs []string) int {
	step := 0
	for _, log := range logs {
		if log[0] != '.' {
			step++
		} else if log[1] == '.' {
			if step == 0 {
				continue
			}
			step--
		}
	}
	return step
}

// @lc code=end

