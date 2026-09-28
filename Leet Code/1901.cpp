class Solution {
public:
    vector<int> findPeakGrid(vector<vector<int>>& mat) {
        int low=0,high=mat[0].size()-1;

        while(low<=high){
            int mid=low+(high-low)/2;
            int row=findRow(mat,mid);

            int left= mid-1>=0? mat[row][mid-1]:-1;
            int right= mid+1<mat[0].size()? mat[row][mid+1]:-1;

            if(mat[row][mid]>left && mat[row][mid]>right) return {row,mid};
            else if(mat[row][mid]<left) high=mid-1;
            else low=mid+1;
        }
        return {0,0};
    }
    int findRow(vector<vector<int>> &mat,int col){
        int maxi=0;
        for(int i=1;i<mat.size();i++){
            if(mat[i][col]>mat[maxi][col]) maxi=i;
        }
        return maxi;
    }
};
