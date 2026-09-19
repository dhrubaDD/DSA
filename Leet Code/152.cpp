class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int sufx=1,prex=1;
        int maxi=INT_MIN;
        int n=nums.size()-1;
        for(int i=0;i<nums.size();i++){
            prex *= nums[i];
            sufx *= nums[n-i];
            
            maxi=max(prex,maxi);
            maxi=max(sufx,maxi);

            if(sufx==0) sufx=1;
            if(prex==0) prex=1;

        }
        return maxi;
    }
};
