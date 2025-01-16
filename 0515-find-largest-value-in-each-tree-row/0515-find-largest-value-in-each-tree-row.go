func largestValues(root *TreeNode) []int {
	q := []*TreeNode{root}

    if root == nil{
    return []int{}
  }
	maxVals := []int{}

	for len(q) > 0 {
		levelSize := len(q)
		maxInLevel := -1 << 31

		for i := 0; i < levelSize; i++ {
			currentNode := q[0]
			q = q[1:]

			if currentNode.Val > int(maxInLevel) {
				maxInLevel = currentNode.Val
			}
			if currentNode.Left != nil {
				q = append(q, currentNode.Left)
			}
			if currentNode.Right != nil {
				q = append(q, currentNode.Right)
			}
		}
		maxVals = append(maxVals, maxInLevel)
	}
	return maxVals
}
