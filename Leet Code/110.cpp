class Solution {
public:
    int height(TreeNode* node){
        if(node==nullptr) return 0;
        int lh=height(node->left);
        int rh=height(node->right);
        if(lh==-1 || rh==-1) return -1;
        if(abs(lh-rh)>1) return -1;
        return 1+max(lh,rh);
    }
    bool isBalanced(TreeNode* root) {
        if(height(root)==-1) return false;
        return true;
    }
};
