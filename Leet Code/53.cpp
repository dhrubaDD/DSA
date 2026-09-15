class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int maxN=INT_MIN, sum=0;

        for(int i=0;i<nums.size();i++){
            sum+=nums[i];
            maxN=max(maxN,sum);
            if(sum<0) sum=0;
        }
        return maxN;
    }
};
