class Solution {
public:
    int subarraySum(vector<int>& nums, int k) {
        map<int,int> m;
        m[0]=1;
        int preSum=0;
        int count=0;

        for(int x:nums){
            preSum+=x;
            int req=preSum-k;
            count+=m[req];

            m[preSum]++;
        }
        return count;
    }
};
