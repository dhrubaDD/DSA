class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {
        int top=0,bottom=matrix.size()-1;
        int left=0,right=matrix[0].size()-1;
        int midr, midc;
        while(top<=bottom){
            midr=top+(bottom-top)/2;
            if(target==matrix[midr][0]) return 1;
            else if(target>matrix[midr][0] && target>matrix[midr][right]) top=midr+1;
            else if(target>matrix[midr][0] && target<=matrix[midr][right]) break;
            else bottom =midr-1;

        }

        while(left<=right){
            midc=left+(right-left)/2;
            if(target==matrix[midr][midc]) return 1;
            else if(target<matrix[midr][midc]) right=midc-1;
            else left=midc+1;
        }
        return 0;
    }
};
