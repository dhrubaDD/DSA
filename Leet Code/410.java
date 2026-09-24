class Solution {
    public static boolean posSubarray(int[] arr,int n,int k){
        int subA=1, count=0;
        for(int i=0;i<arr.length;i++){
            if(count+arr[i]>n){
                subA++;
                count=arr[i];
            }
            else count+=arr[i];
        }
        return (subA<=k);
    }
    public int splitArray(int[] nums, int k) {
        int low=Arrays.stream(nums).max().getAsInt();
        int high=Arrays.stream(nums).sum();

        int mini=high;

        while(low<=high){
            int mid=low+(high-low)/2;
            boolean posSub = posSubarray(nums, mid, k);

            if(posSub){
                mini=Math.min(mini,mid);
                high=mid-1;
            }
            else low=mid+1;
        }
        return mini;
    }
    
}
