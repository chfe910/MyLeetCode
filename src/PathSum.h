
#include "../MyLeetCode/stdafx.h"

struct TreeNode {
	int val;
	TreeNode *left;
	TreeNode *right;
	TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    bool hasPathSum(TreeNode *root, int sum) {
        if (!root) return false;

		if (root->left  && hasPathSum(root->left,  sum - root->val)) return true;
		if (root->right && hasPathSum(root->right, sum - root->val)) return true;
		if (root->left == nullptr && root->right == nullptr && root->val == sum) return true;

		return false;
    }
};
