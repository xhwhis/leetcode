/*
 * @lc app=leetcode.cn id=515 lang=golang
 *
 * [515] 在每个树行中找最大值
 */

// @lc code=start
/**
 * Definition for a binary tree node.
 * type TreeNode struct {
 *     Val int
 *     Left *TreeNode
 *     Right *TreeNode
 * }
 */
func largestValues(root *TreeNode) []int {
	ans := make([]int, 0)
	var dfs func(*TreeNode, int)
	dfs = func(node *TreeNode, depth int) {
		if node == nil {
			return
		}
		if depth == len(ans) {
            ans = append(ans, node.Val)
        } else {
			if ans[depth] < node.Val {
				ans[depth] = node.Val
			}
        }
        dfs(node.Left, depth + 1)
        dfs(node.Right, depth + 1)
	}
	dfs(root, 0)
	return ans
}
// @lc code=end

