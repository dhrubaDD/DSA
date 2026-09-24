class Solution {
    public int aggressiveCows(int[] arr, int k) {
        // code here
        int low=1;
                int high = Arrays.stream(arr).max().getAsInt();
                int maxi=1;

                Arrays.sort(arr);

                while(low<=high){
                    int mid=(low+high)/2;
                    boolean posCow= placeCow(arr,mid,k);
                    if(posCow){
                        maxi=Math.max(maxi,mid);
                        low=mid+1;
                    }
                    else high=mid-1;
                }
                return maxi;
    }
    public static boolean placeCow(int[] arr, int m, int n){
            int cow=1,last=0;
            for(int i=1;i<arr.length;i++){
                if(arr[i]-arr[last]>=m){
                    cow++;last=i;
                }
                else continue;
            }
            if(cow>=n) return true;
            return false;
        }
}
