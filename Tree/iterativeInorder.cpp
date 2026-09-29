// this solution has a major flaww that it modifies the tree while traversing 
// but it is indegenious and i'm more than delighted to share this

class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        if(root==nullptr) return {};
        
        // Iterative approach
        vector<int> ans;
        stack<TreeNode*> s;
        s.push(root);

        while(!s.empty()){
            TreeNode * node = s.top();
            if(node->left !=nullptr){
                s.push(node->left);
                node -> left= nullptr;
                continue;
            }
            else ans.push_back(node->val);
            s.pop();
            if(node->right != nullptr){
                s.push(node->right);
                node -> right =nullptr;
            }
        }
        return ans;
    }
};
