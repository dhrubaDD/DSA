class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
        if(root==nullptr) return {};
        vector<vector<int>> ans;
        queue<TreeNode*> q;
        q.push(root);

        while(!q.empty()){
            vector<int> lev;
            int size=q.size();
            for(int i=0;i<size;i++){
                TreeNode* node=q.front();
                q.pop();
                if(node-> left != nullptr)q.push(node -> left);
                if(node-> right != nullptr)q.push(node -> right);
                lev.push_back(node->val);
            }
            ans.push_back(lev);
        }
        return ans;
    }
};
