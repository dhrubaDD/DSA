class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int pos=0,neg=1;
        vector<int> ar(nums.size());
        for(int i=0;i<nums.size();i++){
            if(nums[i]>0){
                ar[pos]=nums[i];
                pos+=2;
            }
            else{
                ar[neg]=nums[i];
                neg+=2;
            }
        }
        return ar;
    }
};
