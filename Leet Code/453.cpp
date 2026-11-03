class Solution {
public:
    int minMoves(vector<int>& nums) {
        int low=INT_MAX;
        for(int x:nums){
            if(x<low) low=x;
        }
        int ans=0;
        for(int x:nums){
            ans+=(x-low);
        }

        return ans;
    }
};
