class Solution {
public:
    vector<int> leaders(vector<int>& nums) {
      vector<int> lead;
      int maxi=INT_MIN;

      for(int i=nums.size()-1;i>=0;i--){
        if(nums[i]>maxi){
            lead.push_back(nums[i]);
            maxi=nums[i];
        }
      }
      reverse(lead.begin(),lead.end());
      return lead;


    }
};
