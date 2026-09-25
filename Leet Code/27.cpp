class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int count=0;
        int i=0,j=nums.size()-1;

        while(i<=j){
            while(i<=j && nums[i]!=val){
                i++;
            }
            if(i>j) break;

            while(i<=j && nums[j]==val){
                j--;
                count++;
            }
            if(i<=j){
                swap(nums[i],nums[j]);
                count++;
                i++;j--;
            }
            
        }
        return nums.size()-count;
    }
};
