/* 1379. Find a Corresponding Node of a Binary Tree in a Clone of That Tree */

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */

class Solution {
public:
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {

        TreeNode * check;

        if (cloned == NULL)
            return NULL;
        if (cloned->val == target->val)
            return (cloned);
        check = getTargetCopy(NULL, cloned->right, target);
        if (check != NULL)
                return (check);
        check = getTargetCopy(NULL, cloned->left, target);
        if (check != NULL)
            return (check);
        return NULL;
    }
};