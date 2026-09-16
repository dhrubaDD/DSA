class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int N=0;
        for(int x:nums){
            N=N^x;
        }
        return N;
    }
};
