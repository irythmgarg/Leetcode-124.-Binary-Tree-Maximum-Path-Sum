# Leetcode-124.-Binary-Tree-Maximum-Path-Sum

🌟 Maximum Path Sum in Binary Tree 🌟
📌 Problem Statement:
-

Given a binary tree, find the path with the maximum sum.
A path is any sequence of nodes where each pair of adjacent nodes in the sequence has an edge connecting them. A node can appear at most once in the sequence. The path does not need to go through the root.

---

🧠 Intuition
-

In a binary tree, each node can potentially:

Start a new path (e.g., node by itself),

Extend an existing path from its left or right subtree,

Form a bridge between left and right children via itself (i.e., left + root + right).

To capture the maximum of all such possible paths, we must explore each subtree recursively and keep track of:

The max gain from each side, and

The overall max path sum encountered so far.

---

🚀 Approach
-

We use postorder traversal (left → right → root) to calculate:

The maximum path sum including the current node and one of its subtrees (to return upwards),

The maximum path sum through the current node including both left and right children,

Update the global max path sum from the best of these.

---

🌳 Sample Binary Tree
-
To better understand, let’s take this binary tree:
```cpp

    1
   / \
  2   3
🔄 Possible paths:

1 → 2

1 → 3

2 → 1 → 3 ✅ (Maximum Sum Path: 6)
```
---

🧑‍💻 Author
-
Made with ❤️ by Ridham Garg

🎓 B.Tech Computer Engineering, Thapar University, Patiala

🆔 Roll No: 102203014

---

✨ Final Thoughts
This elegant DFS-based solution taps into the raw power of recursion and backtracking, maintaining a global maximum along the way. A clean and efficient way to deal with complex tree structures! 🌲💡

Happy Coding! 🚀💻🌟



