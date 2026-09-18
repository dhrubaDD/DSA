class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        int N=matrix.size(), M= matrix[0].size();
        //row[N]= matrix[...][0]
        //col[M]= matrix[0][...]
        int col0=1;

        for(int i=0;i<N;i++){
            for(int j=0;j<M;j++){
                if(matrix[i][j]==0){
                    //row[]
                    matrix[i][0]=0;
                    //col[]
                    if(j!=0)
                        matrix[0][j]=0;
                    else
                    col0=0;    
                }
            }
        }

        for(int i=1;i<N;i++){
            for(int j=1;j<M;j++){
                if(matrix[i][j]!=0){
                    if(matrix[i][0]==0 || matrix[0][j]==0)
                        matrix[i][j]=0;
                }
            }
        }

        if(matrix[0][0]==0)
            for(int j=1;j<M;j++) matrix[0][j]=0;
        if(col0==0){
            for(int i=0;i<N;i++) matrix[i][0]=0;
        }    

        
    }
};
