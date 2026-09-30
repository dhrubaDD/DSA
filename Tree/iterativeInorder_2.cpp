class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if(root == nullptr) return {};
        vector<int> ans;
        stack<TreeNode*> s;
        TreeNode* node=root;

        while(node != nullptr || !s.empty()){
            while(node != nullptr){
                s.push(node);
                node=node->left;
            }
            node= s.top();
            s.pop();
            ans.push_back(node ->val);
            node=node->right;
        }
        return ans;
    }
};
