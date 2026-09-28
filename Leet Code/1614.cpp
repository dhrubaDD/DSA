class Solution {
public:
    int maxDepth(string s) {
        int count=0;
        int maxi=0;
        for(auto x:s){
            if(x=='('){
                count++;
            }
            maxi=max(maxi,count);
            if(x==')') count--;
        }
        return maxi;
    }
};
