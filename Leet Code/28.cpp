class Solution {
public:
    int strStr(string haystack, string needle) {
        int n=needle.size();
        
        for(int i=0;i<haystack.size();i++){
            int k=i;
            int j=0;
            if(haystack[k]==needle[j]){
                while(j<=n && haystack[k]==needle[j] && k<haystack.size()){
                    k++;
                    j++;
                }
                if(j==n) return i;
            }
        }
        return -1;
    }
};
