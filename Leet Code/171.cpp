class Solution {
public:
    int titleToNumber(string columnTitle) {
        int n=columnTitle.size()-1;
        int ans=0;
        int i=0;
        int j=n;
        while(i<=n){
            ans+=((int)(columnTitle[i]-'A') + 1)*pow(26,j);
            i++;
            j--;
        }
        return ans;
    }
};
