package main

import "fmt"

type TreeNode struct {
	Val   int
	Left  *TreeNode
	Right *TreeNode
}

func replaceValueInTree(root *TreeNode) *TreeNode {
	q := []*TreeNode{root}
	parents := make(map[*TreeNode]*TreeNode)
	parents[root] = nil

	for len(q) > 0 {
		levelSize := len(q)
		levelSum := 0
		nodesInLevel := []*TreeNode{}
		siblingSum := make(map[*TreeNode]int)

		for i := 0; i < levelSize; i++ {
			currentNode := q[0]
			q = q[1:]

			levelSum += currentNode.Val
			nodesInLevel = append(nodesInLevel, currentNode)

			if currentNode.Left != nil {
				q = append(q, currentNode.Left)
				parents[currentNode.Left] = currentNode
			}
			if currentNode.Right != nil {
				q = append(q, currentNode.Right)
				parents[currentNode.Right] = currentNode
			}
		}

		for _, node := range nodesInLevel {
			parent := parents[node]
			siblingVal := 0

			if parent != nil {
				if parent.Left != nil && parent.Left != node {
					siblingVal += parent.Left.Val
				}
				if parent.Right != nil && parent.Right != node {
					siblingVal += parent.Right.Val
				}
			}

			siblingSum[node] = siblingVal
		}

		for _, node := range nodesInLevel {
			println(node.Val)
			if parents[node] != nil {
				// Calculate the new value as levelSum minus the current node's value and sibling value
				node.Val = levelSum - node.Val - siblingSum[node]
			} else {
				// Root node always gets a value of 0
				node.Val = 0
			}
		}
	}

	return root
}

func main() {
	root := &TreeNode{Val: 5}            // Root node
	root.Left = &TreeNode{Val: 4}        // Left child of root
	root.Right = &TreeNode{Val: 9}       // Right child of root
	root.Left.Left = &TreeNode{Val: 1}   // Left child of node 4
	root.Left.Right = &TreeNode{Val: 10} // Right child of node 4
	root.Right.Right = &TreeNode{Val: 7} // Right child of node 9

	replaceValueInTree(root)

	printTree(root)
}

func printTree(root *TreeNode) {
	if root == nil {
		return
	}
	q := []*TreeNode{root}
	for len(q) > 0 {
		levelSize := len(q)
		for i := 0; i < levelSize; i++ {
			node := q[0]
			q = q[1:]
			fmt.Print(node.Val, " ")
			if node.Left != nil {
				q = append(q, node.Left)
			}
			if node.Right != nil {
				q = append(q, node.Right)
			}
		}
		fmt.Println()
	}
}

