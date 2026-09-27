class Solution {
  public:
    double minMaxDist(vector<int> &stations, int k) {
        // Code here
        int n=stations.size();
        double gaps[n-1]={0};
        
        for(int i=0;i<k;i++){
            long double maxGap=-1;
            long maxIndex=-1;
            
            for(int j=0;j<n-1;j++){
                long double dist=stations[j+1]-stations[j];
                long double section=dist/(gaps[j]+1);
                
                if(section>maxGap){
                    maxGap=section;
                    maxIndex=j;
                }
            }
            gaps[maxIndex]++;
        }
        double maxi= 0;
        for(int i=0;i<n-1;i++){
            double gap=(stations[i+1]-stations[i])/(gaps[i]+1);
           maxi=max(maxi,gap);
        }
        return maxi;
    }
};
