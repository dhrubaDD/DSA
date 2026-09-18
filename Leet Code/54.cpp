class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {

        int left = 0;
        int top = 0;
        int right = matrix[0].size() - 1;
        int bottom = matrix.size() - 1;

        vector<int> v;

        while(top <= bottom && left <= right) {

            // Left → Right
            for(int i = left; i <= right; i++)
                v.push_back(matrix[top][i]);

            top++;

            // Top → Bottom
            for(int j = top; j <= bottom; j++)
                v.push_back(matrix[j][right]);

            right--;

            // Right → Left
            if(top <= bottom) {
                for(int i = right; i >= left; i--)
                    v.push_back(matrix[bottom][i]);

                bottom--;
            }

            // Bottom → Top
            if(left <= right) {
                for(int j = bottom; j >= top; j--)
                    v.push_back(matrix[j][left]);

                left++;
            }
        }

        return v;
    }
};
