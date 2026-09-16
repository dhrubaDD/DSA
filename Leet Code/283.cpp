class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        vector<int> temp;
        int zeros=0;
        for(int x:nums){
            if(x==0) zeros++;
            else{
                temp.push_back(x);
            }
        }
        for(int i=0;i<zeros;i++){
            temp.push_back(0);
        }
        nums=temp;
        
    }
};
