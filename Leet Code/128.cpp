class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int lastInt=INT_MIN;
        int seq=1,Long=1;
        sort(nums.begin(),nums.end());

        if(nums.size() ==0) return 0;
        
        for(int i=0;i<nums.size();i++){
            if(i==0) lastInt=nums[i];
            else if(nums[i]==lastInt) continue;

            else{
                if(nums[i]==nums[i-1]+1){
                    lastInt=nums[i];
                    seq++;
                    Long=max(Long,seq);
                }
                else seq=1;
            }
        }
        return Long;
    }
};
