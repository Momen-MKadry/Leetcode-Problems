func reverseOddLevels(root *TreeNode) *TreeNode {

	dfs(root.Left, root.Right, 0)
	return root
}

func dfs(left *TreeNode, right *TreeNode, level int) {
	if right == nil || left == nil {
		return
	}

	if level%2 == 0 {
		tmp := left.Val
		left.Val = right.Val
        right.Val = tmp
	}
	dfs(left.Left, right.Right, level+1)
	dfs(left.Right, right.Left, level+1)
}
