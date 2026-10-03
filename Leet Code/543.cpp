class Solution {
public:
int maxi=-1;
    int depth(TreeNode* node){
        if(node==nullptr) return 0;
        int lh=depth(node->left);
        int rh=depth(node->right);
        maxi=max(maxi,rh+lh);
        return 1+max(rh,lh);
    }
    int diameterOfBinaryTree(TreeNode* root) {
        depth(root);
        return maxi;
    }
};
