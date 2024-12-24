#include <bits/stdc++.h>
#include <queue>
#include <strings.h>

using namespace std;

struct TreeNode {
  int val;
  TreeNode *left;
  TreeNode *right;
  TreeNode() : val(0), left(nullptr), right(nullptr) {}
  TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
  TreeNode(int x, TreeNode *left, TreeNode *right)
      : val(x), left(left), right(right) {}
};

class Solution {
public:
  int minimumOperations(TreeNode *root) {
    queue<TreeNode> q;
    q.push(*root);
    int swaps = 0;
    set<int> sortedTree;

    while (!q.empty()) {
      int levelSize = q.size();
      vector<int> nodesInLevel;

      for (int i = 0; i < levelSize; i++) {
        TreeNode currentNode = q.front();
        q.pop();

        nodesInLevel.push_back(currentNode.val);
        sortedTree.insert(currentNode.val);

        if (currentNode.left)
          q.push(*currentNode.left);
        if (currentNode.right)
          q.push(*currentNode.right);
      }
    }

    q.push(*root);
    int index = 0;
    while (!q.empty()) {
      TreeNode currentNode = q.front();
      q.pop();
      auto sortedIt = sortedTree.find(currentNode.val);
      int sortedIndex = distance(sortedTree.begin(), sortedIt);
      if (sortedIndex != index) {
        swaps++;
      }
      if (currentNode.left)
        q.push(*currentNode.left);
      if (currentNode.right)
        q.push(*currentNode.right);

      index++;
    }

    return (swaps / 2) + (swaps % 2 != 0);
  }
};
