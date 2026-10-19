class Solution {
public:
    int checkDist(vector<int>& nums,int a, int b){
        set<int> s;
        for(int i=a;i<=b;i++){
            s.insert(nums[i]);
        }
        return s.size();

    }
    int sumCounts(vector<int>& nums) {
        int ans=0;
        for(int i=0;i<nums.size();i++){
            for(int j=i;j<nums.size();j++){
                int n=checkDist(nums,i,j);
                ans+=n*n;
            }
        }
        return ans;
    }
};
