/*
 * @lc app=leetcode.cn id=1299 lang=golang
 *
 * [1299] 将每个元素替换为右侧最大元素
 */

// @lc code=start
func replaceElements(arr []int) []int {
	n := len(arr)
	ans := make([]int, n)
	ans[n-1] = -1
	for i := n - 2; i >= 0; i-- {
		ans[i] = func(a, b int) int {
			if a > b {
				return a
			}
			return b
		}(ans[i+1], arr[i+1])
	}
	return ans
}

// @lc code=end

