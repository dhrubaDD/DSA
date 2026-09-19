class Solution {
public:
    int count=0;
    void merge(vector<int>& nums, int l, int mid, int r) {
        int i = l;
        int j = mid + 1;

        vector<int> temp;

        while (i <= mid && j <= r) {
            if (nums[i] <= nums[j]) {
                temp.push_back(nums[i]);
                i++;
            }
            else {
                temp.push_back(nums[j]);
                j++;
            }
        }

        while (i <= mid) {
            temp.push_back(nums[i]);
            i++;
        }

        while (j <= r) {
            temp.push_back(nums[j]);
            j++;
        }

        // Copy merged elements back
        for (int k = 0; k < temp.size(); k++) {
            nums[l + k] = temp[k];
        }
    }

    void countPairs(vector<int>& nums, int l, int mid, int r){
        int right=mid+1;
        for(int i=l;i<mid+1;i++){
            while(right<=r && nums[i]>2LL*nums[right]){
                right++;
            }
            count+=right-(mid+1);
        }
    }
    void mergeSort(vector<int>& nums, int l, int r) {
        if (l >= r)
            return;

        int mid = l + (r - l) / 2;

        mergeSort(nums, l, mid);
        mergeSort(nums, mid + 1, r);
        countPairs(nums,l,mid,r);
        
        merge(nums, l, mid, r);
    }
    int reversePairs(vector<int>& nums) {
        mergeSort(nums,0,nums.size()-1);
        return count;
    }
};
