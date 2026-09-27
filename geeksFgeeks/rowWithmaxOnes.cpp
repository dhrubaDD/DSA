class Solution {
  public:
    int rowWithMax1s(vector<vector<int>> &arr) {
        // code here
        int maxi=0;
        int maxRow=-1;
        int n=arr[0].size();
        
        for(int i=0;i<arr.size();i++){
            int count=0;
            
            int low=0, high=n-1;
            while(low<=high){
                int mid=low+(high-low)/2;
                if(arr[i][mid]==1){
                    count=n-mid;
                    high=mid-1;
                }
                else low=mid+1;
            }
            if(count>maxi){
                maxi=count;
                maxRow=i;
            }
        }
        return maxRow;
    }
};
