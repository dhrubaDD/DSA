class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int maxA= *std::max_element(piles.begin(),piles.end());
        int low=1,high=maxA;
        int mini=maxA;

        while(low<=high){
            int mid=low+(high-low)/2;
            long long time=eatBanana(piles,mid);
            if(time<=h){
                mini=min(mini,mid);
                high=mid-1;
            }
            else low=mid+1;
        }
        return mini;
    }

    long long eatBanana(vector<int>& piles, int hour){
        long long totalTime=0;
        for(auto x:piles){
            totalTime+= (long long)ceil((double)x/hour);
        }
        return totalTime;
    }
};
