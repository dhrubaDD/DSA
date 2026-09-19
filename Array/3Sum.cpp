class Solution {
public:
    vector<int> triplet(int a, int b, int c){
        vector<int> v={a,b,c};
        sort(v.begin(),v.end());
        return v;
    }

    vector<vector<int>> threeSum(vector<int>& nums) {
        map<int,int> m;
        set<vector<int>> temp;

        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(m[-(nums[i]+nums[j])]==1)
                    temp.insert(triplet(nums[i],nums[j],(-nums[i]-nums[j])));
                m[nums[j]]=1;    
            }
            m.clear();
        }
        vector<vector<int>> v={temp.begin(),temp.end()};
        return v;
    }
};
