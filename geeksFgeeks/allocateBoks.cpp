class Solution {
  public:
    int findPages(vector<int> &arr, int k) {
        // code here
        if(k>arr.size()) return -1;
        int low=*max_element(arr.begin(),arr.end());
        int high=accumulate(arr.begin(),arr.end(),0);
        
        int mini=high;
        while(low<=high){
            int mid=low+(high-low)/2;
            bool alloc=allocateBooks(arr,mid,k);
            
            if(alloc){
                mini=min(mini,mid);
                high=mid-1;
            }
            else low=mid+1;
        }
        return mini;
    }
    
    bool allocateBooks(vector<int> &arr, int n,int stud){
        int students=1;
        int pages=0;
        for(int i=0;i<arr.size();i++){
            if(pages+arr[i]>n){
                students++;
                pages=arr[i];
            }
            else pages+=arr[i];
        }
        
        return students <= stud;
    }
};
