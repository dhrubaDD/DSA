class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> v;
        sort(intervals.begin(),intervals.end());

        for(auto x:intervals){
            if(v.empty() || v.back()[1]<x[0]){
                v.push_back(x);
            }
            else{
                v.back()[1]=max(v.back()[1],x[1]);
            }
        }
        return v;
    }
};
