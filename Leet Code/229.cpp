class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        vector<int> v;
        int el1, el2;
        int cnt1=0,cnt2=0;
        for(int i=0;i<nums.size();i++){
            if(cnt1==0 && cnt2==0){
                el1=nums[i];
                cnt1++;
            }
            else if(cnt2==0 && nums[i]!=el1){
                el2=nums[i];
                cnt2++;
            }
            else if(cnt1==0 && nums[i]!=el2){
                el1=nums[i];
                cnt1++;
            }
            else if(nums[i]==el1){
                cnt1++;
            }
            else if(nums[i]==el2){
                cnt2++;
            }
            else if(nums[i]!=el1 && nums[i]!=el2){
                cnt1--;
                cnt2--;
            }
        }
        int count1=0, count2=0;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==el1){
                count1++;
            }
            else if(nums[i]==el2){
                count2++;
            }
            else continue;
        }
        if(count1>nums.size()/3) v.push_back(el1);
        if(count2>nums.size()/3) v.push_back(el2);
        return v;
    }
};
