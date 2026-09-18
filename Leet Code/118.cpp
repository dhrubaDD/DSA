class Solution {
public:
    vector<int> generateRow(int row){
        long long ans=1;
        vector<int> v={1};

        for(int i=1;i<row;i++){
            ans=ans*(row-i);
            ans=ans/i;
            v.push_back(ans);
        }
        return v;
    }
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>> v;
        
        for(int i=1;i<=numRows;i++){
           v.push_back(generateRow(i));
        }
        return v;
    }
};
