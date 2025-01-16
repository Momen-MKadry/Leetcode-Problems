func minimumOperations(root *TreeNode) int {
	q := []*TreeNode{root}
	swaps := 0

	for len(q) > 0 {
		levelSize := len(q)
		nodesInLevel := []int{}

		for i := 0; i < levelSize; i++ {
			currentNode := q[0]
			q = q[1:]

			nodesInLevel = append(nodesInLevel, currentNode.Val)

			if currentNode.Left != nil {
				q = append(q, currentNode.Left)
			}
			if currentNode.Right != nil {
				q = append(q, currentNode.Right)

			}
		}

		sortedLevel := make([]int, len(nodesInLevel))
		copy(sortedLevel, nodesInLevel)
		sort.Ints(sortedLevel)

		for i := 0; i < levelSize; i++ {
			if nodesInLevel[i] != sortedLevel[i] {
				correctIndex := slices.Index(nodesInLevel, sortedLevel[i])
				nodesInLevel[i], nodesInLevel[correctIndex] = nodesInLevel[correctIndex], nodesInLevel[i]
				swaps++
			}
		}

	}
	return swaps /// 2 + (swaps%2)
}
