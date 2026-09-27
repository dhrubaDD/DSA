class Solution {
public:
    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        int maxRow=0;
        int ones=0;

        for(int i=0;i<mat.size();i++){
            int count=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1) count++;
            }
            if(count>ones){
                maxRow=i;
                ones=count;
            }
        }
        vector<int> ans;
        ans.push_back(maxRow);
        ans.push_back(ones);

        return ans;
    }
};
