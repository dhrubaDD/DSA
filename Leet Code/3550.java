class Solution {
    public int smallestIndex(int[] nums) {
        for(int i=0;i<nums.length;i++){
            boolean digitSum=digitS(nums[i],i);
            if(digitSum) return i;
        }
        return -1;
    }
    public static boolean digitS(int n,int k){
        int sum=0;
        int temp=n;
        while(temp>0){
            int digits=temp%10;
            sum+=digits;
            temp/=10;
        }
        return (sum==k);
    }
}
