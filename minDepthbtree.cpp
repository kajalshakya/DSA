#include <bits/stdc++.h>
using namespace std;

struct TreeNode {
    int val;
    TreeNode* left;
    TreeNode* right;
    TreeNode(int x) : val(x), left(NULL), right(NULL) {}
};

class Solution {
public:
    int minDepth(TreeNode* root) {
        if (!root) return 0;

        // If one child is NULL, ignore it and return depth of the other child
        if (!root->left)  return 1 + minDepth(root->right);
        if (!root->right) return 1 + minDepth(root->left);

        // If both children exist, take minimum
        return 1 + min(minDepth(root->left), minDepth(root->right));
    }
};

int main() {
    /*
        Example Tree:
              1
             / \
            2   3
           /
          4

        Minimum depth = 2 (1 -> 3)
    */

    TreeNode* root = new TreeNode(1);
    root->left = new TreeNode(2);
    root->right = new TreeNode(3);
    root->left->left = new TreeNode(4);

    Solution obj;
    cout << "Minimum Depth = " << obj.minDepth(root) << endl;

    return 0;
}
