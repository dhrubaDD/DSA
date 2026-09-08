    int maxArea(vector<int>& height) {
        int maxWater=INT_MIN;
        for(int i=0;i<height.size();i++){
            for(int j=i+1;j<height.size();j++){
                int area=(j-i)*min(height[i],height[j]);
                maxWater=max(maxWater,area);
            }
        }
        return maxWater;
    }
int maxArea(vector<int>& height) {
        int i=0,j=height.size()-1;
        int maxWater=INT_MIN;
        while(i<j){
            int area=(j-i)*min(height[i],height[j]);
            maxWater=max(maxWater,area);
            if(height[i]>height[j]){
                j--;
            }
            else{
                i++;
            }
        }
        return maxWater;
    }