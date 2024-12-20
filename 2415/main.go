package main

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

// BFS Solution, O(n) time, O(n) space
func reverseOddLevels(root *TreeNode) *TreeNode {
	q := []*TreeNode{root}
	parents := make(map[*TreeNode]*TreeNode)
	parents[root] = nil
	level := 0

	for len(q) > 0 {
		levelSize := len(q)
		levelNodes := []*TreeNode{}

		for i := 0; i < levelSize; i++ {

			currentNode := q[0]
			q = q[1:]

			levelNodes = append(levelNodes, currentNode)

			if currentNode.Left != nil {
				q = append(q, currentNode.Left)
			}
			if currentNode.Right != nil {
				q = append(q, currentNode.Right)
			}
		}

		if level%2 != 0 {
			for i, j := 0, len(levelNodes)-1; i < j; i, j = i+1, j-1 {
				levelNodes[i].Val, levelNodes[j].Val = levelNodes[j].Val, levelNodes[i].Val
			}
		}

		level++
	}
	return root
}

//////////////////

// DFS Solution, O(n) time, O(logn) space
// func reverseOddLevels(root *TreeNode) *TreeNode {

// 	dfs(root.Left, root.Right, 0)
// 	return root
// }

// func dfs(left *TreeNode, right *TreeNode, level int) {
// 	if right == nil || left == nil {
// 		return
// 	}

// 	if level%2 == 0 {
// 		tmp := left.Val
// 		left.Val = right.Val
//         right.Val = tmp
// 	}
// 	dfs(left.Left, right.Right, level+1)
// 	dfs(left.Right, right.Left, level+1)
// }
