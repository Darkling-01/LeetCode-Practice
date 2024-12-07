// 222. Count Complete Tree Nodes
class Solution {
public:
    int countNodes(TreeNode* root) {

        if(root == NULL)
            return 0;
        // call countNodes() 
        int l = countNodes(root->left);
        int r = countNodes(root->right);

        return 1 + l + r;
    }
};
