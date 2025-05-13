/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */

class Solution {
public:
    // Variable to keep track of the maximum path sum found so far
    int maxans = INT_MIN;

    // Recursive function to calculate maximum path sum for each subtree
    int answer(TreeNode* root) {
        // Base case: if node is null, return 0
        if (!root) return 0;

        // Recursively compute max path sum for left and right subtrees
        int left = answer(root->left);
        int right = answer(root->right);

        // Compute the sum if the path goes through the current root node (including both children)
        int throughroot = root->val + left + right;

        // Compute the maximum path sum including either left or right child (only one path can be continued upward)
        int anyonepath = max(left, right) + root->val;

        // Update the global max path sum with the best among:
        // - existing maxans
        // - path including root and one child (anyonepath)
        // - full path through root (left + root + right)
        // - just the root value (if both children give negative contribution)
        maxans = max({maxans, anyonepath, throughroot, root->val});

        // Return the max path sum from current root to one side only, to be used in upper recursive calls
        return max(anyonepath, root->val);
    }

    // Main function to initiate the recursion and return the final result
    int maxPathSum(TreeNode* root) {
        answer(root);
        return maxans;
    }
};
