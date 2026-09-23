class Solution {
public:
    int shipWithinDays(vector<int>& weights, int days) {
        int low=*max_element(weights.begin(),weights.end());
        int high=accumulate(weights.begin(),weights.end(),0);
        int mini=high;

        while(low<=high){
            int mid=low+(high-low)/2;
            int Days=day(weights,mid);

            if(Days<=days){
                mini=min(mini,mid);
                high=mid-1;
            }
            else low=mid+1;
        }
        return mini;
    }
 int day(vector<int>& weights, int n) {
    int days = 1;
    int count = 0;

    for (int i = 0; i < weights.size(); i++) {

        if (count + weights[i] > n) {
            days++;
            count = weights[i];
        }
        else {
            count += weights[i];
        }
    }

    return days;
}
};
