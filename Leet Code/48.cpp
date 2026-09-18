class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size(),shell=1;
        int i=0;
        while(i<n-shell){
            for(int j=i;j<n-shell;j++){
                swap(matrix[i][j],matrix[j][n-1-i]);
                swap(matrix[i][j],matrix[n-1-i][n-1-j]);
                swap(matrix[i][j],matrix[n-1-j][i]);
            }
            shell++;
            i++;
        }
       
    }
};
// the complete logic is derived by me so don't laugh :)
