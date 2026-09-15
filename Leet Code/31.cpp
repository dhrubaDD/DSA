class Solution {
public:
    void nextPermutation(vector<int>& nums) {
        int index=-1,key;
        int n=nums.size();
        
        //checking the break point
        for(int i=n-2;i>=0;i--){
            if(nums[i]<nums[i+1]){
                index=i;
                break;
            }
        }
        if(index==-1){
            std::reverse(nums.begin(),nums.end());
            return;
        }
        //check the exact bigger element
        for(int i=n-1;i>index;i--){
            if(nums[i]>nums[index]){
                swap(nums[i],nums[index]);
                break;
            }
        }

        reverse(nums.begin()+index+1,nums.end());
        return;

        
    }
};
