class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        int left=0,right=n-1, top=0, bottom=n-1;
        int temp=1;
        vector<vector<int>> v(n, vector<int>(n,0));
        
        while(left<=right && top<=bottom){

            for(int i=left;i<=right;i++){
                v[top][i]=temp;
                temp++;
            }
            top++;
            for(int j=top;j<=bottom;j++){
                v[j][right]=temp;
                temp++;
            }
            right--;
            for(int i=right;i>=left;i--){
                v[bottom][i]=temp;
                temp++;
            }
            bottom--;
            for(int j=bottom;j>=top;j--){
                v[j][left]=temp;
                temp++;
            }
            left++;
        }
        return v;
        
    }
};
