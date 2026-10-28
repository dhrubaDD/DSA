class Solution {
public:
    void genSubs(vector<int> v, vector<int> ans, vector<vector<int>>& Vec){
        if(v.size()==0){
            Vec.push_back(ans);
            return;
        }

        int x=v[0];
        v.erase(v.begin());
        genSubs(v,ans,Vec);
        ans.push_back(x);
        genSubs(v,ans,Vec);
    }
    vector<vector<int>> subsets(vector<int>& nums) {
        vector<vector<int>> Vec;
        vector<int> v={};
        genSubs(nums,v,Vec);

        return Vec;
    }
};
