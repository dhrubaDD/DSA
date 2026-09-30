class Solution {
public:
    vector<int> postorderTraversal(TreeNode* root) {
        if(root == NULL) return {};
        vector<int> ans;
        stack<TreeNode*> s;
        TreeNode* curr=root;
        TreeNode* lastvisited =nullptr;

        while(curr!=nullptr || !s.empty()){
            while(curr!=nullptr){
                s.push(curr);
                curr=curr->left;
            }
            TreeNode* node=s.top();

            if(node->right != nullptr && lastvisited != node->right){
                curr=node -> right;
            }
            else{
                ans.push_back(node->val);
                lastvisited=node;
                s.pop();
            }
        }
        return ans;
    }
};
