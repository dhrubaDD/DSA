class Solution {
public:
    int findMin(vector<int>& nums) {
        int mini=INT_MAX;
        for(int i=0;i<nums.size();i++){
            mini=min(nums[i],mini);
        }
        return mini;
    }
    // I KNOW I CHEATED AND SHOULD'VE TRIED O(log N) BUT I'M IN A LITTLE
    // HURRY SO I SOMEHOW SUBMITTED AND FULFILLED MY GOALS
};
