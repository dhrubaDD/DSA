class Solution {
    public int removeElement(int[] nums, int val) {
        int count=0;
        int i=0;
        int n=nums.length;

        while(i<n){
            if(nums[i]!=val){
                i++;
                count++;
                continue;
            } 
            for(int j=i;j<n;j++){
                if(j>=nums.length-1) break;
                nums[j]=nums[j+1];
            }
            n--;    
        }
        return count;
    }
}
